/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbotte <vbotte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/08 19:10:10 by vbotte            #+#    #+#             */
/*   Updated: 2020/09/19 14:16:03 by vbotte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_eval.h"

struct {
    char    name[40];
    int     age;
}           person, person_copy;

int main()
{
    char myname[] = "Pierre de Fermat";
    ft_memcpy(person.name, myname, strlen(myname) + 1);
    
    person.age = 46;
    ft_memcpy(&person_copy, &person, sizeof(person));

    printf("User:\nperson_copy: %s, %d \n", person_copy.name, person_copy.age);
    printf("Expected:\nperson_copy: Pierre de Fermat, 46\n");

    return 0;
}
