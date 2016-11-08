if [[ -z "$1" ]]; then
echo "Error: path to janus files not specified"
exit -1
fi
cp janus.service $1/opt/janus/etc/
fpm --description "Janus WebRTC Gateway with Beam FTL Impstar plugin" \
	-n janus-impstar -v 1.2.8d -t rpm -s dir -C $1 -p NAME_VERSION_ARCH.rpm \
	--after-install janus_post_install \
	--after-remove janus_post_remove \
	
