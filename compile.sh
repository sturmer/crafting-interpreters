#!/bin/bash

set -e

javac -d build com/craftinginterpreters/lox/*
javac -d build com/craftinginterpreters/tool/*

# Launch the interpreter:
# cd build/
# java com/craftinginterpreters/lox/Lox
