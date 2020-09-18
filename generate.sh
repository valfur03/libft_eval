#!/bin/bash

lib_path=../

######################################################################
# Creating a directory which will contain test files for each function
######################################################################
if find tests 2> /dev/null > /dev/null
then
	echo $'tests directory found\n'
else
	echo $'tests directory not found. Creating it...\n'
	mkdir ./tests
fi

#################
# Generating test
#################
echo $'Generating tests...\n'
for filepath in $(find ../srcs -name "ft_*.c")
do
	ft_name_c=$(echo "${filepath}" | cut -d / -f 3)
	echo "Compiling test for ${ft_name_c}"
	if gcc -Wall -Wextra -Werror ${filepath} srcs/${ft_name_c} -L${lib_path} -lft -o tests/test_${ft_name_c%.c}
	then
		echo "Generated test for ${ft_name_c} successfully."
	else
		echo "Failed to generate test for ${ft_name_c} because of a compilation error!"
	fi
done
