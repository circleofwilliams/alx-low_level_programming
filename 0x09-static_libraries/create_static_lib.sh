#!/bin/bash

echo 'creatin object files and archiving ...'
gcc -Wall -pedantic -Werror -Wextra -c *.c

sleep 2

echo 'creating the archive'
ar -rc liball.a *.o
echo done
