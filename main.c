/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caredua3 <caredua3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:10:25 by caredua3          #+#    #+#             */
/*   Updated: 2023/10/20 19:06:54 by caredua3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"

int	main(void)
{
	char	str1[15];
	char	str2[15];

	printf("strnstr: ==> %s\n", strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	printf("ft_strnstr ==> %s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));

	return (0);
}
