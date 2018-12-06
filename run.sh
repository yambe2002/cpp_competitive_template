#!/bin/bash
path="$1"
rm -r test
oj dl "$1"
rm a.out
g++ main.cpp -std=c++11
oj test
cat main.cpp | clip.exe

