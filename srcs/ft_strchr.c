/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 14:45:45 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/19 14:49:41 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

int main ()
{
    char str[] = "This is a sample string";
    char * pch;
    printf("Looking for the 's' character in \"%s\"...\n", str);
    pch = strchr(str, 's');
    while (pch != NULL)
    {
        printf("found at %I64ld\n", pch - str + 1);
        pch = strchr(pch + 1,'s');
    }
    return 0;
}
