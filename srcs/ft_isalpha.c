/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 18:00:13 by vbotte            #+#    #+#             */
/*   Updated: 2020/10/30 17:54:04 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test1()
{
	{
		char	alpha = 'a';

		while (alpha <= 'z' && ft_isalpha(alpha))
			alpha++;
		printf("User		: %s", alpha - 1 == 'z' ? "Is alpha\n" : "Is not alpha\n");
	}
	{
		char	alpha = 'a';

		while (alpha <= 'z' && isalpha(alpha))
			alpha++;
		printf("Expected	: %s", alpha - 1 == 'z' ? "Is alpha\n" : "Is not alpha\n");
	}
}

void	test2()
{
	{
		char	alpha = 'A';

		while (alpha <= 'Z' && ft_isalpha(alpha))
			alpha++;
		printf("User		: %s", alpha - 1 == 'Z' ? "Is alpha\n" : "Is not alpha\n");
	}
	{
		char	alpha = 'A';

		while (alpha <= 'Z' && isalpha(alpha))
			alpha++;
		printf("Expected	: %s", alpha - 1 == 'Z' ? "Is alpha\n" : "Is not alpha\n");
	}
}

void	test3()
{
	char	str[] = "AbThSp4_g(?d8SD= o-#";

	printf("		  %s\n", str);
	{
		int	i;

		i = 0;
		printf("User		: ");
		while (i < 20)
			printf("%d", ft_isalpha(str[i++]) != 0);
		printf("\n");
	}
	{
		int	i;

		i = 0;
		printf("Expected	: ");
		while (i < 20)
			printf("%d", isalpha(str[i++]) != 0);
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
    return (0);
}
