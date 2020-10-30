/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 15:28:30 by vbotte            #+#    #+#             */
/*   Updated: 2020/10/30 12:12:05 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test1()
{
	{
		char	str[] = "Hello\0World";
		char	*ptr;

		ptr = ft_strrchr(str, 'o');
		if (!ptr)
			printf("User		: Not found\n");
		else
			printf("User		: (%c)%s -> %d\n", *ptr, ptr + 1, (int)(ptr - str + 1));
	}
	{
		char	str[] = "Hello\0World";
		char	*ptr;

		ptr = strrchr(str, 'o');
		if (!ptr)
			printf("Expected	: Not found\n");
		else
			printf("Expected	: (%c)%s -> %d\n", *ptr, ptr + 1, (int)(ptr - str + 1));
	}
}

void	test2()
{
	{
		char	str[] = "Hello World";
		char	*ptr;

		ptr = ft_strrchr(str, 'H');
		if (!ptr)
			printf("User		: Not found\n");
		else
			printf("User		: (%c)%s -> %d\n", *ptr, ptr + 1, (int)(ptr - str + 1));
	}
	{
		char	str[] = "Hello World";
		char	*ptr;

		ptr = strrchr(str, 'H');
		if (!ptr)
			printf("Expected	: Not found\n");
		else
			printf("Expected	: (%c)%s -> %d\n", *ptr, ptr + 1, (int)(ptr - str + 1));
	}
}

void	test3()
{
	{
		char	str[] = "Hello World";
		char	*ptr;

		ptr = ft_strrchr(str, '\0');
		if (!ptr)
			printf("User		: Not found\n");
		else
			printf("User		: (%c)%s -> %d\n", *ptr, ptr + 1, (int)(ptr - str + 1));
	}
	{
		char	str[] = "Hello World";
		char	*ptr;

		ptr = strrchr(str, '\0');
		if (!ptr)
			printf("Expected	: Not found\n");
		else
			printf("Expected	: (%c)%s -> %d\n", *ptr, ptr + 1, (int)(ptr - str + 1));
	}
}

void	test4()
{
	{
		char	str[] = "Hello World";
		char	*ptr;

		ptr = ft_strrchr(str, 'q');
		if (!ptr)
			printf("User		: Not found\n");
		else
			printf("User		: (%c)%s -> %d\n", *ptr, ptr + 1, (int)(ptr - str + 1));
	}
	{
		char	str[] = "Hello World";
		char	*ptr;

		ptr = strrchr(str, 'q');
		if (!ptr)
			printf("Expected	: Not found\n");
		else
			printf("Expected	: (%c)%s -> %d\n", *ptr, ptr + 1, (int)(ptr - str + 1));
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
    return 0;
}
