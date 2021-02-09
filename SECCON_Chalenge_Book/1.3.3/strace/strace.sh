#!/bin/bash

gcc $1 -o $(basename $1 .c)
strace ./$(basename $1 .c)
