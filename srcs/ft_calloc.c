/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 04:56:11 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/19 15:17:25 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

int main()
{
	int	*data;

	data = (int*)ft_calloc(5, sizeof(int));
	if (data == NULL) exit(1);
	printf("User\n");
	for (int i = 0; i < 5; i++)
		printf("%d", data[i]);
	free(data);
	printf("\nExpected:\n00000\n");
	return 0;
}
