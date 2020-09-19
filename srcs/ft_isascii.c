/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 18:01:34 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/19 14:48:09 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

char the_chars[] = { 'A', 0x80, 250, 140 };

int main()
{
    int i;
    for(i = 0; i < 4; i++) 
    {
        if (ft_isascii( the_chars[i])) 
            printf("Char %c is an ASCII character (0 - 127)\n", the_chars[i]);
        else
            printf("Char %c is not an ASCII character (0 - 127)\n", the_chars[i]);
    }
    return 0;
}
