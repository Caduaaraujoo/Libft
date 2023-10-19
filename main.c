/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caredua3 <caredua3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:10:25 by caredua3          #+#    #+#             */
/*   Updated: 2023/10/19 19:52:30 by caredua3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	str1[15];
	char	str2[15];
	int		ret;

	ret = ft_memcmp("atoms\0\0\0\0", "atoms\0abc", 8);
	printf("%d\n", ret);

	return (0);
}
