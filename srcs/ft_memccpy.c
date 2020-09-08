/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 19:39:25 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/08 19:39:25 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* msg = "This is the string: not copied";

int main( void )
{
    char buffer[80];

    memset(buffer, '\0', 80);
    ft_memccpy(buffer, msg, ':', 80);

    printf("User:\n%s\n", buffer);
    printf("Expected:\nThis is the string\n");
    return (0);
}