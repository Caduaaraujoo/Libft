/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caredua3 <caredua3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:43:15 by caredua3          #+#    #+#             */
/*   Updated: 2023/10/15 22:37:18 by caredua3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*j;
	size_t	i;

	j = s;
	i = 0;
	while(i < n)
	{
		j[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
