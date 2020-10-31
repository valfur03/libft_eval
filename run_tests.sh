#!/bin/bash

RED=$'\e[1;31m'
GREEN=$'\e[1;32m'
YELLOW=$'\e[1;33m'
WHITE=$'\e[1;37m'
NC=$'\e[0m'

function exec_title()
{
	echo "${GREEN}"$'\t'"$1"$'\n'"${NC}"
}

function execute()
{
	ft_name=$(echo $1 | cut -d / -f 3)
	echo "${YELLOW}----- ${ft_name} -----${NC}" && echo $'\r'
	if find $exe 2> /dev/null > /dev/null
	then
		./$1
	else
		echo "${RED}${exe} does not exist${NC}"
	fi
	echo $'\r'
}

# If there is no argument, run every tests
if [ $# -eq 0 ]
then
	echo "${WHITE}---------------------------------${NC}"
	echo "${WHITE}Testing each function of libft...${NC}"
	echo "${WHITE}---------------------------------${NC}" && echo $'\r'
	# Only part 1 here
	exec_title "PART1"
	for exe in $(cat .tests1 | sed -e 's/^/.\/tests\/ft_/' -e 's/$/.out/')
	do
		execute ${exe}
	done
	# Only part 2 here
	exec_title "PART2"
	for exe in $(cat .tests2 | sed -e 's/^/.\/tests\/ft_/' -e 's/$/.out/')
	do
		execute ${exe}
	done
	# Only part 1 here
	exec_title "BONUS PART"
	for exe in $(cat .tests_bonus | sed -e 's/^/.\/tests\/ft_/' -e 's/$/.out/')
	do
		execute ${exe}
	done
	echo "${WHITE}End of tests!${NC}"
# Else run specific tests specified in the arguments
else
	echo "${WHITE}-------------------------------------------${NC}"
	echo "${WHITE}Testing functions specified in arguments...${NC}"
	echo "${WHITE}-------------------------------------------${NC}" && echo $'\r'
	for ft_name in $*
	do
		exe="./tests/ft_${ft_name}.out"
		if find $exe 2> /dev/null > /dev/null
		then
			execute ${exe}
		else
			echo "${RED}${exe} does not exist${NC}" && echo $'\r'
		fi
	done
fi
