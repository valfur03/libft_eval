/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 12:33:30 by vfurmane          #+#    #+#             */
/*   Updated: 2020/10/29 16:24:43 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test1()
{
	{
		char	dest[] = "Hello World";
		char	src[] = "Salut";
		int		dest_size = strlen(dest);
		int		ret = ft_strlcpy(dest, src, dest_size);

		printf("User		: %s (%d)\n", dest, ret);
	}
	{
		char	dest[] = "Hello World";
		char	src[] = "Salut";
		int		dest_size = strlen(dest);
		int		ret = strlcpy(dest, src, dest_size);

		printf("Expected	: %s (%d)\n", dest, ret);
	}
}

void	test2()
{
	{
		char	dest[] = "Salut";
		char	src[] = "Hello World";
		int		dest_size = strlen(dest);
		int		ret = ft_strlcpy(dest, src, dest_size);

		printf("User		: %s (%d)\n", dest, ret);
	}
	{
		char	dest[] = "Salut";
		char	src[] = "Hello World";
		int		dest_size = strlen(dest);
		int		ret = strlcpy(dest, src, dest_size);

		printf("Expected	: %s (%d)\n", dest, ret);
	}
}

void	test3()
{
	{
		char	dest[] = "Hello World";
		char	src[] = "Salut";
		int		ret = ft_strlcpy(dest, src, 0);

		printf("User		: %s (%d)\n", dest, ret);
	}
	{
		char	dest[] = "Hello World";
		char	src[] = "Salut";
		int		ret = strlcpy(dest, src, 0);

		printf("Expected	: %s (%d)\n", dest, ret);
	}
}

void	test4()
{
	{
		char	dest[] = "Hello World";
		char	src[] = "Salut";
		int		ret = ft_strlcpy(dest, src, -2);

		printf("User		: %s (%d)\n", dest, ret);
	}
	{
		char	dest[] = "Hello World";
		char	src[] = "Salut";
		int		ret = strlcpy(dest, src, -2);

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
