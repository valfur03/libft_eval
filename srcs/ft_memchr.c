/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 14:08:04 by vbotte            #+#    #+#             */
/*   Updated: 2020/10/27 19:23:55 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test1()
{
	{
    	char *ret;
    	char str[] = "Example string";
    	ret = (char*)ft_memchr(str, 'p', strlen(str));
		printf("User		: ");
    	if (ret != NULL)
    	    printf("Found character %c at position %d.\n", *ret, (int)(ret - str + 1));
    	else
    	    printf("Didn't find the character.\n");
	}
	{
    	char *ret;
    	char str[] = "Example string";
    	ret = (char*)memchr(str, 'p', strlen(str));
		printf("Expected	: ");
    	if (ret != NULL)
    	    printf("Found character %c at position %d.\n", *ret, (int)(ret - str + 1));
    	else
    	    printf("Didn't find the character.\n");
	}
}

void	test2()
{
	{
    	char *ret;
    	char str[] = "Example string";
    	ret = (char*)ft_memchr(str, 'y', strlen(str));
		printf("User		: ");
    	if (ret != NULL)
    	    printf("Found character %c at position %d.\n", *ret, (int)(ret - str + 1));
    	else
    	    printf("Didn't find the character.\n");
	}
	{
    	char *ret;
    	char str[] = "Example string";
    	ret = (char*)memchr(str, 'y', strlen(str));
		printf("Expected	: ");
    	if (ret != NULL)
    	    printf("Found character %c at position %d.\n", *ret, (int)(ret - str + 1));
    	else
    	    printf("Didn't find the character.\n");
	}
}

int main ()
{
	printf("===== TEST1 =====\n\n");
	test1();
	printf("===== TEST2 =====\n\n");
	test2();
    return 0;
}
