// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#pragma once

namespace bond
{

namespace detail
{

// Fix the ODR check under Linux where due to the difference in symbol visibility rules
// two defined with identical template arguments in two different linked binaries
// one_definition<One,Variant> structs would access the same counter<T> constructor,
// erroneously causing an assert.
// E.g. in iOS you can use nm -g <module> | c++filt -p -i | grep "one_definition"
// to discover the colliding symbols in multiple modules.
# if (defined(_WIN32) || defined(__WIN32__) || defined(WIN32)) && !defined(__CYGWIN__)
#   define BOND_ODR_VISIBILITY_FIX
# else
#   define BOND_ODR_VISIBILITY_FIX __attribute__((visibility("hidden")))
# endif

template <typename T>
struct BOND_ODR_VISIBILITY_FIX counter
{
    counter()
    {
        // This assert indicates violation of One Definition Rule for T.
        BOOST_ASSERT(!value++);
    }
    
    static int value;
};


template <typename T>
int counter<T>::value;

}


template <typename One, typename Variant>
struct one_definition
{
    static detail::counter<One> value;
};


template <typename One, typename Variant>
detail::counter<One> one_definition<One, Variant>::value;


}
