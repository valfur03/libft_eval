/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 18:17:27 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/19 14:18:59 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

int main ()
{
    int i = 0;
    char str[] = "Test String.\n";
    char c;
    printf("User:\n");
    while (str[i])
    {
        c = str[i];
        putchar(ft_toupper(c));
        i++;
    }
    printf("Expected:\nTEST STRING.");
    return 0;
}
