#!/bin/sh
ifconfig | grep ether | sed -n 's/ .* ether //p'