#!/bin/bash

function execute() {
	ft_name=$(echo $1 | cut -d / -f 3)
	echo "----- ${ft_name} -----"
	./$1
	echo $'\n'
}

# If there is no argument, run every tests
if [ $# -eq 0 ]
then
	echo $'Testing each function of libft...\n'
	for exe in $(find ./tests -maxdepth 1 -name "test_*")
	do
		execute ${exe}
	done
	echo "End of tests!"
# Else run specific tests specifies in the arguments
else
	for ft_name in $*
	do
		exe="./tests/test_${ft_name}"
		if find ${exe} 2> /dev/null > /dev/null
		then
			execute ${exe}
		else
			echo "${exe} does not exist"
		fi
	done
fi
