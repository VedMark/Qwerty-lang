#!/usr/bin/env bash

CMAKE="cmake"
GCC="g++"
CPP_FLAGS="-Wall -pedantic -Werror -o2"

TARGET_FILE="target.cpp"
[ "$1" == *.qw ] && RES_FILE="${1/.qw/}" || RES_FILE=$1

rm -rf build
rm -rf run

mkdir build && cd build
${CMAKE} -DCMAKE_INSTALL_PREFIX=/media/mark/BSUIR/6_sem/yapis/qwerty_lang/build ../
make
cd ..
./build/qwerty_lang $1 ${TARGET_FILE}

mkdir run && cd run
cd run
mv ../${TARGET_FILE} ./
${GCC} ${CPP_FLAGS} ${TARGET_FILE} -o ${RES_FILE}
