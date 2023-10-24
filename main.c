/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caredua3 <caredua3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:10:25 by caredua3          #+#    #+#             */
/*   Updated: 2023/10/24 19:58:36 by caredua3         ###   ########.fr       */
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
	char	*text;
	char	c;
	char	**r_split;
	size_t	i;

	c = ' ';
	text = "How are you doing today?";
	r_split = ft_split(text, c);
	while (r_split)
	{
		i = 0;
		while (*r_split[i])
		{
			printf("%s\n", r_split[i]);
			i++;
		}
		r_split++;
	}
	return (0);
}
