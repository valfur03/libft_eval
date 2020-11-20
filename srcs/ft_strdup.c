/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 05:12:11 by vbotte            #+#    #+#             */
/*   Updated: 2020/11/20 15:56:25 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test1()
{
	char	*str = "Hello World";

	{
		char	*new_str = ft_strdup(str);

		printf("User		: %s\n", new_str);
	}
	{
		char	*new_str = strdup(str);

		printf("Expected	: %s\n", new_str);
	}
}

void	test2()
{
	char	*str = "";
	{
		char	*new_str = ft_strdup(str);

		printf("User		: %s\n", new_str);
	}
	{
		char	*new_str = strdup(str);

		printf("Expected	: %s\n", new_str);
	}
}

int main()
{
	printf("===== TEST1 =====\n\n");
	test1();
	printf("===== TEST2 =====\n\n");
	test2();
	return (0);
}
