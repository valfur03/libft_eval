/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 18:58:06 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/19 14:11:26 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

int main()
{
    char org[] = "I wanna live!";
    bzero(org, 6);
    printf("Original:\n");
    for (int i = 0; i < 13; i++)
        putchar(org[i]);
    puts("");
    char str[] = "I wanna live!";
    ft_bzero(str, 6);
    printf("User:\n");
    for (int i = 0; i < 13; i++)
        putchar(str[i]);
    puts("");
    return 0;
}
