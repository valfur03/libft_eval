/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 18:58:06 by vbotte            #+#    #+#             */
/*   Updated: 2020/10/31 14:21:13 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test1()
{
	int		len = 5;

	{
		char	ptr[] = "Hello World";

		ft_bzero(ptr + 6, len);
		printf("User		: %s\n", ptr);
	}
	{
		char	ptr[] = "Hello World";

		bzero(ptr + 6, len);
		printf("Expected	: %s\n", ptr);
	}
}

void	test2()
{
	int	len = 10;

	{
		int	i = -1;
		int	ptr[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };

		ft_bzero(ptr, len);
		printf("User		: ");
		while (++i < 10)
			printf("%d%c", ptr[i], i < 9 ? ' ' : '\0');
		printf("\n");
	}
	{
		int	i = -1;
		int	ptr[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };

		bzero(ptr, len);
		printf("Expected	: ");
		while (++i < 10)
			printf("%d%c", ptr[i], i < 9 ? ' ' : '\0');
		printf("\n");
	}
}

int		main(void)
{
	printf("====== TEST1 =====\n\n");
	test1();
	printf("====== TEST2 =====\n\n");
	test2();
    return 0;
}
