#!/bin/bash

MAKE_PWD=$(find $(pwd) -name "tests_d")
EXECS=$(find $MAKE_PWD -name "*.exe")
make -C $MAKE_PWD
$EXECS > output.txt; if [ $(cat output.txt | grep "###" | wc -l) = $(expr $(echo -n $(cat output.txt | grep "Tests run:" | cut -d " " -f 3) | sed -e s/' '/' + '/g)) ]
then
	echo ok
	rm -rf output.txt
else
	echo -n "Error: " 
	cat output.txt
	rm -rf output.txt

fi
