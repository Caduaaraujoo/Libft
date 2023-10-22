/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caredua3 <caredua3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:10:25 by caredua3          #+#    #+#             */
/*   Updated: 2023/10/22 20:05:57 by caredua3         ###   ########.fr       */
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
	char *str = "i just want this part #############";
	char *sub = ft_substr(str, 5, 10); // Extrai "é uma s"
	if (sub != NULL)
		printf("Substring: %s\n", sub);
	free(sub); // Libera a memória alocada para a substring.
}
