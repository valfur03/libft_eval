/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 16:58:00 by vfurmane          #+#    #+#             */
/*   Updated: 2020/10/29 17:12:48 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test1()
{
	int		dest_size = 12;
	{
		char	dest[12] = "Hello ";
		char	src[] = "World";
		int		ret = ft_strlcat(dest, src, dest_size);

		printf("User		: %s (%d)\n", dest, ret);
	}
	{
		char	dest[12] = "Hello ";
		char	src[] = "World";
		int		ret = strlcat(dest, src, dest_size);

		printf("Expected	: %s (%d)\n", dest, ret);
	}
}

void	test2()
{
	int		dest_size = 10;
	{
		char	dest[] = "Salut";
		char	src[] = "Hello World";
		int		ret = ft_strlcat(dest, src, dest_size);

		printf("User		: %s (%d)\n", dest, ret);
	}
	{
		char	dest[] = "Salut";
		char	src[] = "Hello World";
		int		ret = strlcat(dest, src, dest_size);

		printf("Expected	: %s (%d)\n", dest, ret);
	}
}

void	test3()
{
	int		dest_size = 2;
	{
		char	dest[12] = "Hello ";
		char	src[] = "World";
		int		ret = ft_strlcat(dest, src, dest_size);

		printf("User		: %s (%d)\n", dest, ret);
	}
	{
		char	dest[12] = "Hello ";
		char	src[] = "World";
		int		ret = strlcat(dest, src, dest_size);

		printf("Expected	: %s (%d)\n", dest, ret);
	}
}

void	test4()
{
	{
		char	dest[] = "Hello World";
		char	src[] = "Salut";
		int		ret = ft_strlcat(dest, src, 0);

		printf("User		: %s (%d)\n", dest, ret);
	}
	{
		char	dest[] = "Hello World";
		char	src[] = "Salut";
		int		ret = strlcat(dest, src, 0);

		printf("Expected	: %s (%d)\n", dest, ret);
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
	printf("===== TEST4 =====\n\n");
	test4();
	return (0);
}
