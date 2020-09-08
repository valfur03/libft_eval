/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 18:18:26 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/08 18:18:26 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int main ()
{
    int i = 0;
    char str[] = "Test String.\n";
    char c;
    printf("User:\n");
    while (str[i])
    {
        c = str[i];
        putchar(ft_tolower(c));
        i++;
    }
    printf("Expected:\ntest string.");
    return 0;
}