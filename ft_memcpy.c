/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caredua3 <caredua3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:48:28 by caredua3          #+#    #+#             */
/*   Updated: 2023/10/16 17:46:24 by caredua3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*c;
	const unsigned char	*j;

	i = 0;
	c = dest;
	j = src;
	while (i < n)
	{
		c[i] = j[i];
		i++;
	}
	return (dest);
}
