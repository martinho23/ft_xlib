#!/bin/bash

MAKEFILE=$(find $(pwd) -name "makefile.tests")
MAKE_PWD=$(echo $MAKEFILE | sed -e s_/makefile.tests__)
make -f $MAKEFILE -C $MAKE_PWD
BIN_PWD=$(find $MAKE_PWD -name "bin")
EXECS=$(find $BIN_PWD -type f)

for EXEC in $EXECS
do
	$EXEC > output.txt;
	if [ $(cat output.txt | grep "###" | wc -l) = $(expr $(echo -n $(cat output.txt | grep "Tests run:" | cut -d " " -f 3) | sed -e s/' '/' + '/g)) ]
	then
		echo ok
		rm -rf output.txt
	else
		echo -n "Error: " 
		cat output.txt
		rm -rf output.txt
		exit 1
	fi
done
