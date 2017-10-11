//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
// 
//     Tool     : bondc, Version=3.0.1, Build=bond-git.retail.not
//     Template : Microsoft.Bond.Rules.dll#Rules_BOND_CPP.tt
//     File     : bond_types.cpp
//
//     Changes to this file may cause incorrect behavior and will be lost when
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "bond_types.h"
#include "bond_reflection.h"
#include <bond/core/exception.h>

namespace bond
{

const bond::Metadata SerializableExceptionBase::Schema::metadata
    = SerializableExceptionBase::Schema::GetMetadata();
    

const bond::Metadata SerializableExceptionBase::Schema::s_m_message_metadata
    = bond::reflection::MetadataInit("m_message", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata Void::Schema::metadata
    = Void::Schema::GetMetadata();
    

const bond::Metadata GUID::Schema::metadata
    = GUID::Schema::GetMetadata();
    

const bond::Metadata GUID::Schema::s_Data1_metadata
    = bond::reflection::MetadataInit("Data1", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata GUID::Schema::s_Data2_metadata
    = bond::reflection::MetadataInit("Data2", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata GUID::Schema::s_Data3_metadata
    = bond::reflection::MetadataInit("Data3", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata GUID::Schema::s_Data4_metadata
    = bond::reflection::MetadataInit("Data4", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

namespace _bond_enumerators
{
namespace Modifier
{

const
std::map<std::string, enum Modifier> _name_to_value_Modifier = 
    boost::assign::map_list_of<std::string, enum Modifier>
        ("Optional", _bond_enumerators::Modifier::Optional)
        ("Required", _bond_enumerators::Modifier::Required)
        ("RequiredOptional", _bond_enumerators::Modifier::RequiredOptional);

const
std::map<enum Modifier, std::string> _value_to_name_Modifier = 
    bond::reverse_map(_name_to_value_Modifier);

} // namespace Modifier
} // namespace _bond_enumerators>


const bond::Metadata Variant::Schema::metadata
    = Variant::Schema::GetMetadata();
    

const bond::Metadata Variant::Schema::s_uint_value_metadata
    = bond::reflection::MetadataInit("uint_value", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata Variant::Schema::s_int_value_metadata
    = bond::reflection::MetadataInit("int_value", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata Variant::Schema::s_double_value_metadata
    = bond::reflection::MetadataInit("double_value", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata Variant::Schema::s_string_value_metadata
    = bond::reflection::MetadataInit("string_value", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata Variant::Schema::s_wstring_value_metadata
    = bond::reflection::MetadataInit("wstring_value", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata Variant::Schema::s_nothing_metadata
    = bond::reflection::MetadataInit("nothing", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata Metadata::Schema::metadata
    = Metadata::Schema::GetMetadata();
    

const bond::Metadata Metadata::Schema::s_name_metadata
    = bond::reflection::MetadataInit("name", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata Metadata::Schema::s_qualified_name_metadata
    = bond::reflection::MetadataInit("qualified_name", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata Metadata::Schema::s_attributes_metadata
    = bond::reflection::MetadataInit("attributes", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata Metadata::Schema::s_modifier_metadata
    = bond::reflection::MetadataInit(::bond::_bond_enumerators::Modifier::Optional, "modifier", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata Metadata::Schema::s_default_value_metadata
    = bond::reflection::MetadataInit("default_value", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata TypeDef::Schema::metadata
    = TypeDef::Schema::GetMetadata();
    

const bond::Metadata TypeDef::Schema::s_id_metadata
    = bond::reflection::MetadataInit(::bond::_bond_enumerators::BondDataType::BT_STRUCT, "id", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata TypeDef::Schema::s_struct_def_metadata
    = bond::reflection::MetadataInit(static_cast<uint16_t>(0), "struct_def", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata TypeDef::Schema::s_element_metadata
    = bond::reflection::MetadataInit("element", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata TypeDef::Schema::s_key_metadata
    = bond::reflection::MetadataInit("key", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata TypeDef::Schema::s_bonded_type_metadata
    = bond::reflection::MetadataInit("bonded_type", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata FieldDef::Schema::metadata
    = FieldDef::Schema::GetMetadata();
    

const bond::Metadata FieldDef::Schema::s_metadata_metadata
    = bond::reflection::MetadataInit("metadata", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata FieldDef::Schema::s_id_metadata
    = bond::reflection::MetadataInit("id", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata FieldDef::Schema::s_type_metadata
    = bond::reflection::MetadataInit("type", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata StructDef::Schema::metadata
    = StructDef::Schema::GetMetadata();
    

const bond::Metadata StructDef::Schema::s_metadata_metadata
    = bond::reflection::MetadataInit("metadata", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata StructDef::Schema::s_base_def_metadata
    = bond::reflection::MetadataInit("base_def", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata StructDef::Schema::s_fields_metadata
    = bond::reflection::MetadataInit("fields", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata SchemaDef::Schema::metadata
    = SchemaDef::Schema::GetMetadata();
    

const bond::Metadata SchemaDef::Schema::s_structs_metadata
    = bond::reflection::MetadataInit("structs", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata SchemaDef::Schema::s_root_metadata
    = bond::reflection::MetadataInit("root", bond::reflection::optional_field_modifier::value, 
        bond::reflection::Attributes());

const bond::Metadata Polymorphic::Schema::metadata
    = Polymorphic::Schema::GetMetadata();
    

const bond::Metadata Polymorphic::Schema::s_bond_meta_metadata
    = bond::reflection::MetadataInit("bond_meta", bond::reflection::required_optional_field_modifier::value, 
        bond::reflection::Attributes());

} // namespace bond

