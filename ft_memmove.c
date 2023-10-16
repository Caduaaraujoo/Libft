/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caredua3 <caredua3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:37:33 by caredua3          #+#    #+#             */
/*   Updated: 2023/10/16 20:37:40 by caredua3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	swap[n];

	i = 0;
	while(i < n)
	{
		swap[i] = ((unsigned char *)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = swap[i];
		i++;
	}
	return (dest);
}
