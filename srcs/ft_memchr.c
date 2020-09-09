/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 14:08:04 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/09 14:08:04 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main ()
{
    char *pch;
    char str[] = "Example string";
    pch = (char*)ft_memchr(str, 'p', strlen(str));
    if (pch != NULL)
        printf("User:\n'p' found at position %I64d.\n", pch-str+1);
    else
        printf("User:\n'p' not found.\n");
    printf("Expected:\n'p' found at position 5.\n");
    return 0;
}