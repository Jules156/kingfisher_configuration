#!/bin/bash

# Run this as root, from the directory containing it!
#
# USAGE: sudo ./install.bash
#

stackPath=./

export user=kingfisler
export robot=kingfisher
export release=$(ls /opt/ros/ | tail -n1)

source helpers.bash
source /opt/ros/${release}/setup.bash

pushd `rospack find ${robot}_bringup`/upstart > /dev/null

install_udev_rules
install_job core wlan0 11311
# install_job core eth0 11311

# Configure ublox GPS.
ublox_hex=`rospack find ${robot}_bringup`/config/ublox.hex
if [ -e /dev/ublox ]; then
  echo "Attempting to configure ublox GPS."
  sed '/^\#/d' $ublox_hex | xxd -r -p > /dev/ublox
else
  echo "Can't find ublox GPS to configure it. Please replug it and rerun this script."
fi

popd > /dev/null
