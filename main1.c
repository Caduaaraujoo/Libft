/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caredua3 <caredua3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:07:54 by caredua3          #+#    #+#             */
/*   Updated: 2023/10/15 23:12:08 by caredua3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	// printf("ft_strlen: %ld\n", ft_strlen("CADU\rOK"));
	// printf("strlen: %ld\n", strlen("CADU\rOK"));
	char str[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore memset(): %s\n", str);

	// Fill 8 characters starting from str[13] with '.'
	ft_memset(str + 13, 68, 8*sizeof(char));

	printf("After memset():  %s", str);
	return (0);
}
