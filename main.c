/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caredua3 <caredua3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:10:25 by caredua3          #+#    #+#             */
/*   Updated: 2023/10/31 20:11:44 by caredua3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// crt_calloc.c
// This program uses calloc to allocate space for
// 40 long integers. It initializes each element to zero.

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list *test = ft_lstnew("Teste");
	t_list *test2 = ft_lstnew("ajuda");
	ft_lstadd_front(test->content, test2->content);
	printf("%p\n", test->content);
	return (0);
}
