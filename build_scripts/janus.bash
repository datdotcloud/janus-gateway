yum -y install libnice-janus libsrtp-janus libwebsockets-janus mysql mysql-devel mysql-lib glib2-devel
export PKG_CONFIG_PATH=/opt/janus/lib/pkgconfig/
git clone --recursive https://github.com/WatchBeam/janus-gateway.git
cd janus-gateway
#need to manually specify path to libwebsockets as configure script isnt using ldconfig for it (FIX ME)
sh autogen.sh
./configure --prefix=/opt/janus --disable-data-channels --disable-docs LDFLAGS="-L/opt/libwebsockets/lib -Wl,-rpath=/opt/libwebsockets/lib" CFLAGS="-I/opt/libwebsockets/include" --disable-rabbitmq
make
if [[ -z "$1" ]]; then
echo -e "\e[7mInstalling to /opt/janus\e[27m"
make install
else
echo -e "\e[7mInstalling to $1/opt/janus\e[27m"
make install DESTDIR=$1
fi
