#!/usr/bin/env bash

set -e

CURRENT=$(ls -1 | egrep '^ex' | tr -d 'ex' | sort -n | tail -n 1)
NEXT=$(( $CURRENT + 1 ))

mkdir "ex$NEXT"
cp "ex$CURRENT/Makefile" "ex$NEXT/"

for t in "ex$NEXT" credit break_it
do
  touch "ex$NEXT/$t.c"
done

echo "ex$NEXT"
