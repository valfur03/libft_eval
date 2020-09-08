/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 18:03:28 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/08 18:03:28 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char str[] = "1776ad";
    int year;
    if (ft_isdigit(str[0]))
    {
        year = atoi(str);
        printf("User:\nThe year that followed %d was %d.\n", year, year + 1);
        printf("Expected:\nThe year that followed 1776 was 1777.\n");
    }
    return 0;
}