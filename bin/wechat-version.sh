#!/usr/bin/env bash

echo $(defaults read /Applications/WeChat.app/Contents/Info MMBundleVersion | ( IFS=".$IFS" ; read a b c d && echo $a.$b.$c-$d ))
