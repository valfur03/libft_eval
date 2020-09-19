/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 17:19:00 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/19 14:11:08 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

int main()
{
    int i;
    char buffer[256] = "\t\n\v\f\r -42";

    printf("Testing whitespaces\n");
    i = ft_atoi(buffer);
    printf("User:\nThe value entered is %d. Its double is %d.\n", i, i * 2);
    i = atoi(buffer);
    printf("Original:\nThe value entered is %d. Its double is %d.\n\n", i, i * 2);
    printf("Test ideas:\n090\n-090\n--090\n  -090\n- 090\n+090sgh98\n0\nb9\n\n");
    while (1)
    {
        printf("Enter a number: ");
        fgets(buffer, 256, stdin);
        i = ft_atoi(buffer);
        printf("User:\nThe value entered is %d. Its double is %d.\n", i, i * 2);
        i = atoi(buffer);
        printf("Original:\nThe value entered is %d. Its double is %d.\n", i, i * 2);
    }
    return 0;
}
