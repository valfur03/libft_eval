/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 12:33:30 by vfurmane          #+#    #+#             */
/*   Updated: 2020/10/29 12:44:50 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test1()
{
	{
		char	dest[] = "Hello World";
		char	src[] = "Salut";
		int		dest_size = strlen(dest);
		int		ret = ft_strlcpy(dest, src, dest_size);

		printf("User		: %s (%d)\n", dest, ret);
	}
	{
		char	dest[] = "Hello World";
		char	src[] = "Salut";
		int		dest_size = strlen(dest);
		int		ret = strlcpy(dest, src, dest_size);

		printf("Expected	: %s (%d)\n", dest, ret);
	}
}

int		main()
{
	printf("===== TEST1 =====\n\n");
	test1();
	return (0);
}
