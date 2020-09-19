/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 16:47:39 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/19 14:18:01 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

int main()
{
    char largestring[] = "This is a correct output";
    char smallstring[] = "correct";
    printf("First test: %s\n", ft_strnstr(largestring, smallstring, 18));
    printf("Second test (null): %p\n", ft_strnstr(largestring, smallstring, 10));
    return 0;
}
