#!/bin/bash

if [ ! -f "$1.cpp" ]; then
  less ../main.cpp >> "$1.cpp"
  leetcode show -c "$1" >> "$1.cpp"
fi

vim "$1.cpp"

