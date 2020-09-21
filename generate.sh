#!/bin/bash

lib_path=../
RED=$'\e[1;31m'
GREEN=$'\e[1;32m'
YELLOW=$'\e[1;33m'
WHITE=$'\e[1;37m'
NC=$'\e[0m'

######################################################################
# Creating a directory which will contain test files for each function
######################################################################
echo "${WHITE}----------------------------------"
echo "Searching for 'tests' directory..."
echo "----------------------------------${NC}"
if find tests 2> /dev/null > /dev/null
then
	echo "${GREEN}'tests' directory found${NC}" && echo $'\r'
else
	echo "${YELLOW}'tests' directory not found. Creating it...${NC}" && echo $'\r'
	mkdir ./tests
fi

#################
# Generating test
#################
echo "${WHITE}-------------------"
echo $'Generating tests...'
echo "-------------------${NC}"
if make 2> /dev/null > /dev/null
then
	echo "${GREEN}Compilation succeed${NC}" && echo $'\r'
else
	echo "${RED}Compilation failed${NC}" && echo $'\r'
	make
fi
