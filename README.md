# CPTS-223-Examples

![CMake compilation](https://github.com/DataOceanLab/CPTS-223-Examples/workflows/CMake%20compilation/badge.svg)

## Compile

All commands are supposed to be run in a Ubuntu terminal

1. Go to the example directory you want. For example, `cd cmake-example`
2. Create a directory for the build if you didn't do it before: `mkdir build`
3. Ask cmake to configure the project: `cmake -B build -S .`  After this, you will see some cmake config files in the `build` folder.
4. Ask cmake to build the project: `cmake --build build`  After this, you will see the executable program in the `build` folder
5. Run the executable program. For example, `./build/CPTS_223_CMake_Example`

If anything strange happens during the compilation, you can simply delete the `build` folder and see whether the problem is gone: `rm build`

## Use GitHub Action to auto-compile your build

1. Open this file in this folder: `github/workflows/cmake.yml` and follow the example to write your own GitHub action
2. Click the "Action" tag on this GitHub page and see the result of your GitHub action
3. You can update the badge in this README file to show your Action status
