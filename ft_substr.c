/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caredua3 <caredua3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:34:35 by caredua3          #+#    #+#             */
/*   Updated: 2023/10/22 20:17:13 by caredua3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*n_str;
	size_t	len_s;

	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s || len == 0)
	{
		n_str = (char *)malloc(1);
		if (n_str == NULL)
			return (NULL);
		n_str[0] = '\0';
		return (n_str);
	}
	if (start + len > len_s)
		len = len_s - start;
	n_str = (char *)malloc(len + 1);
	if (n_str == NULL)
		return (NULL);
	ft_memcpy(n_str, s + start, len);
	n_str[len] = '\0';

	return (n_str);
}


