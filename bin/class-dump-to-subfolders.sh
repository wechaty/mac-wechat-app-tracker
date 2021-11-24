#!/usr/bin/env bash

set -e

function subFolder () {
  local file=$1

  if [[ $file =~ ^([A-Z][A-Z0-9_-]+)[A-Z_-][a-z0-9_-] ]]
  then
    # echo 1/"${BASH_REMATCH[1]}"/${file##*/}
    echo ${BASH_REMATCH[1]}
  elif [[ $file =~ ^([A-Z][a-z0-9_-]+) ]]
  then
    # echo 2/"${BASH_REMATCH[1]}"/${file##*/}
    echo ${BASH_REMATCH[1]}
  elif [[ $file =~ ^([A-Z]+)\. ]]
  then  # GSGPU.h
    echo ${BASH_REMATCH[1]}
  elif [[ $file =~ ^([A-Z]+)[A-Z_-][a-z0-9_-] ]]
  then # CUtility.h
    echo ${BASH_REMATCH[1]}
  else
    echo Symbol
  fi
}

CLASS_DUMP_BIN='/usr/local/bin/class-dump'

if [ ! -x "$CLASS_DUMP_BIN" ]; then
  wget -q -O /tmp/class-dump https://github.com/AloneMonkey/MonkeyDev/raw/master/bin/class-dump
  sudo mv /tmp/class-dump /usr/local/bin/class-dump
  sudo chmod +x /usr/local/bin/class-dump
fi

if [ ! -d class-dump ]; then
  mkdir class-dump
fi

pushd class-dump

# class-dump -H /Applications/WeChat.app

for file in *.h; do
  folder=$(subFolder "$file")
  if [ ! -d "$folder" ]; then
    mkdir "$folder"
  fi

  echo "Moving $file -> $folder/"
  mv "$file" "$folder"
done

popd
