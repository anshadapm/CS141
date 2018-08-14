#!/bin/sh
echo "What is your name"
read NAME
echo "your $NAME"
mkdir $NAME
cd $NAME
touch $NAME.cpp

