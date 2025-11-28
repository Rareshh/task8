#!/bin/bash

if [ "$1" = "c" ]; then
	./zar
fi

if [ "$1" = "py" ]; then
	python3 zar.py
fi
