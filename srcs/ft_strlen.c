/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 16:40:25 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/19 14:56:08 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

int main()
{
    char str[] = "This string is 33 characters long";
    printf("User:\n%ld\nExpected:\n33\n", ft_strlen(str));
    return 0;
}
