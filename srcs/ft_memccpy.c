/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 19:39:25 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/22 15:36:15 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test1(void)
{
	char *str = "This is the string! not copied";

	{
		char	buffer[80];

		memset(buffer, '\0', 80);
		ft_memccpy(buffer, str, '!', 80);
		printf("User		: %s\n", buffer);
	}
	{
		char	buffer[80];

		memset(buffer, '\0', 80);
		memccpy(buffer, str, '!', 80);
		printf("Expected	: %s\n", buffer);
	}
}

void	test2(void)
{
	char *str = "This is the string";

	{
		char	buffer[80];

		memset(buffer, '\0', 80);
		ft_memccpy(buffer, str, '!', 80);
		printf("User		: %s\n", buffer);
	}
	{
		char	buffer[80];

		memset(buffer, '\0', 80);
		memccpy(buffer, str, '!', 80);
		printf("Expected	: %s\n", buffer);
	}
}

void	test3(void)
{
	int	arr[] = { 1, 23, 54, 0, 74, 234, 13689 };

	{
		int	buffer[7];

		memset(buffer, '\0', 7 * sizeof(*buffer));
		ft_memccpy(buffer, arr, 74, 7 * sizeof(*buffer));
		printf("User		: ");
		for (int i = 0; i < 7; i++)
    	    printf("%d ", buffer[i]);
		printf("\n");
	}
	{
		int	buffer[7];

		memset(buffer, '\0', 7 * sizeof(*buffer));
		memccpy(buffer, arr, 74, 7 * sizeof(*buffer));
		printf("Expected	: ");
		for (int i = 0; i < 7; i++)
    	    printf("%d ", buffer[i]);
		printf("\n");
	}
}

void	test4(void)
{
	int	arr[] = { 1, 23, 54, 0, 74, 234, 13689 };

	{
		int	buffer[7];

		memset(buffer, '\0', 7 * sizeof(*buffer));
		ft_memccpy(buffer, arr, 74, 6);
		printf("User		: ");
		for (int i = 0; i < 7; i++)
    	    printf("%d ", buffer[i]);
		printf("\n");
	}
	{
		int	buffer[7];

		memset(buffer, '\0', 7 * sizeof(*buffer));
		memccpy(buffer, arr, 74, 6);
		printf("Expected	: ");
		for (int i = 0; i < 7; i++)
    	    printf("%d ", buffer[i]);
		printf("\n");
	}
}

int		main(void)
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
