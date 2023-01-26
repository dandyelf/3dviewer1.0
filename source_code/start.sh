#!/bin/bash

gcc s21_viewer.c -o suka
valgrind --trace-children=yes --track-fds=yes --track-origins=yes --leak-check=full --show-leak-kinds=all ./suka
