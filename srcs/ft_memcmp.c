/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 14:28:29 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/19 14:15:35 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

int main ()
{
    char buffer1[] = "DWgaOtP12df0";
    char buffer2[] = "DWGAOTP12DF0";

    int n;

    n = memcmp (buffer1, buffer2, sizeof(buffer1));

    if (n > 0) printf("User:\n'%s' is greater than '%s'.\n", buffer1, buffer2);
    else if (n < 0) printf("User:\n'%s' is less than '%s'.\n", buffer1, buffer2);
    else printf("User:\n'%s' is the same as '%s'.\n", buffer1, buffer2);
    printf("Expected:\n'DWgaOtP12df0' is greater than 'DWGAOTP12DF0'.\n");

    return 0;
}
