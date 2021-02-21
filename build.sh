#!/bin/sh
cd Thermal-FIST
rm -r build
mkdir build
cd build
cmake -DBUILD_SHARED_LIBS=ON -DSTANDALONE_MINUIT=ON ../

if [ "$1" = "fast" ]; then
  make ThermalFIST -j
else
  make ThermalFIST
fi

cd ../..

