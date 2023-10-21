/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caredua3 <caredua3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:10:25 by caredua3          #+#    #+#             */
/*   Updated: 2023/10/21 18:27:17 by caredua3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// crt_calloc.c
// This program uses calloc to allocate space for
// 40 long integers. It initializes each element to zero.

#include "libft.h"
#include <malloc.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str = "01234";
   char  *test;

   test = ft_substr("", 0, 0);
   printf("Result ==> %s\n", test);
   free(test);
	return (0);
}
