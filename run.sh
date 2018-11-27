#!/bin/bash
path="$1"
rm -r test
oj dl "$1"
g++ main.cpp
oj test
cat main.cpp | clip.exe

