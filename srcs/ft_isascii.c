/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 18:01:34 by vbotte            #+#    #+#             */
/*   Updated: 2020/11/19 11:57:50 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test1()
{
	{
		int	ascii;

		ascii = 0;
		while (ascii <= 127 && ft_isascii(ascii))
			ascii++;
		printf("User		: %s", ascii - 1 == 127 ? "Is ascii\n" : "Is not ascii\n");
	}
	{
		int	ascii;

		ascii = 0;
		while (ascii <= 127 && isascii(ascii))
			ascii++;
		printf("Expected	: %s", ascii - 1 == 127 ? "Is ascii\n" : "Is not ascii\n");
	}
}

void	test2()
{
	int	arr[] = {0, 54, 32, -1, 128, 1, 127, 9, 126, 1};

	{
		int	i;

		printf("User		: ");
		i = 0;
		while (i < 10)
			printf("%d", ft_isascii(arr[i++]));
		printf("\n");
	}
	{
		int	i;

		printf("Expected	: ");
		i = 0;
		while (i < 10)
			printf("%d", isascii(arr[i++]));
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
