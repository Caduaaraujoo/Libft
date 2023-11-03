/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caredua3 <caredua3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:45:28 by caredua3          #+#    #+#             */
/*   Updated: 2023/11/03 09:00:21 by caredua3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*vector;

	vector = malloc(nmemb * size);
	if (vector == NULL)
		return (vector);
	ft_bzero(vector, nmemb * size);
	return (vector);
}
