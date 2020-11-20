/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 11:03:38 by vbotte            #+#    #+#             */
/*   Updated: 2020/11/20 11:35:04 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    test1()
{
	{
		char s[] = "//decoupe//moi//stp//mais//pas//trop//fort//";
		char c[] = "/";
		char **res = ft_split(s, c);
		printf("User            :");
		int i = 0;
		while (res[i])
			printf(" %s", res[i++]);
	}
	{
		printf("\nExpected        : decoupe moi stp mais pas trop fort\n");
	}
}

void    test2()
{
	{
		char s[] = "J'aime pas les espaces, c'est clair?";
		char c[] = " ";
		char **res = ft_split(s, c);
		printf("User            : ");
		int i = 0;
		while (res[i])
			printf("%s", res[i++]);
	}
	{
		printf("\nExpected        : J'aimepaslesespaces,c'estclair?\n");
	}
}

void    test3()
{
	{
		char s[] = "Trouves les lettres manquantes et tu échappes au KO";
		char c[] = "ola";
		char **res = ft_split(s, c);
		printf("User            : ");
		int i = 0;
		while (res[i])
			printf("x%s", res[i++]);
	}
	{
		printf("\nExpected        : xTrxuves xes xettres mxnquxntes et tu échxppes xu KO\n");
	}
}

void    test4()
{
	{
		char s[] = "Y'a aucun séparateur, HA!";
		char c[] = "/+b=@#$%^&*()-";
		char **res = ft_split(s, c);
		printf("User            : ");
		int i = 0;
		while (res[i])
			printf("%s", res[i++]);
	}
	{
		printf("\nExpected        : Y'a aucun séparateur, HA!\n");
	}
}

int             main()
{
	printf("===== TEST1 =====\n\n");
	test1();
	printf("===== TEST2 =====\n\n");
	test2();
	printf("===== TEST3 =====\n\n");
	test3();
	printf("===== TEST4 =====\n\n");
	test4();
	return (0);
}
