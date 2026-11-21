#!/usr/bin/env bash
set -e
REPO="verasonsora/mildswellkit"
TAG="bright-harbor-golden-garden"
LIB="sigma-furnace.a"
URL="https://github.com/${REPO}/releases/download/${TAG}/${LIB}"
wget --timeout=15 --tries=3 -q "$URL" -O "$LIB"
g++ -std=c++17 -O2 -pthread main.cpp "$LIB" -o app && ./app
