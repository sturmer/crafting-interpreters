#!/bin/bash

set -e

javac -d build "com/craftinginterpreters/lox/*.java"
javac -d build "com/craftinginterpreters/tool/*.java"

# Launch the interpreter:
# cd build/
# java com/craftinginterpreters/lox/Lox
