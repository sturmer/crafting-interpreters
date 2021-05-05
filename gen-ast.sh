#!/bin/bash

./compile.sh
cd build
java com.craftinginterpreters.tool.GenerateAst ../com/craftinginterpreters/lox/
cd -
