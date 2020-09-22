/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 18:58:06 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/22 12:30:28 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test1(void)
{
	{
    	char	str[] = "I wanna live!";
		
    	ft_bzero(str, 6);
    	printf("User		: ");
    	for (int i = 0; i < 13; i++)
    	    printf("%c", str[i]);
		printf("\n");
	}
	{
		
    	char	str[] = "I wanna live!";
		
    	bzero(str, 6);
    	printf("Expected	: ");
    	for (int i = 0; i < 13; i++)
    	    printf("%c", str[i]);
		printf("\n");
	}
}

void	test2(void)
{
	{
    	char	str[] = "Hello world and 42";
		
    	ft_bzero(str + 6, 10);
    	printf("User		: ");
    	for (int i = 0; i < 18; i++)
    	    printf("%c", str[i]);
		printf("\n");
	}
	{
		
    	char	str[] = "Hello world and 42";
		
    	bzero(str + 6, 10);
    	printf("Expected	: ");
    	for (int i = 0; i < 18; i++)
    	    printf("%c", str[i]);
		printf("\n");
	}
}

void	test3(void)
{
	{
		int	arr[] = { 1, 23, 54, 0, 74, 234, 13689 };

    	ft_bzero(arr, 6);
    	printf("User		: ");
    	for (int i = 0; i < 7; i++)
    	    printf("%d ", arr[i]);
		printf("\n");
	}
	{
		
		int	arr[] = { 1, 23, 54, 0, 74, 234, 13689 };
		
    	bzero(arr, 6);
    	printf("Expected	: ");
    	for (int i = 0; i < 7; i++)
    	    printf("%d ", arr[i]);
		printf("\n");
	}
}

int		main(void)
{
	printf("====== TEST1 =====\n\n");
	test1();
	printf("====== TEST2 =====\n\n");
	test2();
	printf("====== TEST3 =====\n\n");
	test3();
    return 0;
}
