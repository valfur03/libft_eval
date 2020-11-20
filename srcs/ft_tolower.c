/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 18:18:26 by vbotte            #+#    #+#             */
/*   Updated: 2020/11/19 19:51:10 by vfurmane         ###   ########.fr       */
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
			printf("%c", ft_tolower(str[i++]));
		printf("\n");
	}
	{
		printf("Expected	: ");
		i = 0;
		while (str[i])
			printf("%c", tolower(str[i++]));
		printf("\n");
	}
}

void	test2()
{
	int	chr;

	chr = -5;
	{
		printf("User		: %c (%d)\n", ft_tolower(chr), ft_tolower(chr));
	}
	{
		printf("Expected	: %c (%d)\n", tolower(chr), tolower(chr));
	}
}

void	test3()
{
	int	chr;

	chr = 500;
	{
		printf("User		: %c (%d)\n", ft_tolower(chr), ft_tolower(chr));
	}
	{
		printf("Expected	: %c (%d)\n", tolower(chr), tolower(chr));
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
	return (0);
}
