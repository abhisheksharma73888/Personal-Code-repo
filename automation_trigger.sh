#!/bin/bash
Release=$1
Build=$2
export NS_WDIR="/home/cavisson/work"
. ${NS_WDIR}/etc/netstorm.env
build_upgrade(){
echo "Release : $Release,Build : $Build"
	cd /home/cavisson/work/upgrade
	if [ ${Release} = 4.13.0 ]; then
		curl -O http://10.10.30.16:8992/U20/${Release}/netstorm_all.${Release}.${Build}_Ubuntu2004_64.bin
		curl -O http://10.10.30.16:8992/U20/${Release}/thirdparty.${Release}.${Build}_Ubuntu2004_64.bin
		echo "Build is downloaded successfully!!"
	else
		echo "NOTE : Build is not downloaded. Please select 4.13.0 Release for upgrading."
	fi
	#echo "Build is downloaded"
	#if [ $? -eq 0 ];then
	#	echo "Build is downloaded successfully!!"
	#fi
	export NS_WDIR="/home/cavisson/work"
	export TOMCAT_DIR="/home/cavisson/work/apps/apache-tomcat-9.0.65"
	export HOME_DIR="/home/cavisson"
        export JAVA_HOME="/home/cavisson/apps/amazon-corretto-8.372.07.1-linux-x64"
	export ANT_HOME="/usr/local/ant"
	export TOMCAT_CMD="tomcat"
	#echo "NS_WDIR =$NS_WDIR TOMCAT_DIR=$TOMCAT_DIR TOMCAT_CMD=$TOMCAT_DIR "
	if [ ${Release} = 4.13.0 ]; then
		bash /home/cavisson/work/upgrade/thirdparty.${Release}.${Build}_Ubuntu2004_64.bin
		sleep 5
		bash /home/cavisson/work/upgrade/netstorm_all.${Release}.${Build}_Ubuntu2004_64.bin
		sleep 5
		echo "Build upgrade completed"
	fi
        /etc/init.d/apiGateway start
	/etc/init.d/alert_manager start

}

version_verification(){
version=$(nsu_get_version | head -1 | awk -F " " '{print $2}')
build=$(nsu_get_version | head -1 | cut -d '#' -f2 | cut -d ')' -f1 | sed -e 's/\ //g')
if [ "$version" == "$Release" ] && [ "$build" == "$Build" ];then
	echo "Build upgraded successfully!!!"	
	return 0
else
	echo "Build not upgraded successfully ...... Please try again "
	return 1
fi 
}

#build_upgrade $1 $2
build_upgrade

export ANT_HOME="/usr/local/ant"

echo $NS_WDIR
#if version_verification;then
	cd /home/cavisson/workspace/Golang
    pwd
    bash start_automation.sh smoke
#fi
