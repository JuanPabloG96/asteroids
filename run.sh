#!/bin/bash

set -e

cd build/
bear -- cmake
cd ..

echo -e "Running program..\n"

./bin/main
