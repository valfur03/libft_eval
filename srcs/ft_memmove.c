/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 04:24:05 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/19 17:06:43 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

int main()
{
	char str[] = "memmove can be very useful......";
	ft_memmove(str + 20, str + 15, 11);
	printf("User:\n%s\n", str);
	printf("Expected output:\nmemmove can be very very useful.\n");
	int arr[] = { 1, 23, 54, 0, 74, 234, 13689 };
	ft_memmove(arr + 4, arr + 1, 12);
	printf("User:\n");
	for (int i = 0; i < 7; i++)
		printf("%d ", arr[i]);
	memmove(arr + 4, arr + 1, 12);
	printf("\nOriginal:\n");
	for (int i = 0; i < 7; i++)
		printf("%d ", arr[i]);
	return 0;
}
