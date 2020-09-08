/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 17:58:41 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/08 17:58:41 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int main()
{
    int i;
    char str[] = "c3po...";
    i = 0;
    while (ft_isalnum(str[i])) i++;
    printf("User:\nThe first %d characters are alphanumeric.\n", i);
    printf("Expected:\nThe first 4 characters are alphanumeric.\n");
    return 0;
}