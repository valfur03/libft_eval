/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 14:28:29 by vbotte            #+#    #+#             */
/*   Updated: 2020/10/27 22:33:43 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test1()
{
	{
		int		ret;
    	char	buffer1[] = "DWgaOtP12df0";
    	char	buffer2[] = "DWgaOtP12df0";
		
	    ret = ft_memcmp(buffer1, buffer2, sizeof(char) * 12);
		printf("User		: %d\n", ret);
	}
	{
		int		ret;
    	char	buffer1[] = "DWgaOtP12df0";
    	char	buffer2[] = "DWgaOtP12df0";
		
	    ret = memcmp(buffer1, buffer2, sizeof(char) * 12);
		printf("Expected	: %d\n", ret);
	}
}

void	test2()
{
	{
		int		ret;
    	char	buffer1[] = "DWgaOaP12df0";
    	char	buffer2[] = "DWgaOtP12df0";
		
	    ret = ft_memcmp(buffer1, buffer2, sizeof(char) * 12);
		printf("User		: %d\n", ret);
	}
	{
		int		ret;
    	char	buffer1[] = "DWgaOaP12df0";
    	char	buffer2[] = "DWgaOtP12df0";
		
	    ret = memcmp(buffer1, buffer2, sizeof(char) * 12);
		printf("Expected	: %d\n", ret);
	}
}

void	test3()
{
	{
		int		ret;
    	char	buffer1[] = "DWgaOtP12df0";
    	char	buffer2[] = "DWgaOtP10df0";
		
	    ret = ft_memcmp(buffer1, buffer2, sizeof(char) * 12);
		printf("User		: %d\n", ret);
	}
	{
		int		ret;
    	char	buffer1[] = "DWgaOtP12df0";
    	char	buffer2[] = "DWgaOtP10df0";
		
	    ret = memcmp(buffer1, buffer2, sizeof(char) * 12);
		printf("Expected	: %d\n", ret);
	}
}

void	test4()
{
	{
		int		ret;
    	char	buffer1[] = "DWgaOtP12df0";
    	char	buffer2[] = "DWgaOtP12df0";
		
	    ret = ft_memcmp(buffer1, buffer2, 0);
		printf("User		: %d\n", ret);
	}
	{
		int		ret;
    	char	buffer1[] = "DWgaOtP12df0";
    	char	buffer2[] = "DWgaOtP12df0";
		
	    ret = memcmp(buffer1, buffer2, 0);
		printf("Expected	: %d\n", ret);
	}
}

int main ()
{
	printf("===== TEST1 =====\n\n");
	test1();
	printf("===== TEST2 =====\n\n");
	test2();
	printf("===== TEST3 =====\n\n");
	test3();
	printf("===== TEST4 =====\n\n");
	test4();
    return 0;
}
