/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 17:19:00 by vbotte            #+#    #+#             */
/*   Updated: 2020/10/30 16:17:31 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

void	test1()
{
	char	str[] = "42";

	{
		int	ret = ft_atoi(str);

		printf("User		: %s -> %d\n", str, ret);
	}
	{
		int	ret = atoi(str);

		printf("Expected	: %s -> %d\n", str, ret);
	}
}

void	test2()
{
	char	str[] = "+42";

	{
		int	ret = ft_atoi(str);

		printf("User		: %s -> %d\n", str, ret);
	}
	{
		int	ret = atoi(str);

		printf("Expected	: %s -> %d\n", str, ret);
	}
}

void	test3()
{
	char	str[] = "-42";

	{
		int	ret = ft_atoi(str);

		printf("User		: %s -> %d\n", str, ret);
	}
	{
		int	ret = atoi(str);

		printf("Expected	: %s -> %d\n", str, ret);
	}
}

void	test4()
{
	char	str[] = "--42";

	{
		int	ret = ft_atoi(str);

		printf("User		: %s -> %d\n", str, ret);
	}
	{
		int	ret = atoi(str);

		printf("Expected	: %s -> %d\n", str, ret);
	}
}

void	test5()
{
	char	str[] = " \t 42";

	{
		int	ret = ft_atoi(str);

		printf("User		: %s -> %d\n", str, ret);
	}
	{
		int	ret = atoi(str);

		printf("Expected	: %s -> %d\n", str, ret);
	}
}

void	test6()
{
	char	str[] = "42a24";

	{
		int	ret = ft_atoi(str);

		printf("User		: %s -> %d\n", str, ret);
	}
	{
		int	ret = atoi(str);

		printf("Expected	: %s -> %d\n", str, ret);
	}
}

void	test7()
{
	char	str[] = "3000000000";

	{
		int	ret = ft_atoi(str);

		printf("User		: %s -> %d\n", str, ret);
	}
	{
		int	ret = atoi(str);

		printf("Expected	: %s -> %d\n", str, ret);
	}
}

int		main()
{
	printf("===== TEST1 =====\n\n");
	test1();
	printf("===== TEST2 =====\n\n");
	test2();
	printf("===== TEST3 =====\n\n");
	test3();
	printf("===== TEST4 =====\n\n");
	test4();
	printf("===== TEST5 =====\n\n");
	test5();
	printf("===== TEST6 =====\n\n");
	test6();
	printf("===== TEST7 =====\n\n");
	test7();
    return (0);
}
