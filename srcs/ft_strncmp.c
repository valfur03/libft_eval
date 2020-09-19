/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 15:32:59 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/19 14:17:44 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

int main ()
{
    char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
    int n;
    printf("Looking for R2 astromech droids...\n");
    for (n = 0; n < 3; n++)
        if (!ft_strncmp(str[n], "R2xx", 2))
        printf("found %s\n", str[n]);
    return 0;
}
