/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 17:19:00 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/19 15:07:02 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

int main()
{
    int		i;
	char	*strs[9] = { "\t\n\v\f\r -42", "090", "-090", "--090", "  -090", 
						 "- 090", "+090sgh98", "0", "b9" };

    for (int y = 0; y < 9; y++)
    {
        i = ft_atoi(strs[y]);
        printf("User:\nThe return value is %d. Its double is %d.\n", i, i * 2);
        i = atoi(strs[y]);
        printf("Original:\nThe return value is %d. Its double is %d.\n", i, i * 2);
    }
    return 0;
}
