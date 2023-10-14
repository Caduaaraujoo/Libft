/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caredua3 <caredua3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:55:51 by caredua3          #+#    #+#             */
/*   Updated: 2023/10/14 18:44:40 by caredua3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c);
int	ft_isalnum(int c);

int	main(int argc, char *argv[])
{
	printf("%d\n", ft_isalnum(8));
	printf("%d\n", isalnum(8));
	return (0);
}
