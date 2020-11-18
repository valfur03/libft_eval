/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 17:58:41 by vbotte            #+#    #+#             */
/*   Updated: 2020/10/31 20:20:53 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test1()
{
	{
		char	alnum = '0';

		while (alnum <= '9' && ft_isalnum(alnum))
			alnum++;
		printf("User		: %s", alnum - 1 == '9' ? "Is alnum\n" : "Is not alnum\n");
	}
	{
		char	alnum = '0';

		while (alnum <= '9' && isalnum(alnum))
			alnum++;
		printf("Expected	: %s", alnum - 1 == '9' ? "Is alnum\n" : "Is not alnum\n");
	}
}

void	test2()
{
	{
		char	alnum = 'a';

		while (alnum <= 'z' && ft_isalnum(alnum))
			alnum++;
		printf("User		: %s", alnum - 1 == 'z' ? "Is alnum\n" : "Is not alnum\n");
	}
	{
		char	alnum = 'a';

		while (alnum <= 'z' && isalnum(alnum))
			alnum++;
		printf("Expected	: %s", alnum - 1 == 'z' ? "Is alnum\n" : "Is not alnum\n");
	}
}

void	test3()
{
	{
		char	alnum = 'A';

		while (alnum <= 'Z' && ft_isalnum(alnum))
			alnum++;
		printf("User		: %s", alnum - 1 == 'Z' ? "Is alnum\n" : "Is not alnum\n");
	}
	{
		char	alnum = 'A';

		while (alnum <= 'Z' && isalnum(alnum))
			alnum++;
		printf("Expected	: %s", alnum - 1 == 'Z' ? "Is alnum\n" : "Is not alnum\n");
	}
}

void	test4()
{
	char	str[] = "AbThSp4_g(?d8SD= o-#";

	printf("		  %s\n", str);
	{
		int	i;

		i = 0;
		printf("User		: ");
		while (i < 20)
			printf("%d", ft_isalnum(str[i++]) != 0);
		printf("\n");
	}
	{
		int	i;

		i = 0;
		printf("Expected	: ");
		while (i < 20)
			printf("%d", isalnum(str[i++]) != 0);
		printf("\n");
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
