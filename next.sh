#!/usr/bin/env bash

set -e

CURRENT=$(ls -1 | egrep '^ex' | sort | tr -d 'ex' | tail -n 1)
NEXT=$(( $CURRENT + 1 ))

mkdir "ex$NEXT"
cp "ex$CURRENT/Makefile" "ex$NEXT/"
touch "ex$NEXT/ex$NEXT.c"
