/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 16:40:25 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/08 16:40:25 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main()
{
    char szInput[256];
    printf("Enter a sentence: ");
    gets(szInput);
    printf("The sentence entered is %u characters long.\n", (unsigned)ft_strlen(szInput));
    return 0;
}