/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 18:03:28 by vbotte            #+#    #+#             */
/*   Updated: 2020/10/31 20:16:02 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test1()
{
	{
		char	digit = '0';

		while (digit <= '9' && ft_isdigit(digit))
			digit++;
		printf("User		: %s", digit - 1 == '9' ? "Is digit\n" : "Is not digit\n");
	}
	{
		char	digit = '0';

		while (digit <= '9' && isdigit(digit))
			digit++;
		printf("Expected	: %s", digit - 1 == '9' ? "Is digit\n" : "Is not digit\n");
	}
}

void	test2()
{
	char	str[] = "AbThSp4_g(?d8SD= o-#";

	printf("		  %s\n", str);
	{
		int	i;

		i = 0;
		printf("User		: ");
		while (i < 20)
			printf("%d", ft_isdigit(str[i++]) != 0);
		printf("\n");
	}
	{
		int	i;

		i = 0;
		printf("Expected	: ");
		while (i < 20)
			printf("%d", isdigit(str[i++]) != 0);
		printf("\n");
	}
}

int		main()
{
	printf("===== TEST1 =====\n\n");
	test1();
	printf("===== TEST2 =====\n\n");
	test2();
    return (0);
}
