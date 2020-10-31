/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 18:46:24 by vbotte            #+#    #+#             */
/*   Updated: 2020/10/31 14:01:06 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test1()
{
	char	chr = '-';
	int		len = 5;

	{
		char	ptr[] = "Hello World";

		ft_memset(ptr, chr, len);
		printf("User		: %s\n", ptr);
	}
	{
		char	ptr[] = "Hello World";

		memset(ptr, chr, len);
		printf("Expected	: %s\n", ptr);
	}
}

void	test2()
{
	int	chr = -3;
	int	len = 5;

	{
		char	ptr[] = "Hello World";

		ft_memset(ptr, chr, len);
		printf("User		: %s\n", ptr);
	}
	{
		char	ptr[] = "Hello World";

		memset(ptr, chr, len);
		printf("Expected	: %s\n", ptr);
	}
}

void	test3()
{
	int	chr = 4;
	int	len = 10;

	{
		int	i = -1;
		int	ptr[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

		ft_memset(ptr, chr, len);
		printf("User		: ");
		while (++i < 10)
			printf("%d%c", ptr[i], i < 9 ? ' ' : '\0');
		printf("\n");
	}
	{
		int	i = -1;
		int	ptr[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

		memset(ptr, chr, len);
		printf("Expected	: ");
		while (++i < 10)
			printf("%d%c", ptr[i], i < 9 ? ' ' : '\0');
		printf("\n");
	}
}

int main()
{
	printf("===== TEST1 =====\n\n");
	test1();
	printf("===== TEST2 =====\n\n");
	test2();
	printf("===== TEST3 =====\n\n");
	test3();
    return (0);
}
