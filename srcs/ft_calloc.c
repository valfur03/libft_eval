/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 04:56:11 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/19 04:56:30 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n;
	int *pData;
	printf("Amount of numbers to be entered: ");
	scanf("%d", &i);
	pData = (int*)ft_calloc(i, sizeof(int));
	if (pData == NULL) exit(1);
	for (n = 0; n < i; n++)
	{
		printf("Enter number #%d: ", n + 1);
		scanf("%d", &pData[n]);
	}
	printf("You have entered: ");
	for (n = 0; n < i; n++) 
		printf("%d ", pData[n]);
	puts("");
	free(pData);
	return 0;
}
