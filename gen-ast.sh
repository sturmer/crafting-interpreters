#!/bin/bash

./cc
cd build
java com.craftinginterpreters.tool.GenerateAst ../com/craftinginterpreters/lox/
cd -
