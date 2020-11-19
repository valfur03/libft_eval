/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 18:17:27 by vbotte            #+#    #+#             */
/*   Updated: 2020/11/19 19:04:16 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test1()
{
	int		i;
	char	str[] = "Hello World and 42!";

	{
		printf("User		: ");
		i = 0;
		while (str[i])
			printf("%c", ft_toupper(str[i++]));
		printf("\n");
	}
	{
		printf("Expected	: ");
		i = 0;
		while (str[i])
			printf("%c", toupper(str[i++]));
		printf("\n");
	}
}

void	test2()
{
	int	chr;

	chr = -5;
	{
		printf("User		: %c (%d)\n", ft_toupper(chr), ft_toupper(chr));
	}
	{
		printf("Expected	: %c (%d)\n", toupper(chr), toupper(chr));
	}
}

void	test3()
{
	int	chr;

	chr = 500;
	{
		printf("User		: %c (%d)\n", ft_toupper(chr), ft_toupper(chr));
	}
	{
		printf("Expected	: %c (%d)\n", toupper(chr), toupper(chr));
	}
}

int		main()
{
	printf("===== TEST1 =====\n\n");
	test1();
	printf("===== TEST2 =====\n\n");
	test2();
	printf("===== TEST3 =====\n\n");
	test3();
    return 0;
}
