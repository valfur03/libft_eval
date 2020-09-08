/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 18:58:06 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/08 18:58:06 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "I wanna live!";
    ft_bzero(str, 6);
    printf("User:\n");
    for (int i = 0; i < 14; i++)
        putchar(str[i]);
    printf("\nExpected:\na live!");
    return 0;
}