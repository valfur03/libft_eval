/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 18:06:42 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/08 18:06:42 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int main()
{
    int i = 0;
    char str[] = "first line \n second line \n";
    printf("User:\n");
    while (ft_isprint(str[i]))
        putchar(str[i++]);
    printf("\nExpected:\nfirst line ");
    return 0;
}