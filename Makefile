SHELL := /bin/bash

toggle-grayscale:
	clang -g -O2 -std=c11 -framework ApplicationServices ./grayscale.c -o toggle-grayscale
