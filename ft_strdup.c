/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caredua3 <caredua3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:36:23 by caredua3          #+#    #+#             */
/*   Updated: 2023/10/21 17:14:50 by caredua3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*n_s;
	size_t	size;

	size = ft_strlen(s);
	n_s = (char *)malloc((size + 1) * sizeof(char));
	if (n_s == NULL)
		return (NULL);
	ft_strlcpy(n_s, s, size + 1);
	return (n_s);
}
