/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caredua3 <caredua3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:07:54 by caredua3          #+#    #+#             */
/*   Updated: 2023/10/18 19:31:50 by caredua3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>
#include <ctype.h>

int	main(void)
{
	char	test[10] = "teste";
	printf("%p\n", ft_strchr(test, '\0'));
	printf("%p\n", strchr(test, '\0'));
}
