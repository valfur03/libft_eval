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
for filepath in $(find ../srcs -name "ft_*.c")
do
	ft_name_c=$(echo "${filepath}" | cut -d / -f 3)
	echo "${WHITE}Compiling test for ${ft_name_c}${NC}"
	if gcc -Wall -Wextra -Werror ${filepath} srcs/${ft_name_c} -L${lib_path} -lft -o tests/test_${ft_name_c%.c}
	then
		echo "${GREEN}Generated test for ${ft_name_c} successfully.${NC}"
	else
		echo "${RED}Failed to generate test for ${ft_name_c} because of a compilation error!${NC}"
	fi
done
