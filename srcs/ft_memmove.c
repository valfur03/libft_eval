/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 04:24:05 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/21 19:25:36 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void    test1(void)
{
    {
        char    str[] = "memmove can be very useful......";

        ft_memmove(str + 20, str + 15, 11);
        printf("User		: %s\n", str);
    }
    {
        char    str[] = "memmove can be very useful......";

        memmove(str + 20, str + 15, 11);
        printf("Expected	: %s\n", str);
    }
}

void    test2(void)
{
    {
        int	arr[] = { 1, 23, 54, 0, 74, 234, 13689 };
    
        ft_memmove(arr + 4, arr + 1, 12);
        printf("User		: ");
        for (int i = 0; i < 7; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    {
        int	arr[] = { 1, 23, 54, 0, 74, 234, 13689 };
    
        memmove(arr + 4, arr + 1, 12);
        printf("Expected	: ");
        for (int i = 0; i < 7; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
}

void    test3(void)
{
    {
		char	str[] = "Hello world and 42";
    
        ft_memmove(str + 16, str + 6, 2);
        printf("User		: %s\n", str);
    }
    {
		char	str[] = "Hello world and 42";
    
        memmove(str + 16, str + 6, 2);
        printf("Expected	: %s\n", str);
    }
}

int        main(void)
{
    printf("===== TEST1 =====\n\n");
    test1();
    printf("===== TEST2 =====\n\n");
    test2();
    printf("===== TEST3 =====\n\n");
    test3();
    return (0);
}
