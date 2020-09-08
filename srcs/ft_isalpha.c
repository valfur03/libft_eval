/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 18:00:13 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/08 18:00:13 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int main()
{
    int i = 0;
    char str[] = "C++";
    while (str[i])
    {
        if (ft_isalpha(str[i])) printf("character %c is alphabetic\n", str[i]);
        else printf("character %c is not alphabetic\n", str[i]);
        i++;
    }
    return 0;
}