#!/bin/sh

npm update
mkdir -p artifacts

rm -rf build
./node_modules/.bin/node-pre-gyp configure rebuild package --target_arch=ia32
cp -r build/stage/* artifacts

rm -rf build
./node_modules/.bin/node-pre-gyp configure rebuild package --target_arch=x64
cp -r build/stage/* artifacts

