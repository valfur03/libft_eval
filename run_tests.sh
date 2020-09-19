#!/bin/bash

RED=$'\e[1;31m'
GREEN=$'\e[1;32m'
YELLOW=$'\e[1;33m'
WHITE=$'\e[1;37m'
NC=$'\e[0m'

function execute() {
	ft_name=$(echo $1 | cut -d / -f 3)
	echo "${YELLOW}----- ${ft_name} -----${NC}"
	./$1
	echo $'\n'
}

# If there is no argument, run every tests
if [ $# -eq 0 ]
then
	echo "${WHITE}---------------------------------"
	echo "Testing each function of libft..."
	echo "---------------------------------${NC}" && echo $'\r'
	for exe in $(find ./tests -maxdepth 1 -name "test_*")
	do
		execute ${exe}
	done
	echo "${WHITE}End of tests!${NC}"
# Else run specific tests specifies in the arguments
else
	echo "${WHITE}-------------------------------------------"
	echo "Testing functions specified in arguments..."
	echo "-------------------------------------------${NC}" && echo $'\r'
	for ft_name in $*
	do
		exe="./tests/test_${ft_name}"
		if find $exe 2> /dev/null > /dev/null
		then
			execute ${exe}
		else
			echo "${RED}${exe} does not exist${NC}" && echo $'\r'
		fi
	done
fi
