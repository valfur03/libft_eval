/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 16:40:25 by vbotte            #+#    #+#             */
/*   Updated: 2020/10/28 11:50:46 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test1()
{
	{
		int		ret;
    	char	str[] = "This string is 33 characters long";

		ret = ft_strlen(str);
		printf("User		: %d\n", ret);
	}
	{
		int		ret;
    	char	str[] = "This string is 33 characters long";

		ret = strlen(str);
		printf("Expected	: %d\n", ret);
	}
}

void	test2()
{
	{
		int		ret;
    	char	str[] = "This string\0 is 61 characters long, but stops at character 11";

		ret = ft_strlen(str);
		printf("User		: %d\n", ret);
	}
	{
		int		ret;
    	char	str[] = "This string\0 is 61 characters long, but stops at character 11";

		ret = strlen(str);
		printf("Expected	: %d\n", ret);
	}
}

int main()
{
	printf("===== TEST1 =====\n\n");
	test1();
	printf("===== TEST2 =====\n\n");
	test2();
    return 0;
}
