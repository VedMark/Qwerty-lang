#!/usr/bin/env bash

CMAKE="cmake"
GCC="g++"
CPP_FLAGS="-std=c++14 -Wall -pedantic -Werror -o2"

TARGET_FILE="target.cpp"
[[ "$1" == *.qw ]] && RES_FILE="${1/.qw/}" || RES_FILE="$1"

rm -rf run

if [[ ! -f 'build/qwerty_lang' ]]; then
    rm -rf build
    mkdir build && cd build
    ${CMAKE} -DCMAKE_INSTALL_PREFIX=/media/mark/BSUIR/6_sem/yapis/qwerty_lang/build ../
    make
    cd ..
fi

./build/qwerty_lang $1 ${TARGET_FILE}

mkdir run && cd run
mv ../${TARGET_FILE} ./
${GCC} ${CPP_FLAGS} ${TARGET_FILE} -o ${RES_FILE}
