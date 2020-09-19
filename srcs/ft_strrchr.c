/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 15:28:30 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/19 14:18:22 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

int main ()
{
    char str[] = "This is a sample string";
    char *pch;
    pch = strrchr(str, 's');
    printf("User:\nLast occurence of 's' found at %I64d\n", pch - str + 1);
    printf("Expected:\nLast occurence of 's' found at 18\n");
    return 0;
}
