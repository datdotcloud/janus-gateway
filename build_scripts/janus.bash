#yum -y install libnice-janus libsrtp-janus libwebsockets-janus mysql mysql-devel mysql-lib glib2-devel
export PKG_CONFIG_PATH=/opt/janus/lib/pkgconfig/
#git clone --recursive https://github.com/WatchBeam/janus-gateway.git
cd ..
#git submodule update --init
#need to manually specify path to libwebsockets as configure script isnt using ldconfig for it (FIX ME)
sh autogen.sh
PLUGIN_OPTS="--disable-plugin-textroom --disable-plugin-audiobridge --disable-plugin-echotest --disable-plugin-recordplay --disable-plugin-sip \
	--disable-plugin-streaming --disable-plugin-videocall --disable-plugin-videoroom --disable-plugin-voicemail"
GENERAL_OPTS="--disable-data-channels --disable-docs --disable-rabbitmq --disable-unix-sockets --disable-mqtt --enable-libsrtp2"
./configure --prefix=/opt/janus $PLUGIN_OPTS $GENERAL_OPTS CFLAGS='-pg'
#./configure --prefix=/opt/janus $PLUGIN_OPTS $GENERAL_OPTS LDFLAGS="-L/lib64 -Wl,-rpath=/lib64" CFLAGS="-I/usr/include"
make clean
make
if [[ -z "$1" ]]; then
echo -e "\e[7mInstalling to /opt/janus-impstar\e[27m"
make install
else
echo -e "\e[7mInstalling to $1/opt/janus-impstar\e[27m"
make install DESTDIR=$1
fi
