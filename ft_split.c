/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caredua3 <caredua3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:44:30 by caredua3          #+#    #+#             */
/*   Updated: 2023/10/24 19:45:54 by caredua3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_amount_strings(const char *__s, char __c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (__s[i] && __s[i] == __c)
		i++;
	while (__s[i])
	{
		count++;
		while (__s[i] && __s[i] != __c)
			i++;
		while (__s[i] && __s[i] == __c)
			i++;
	}
	return (count);
}
void	ft_len_string(const char *__s, char __c, char **__matrix)
{
	size_t	i;
	size_t	len;
	size_t	position;

	i = 0;
	position = 0;
	while (__s[i] && __s[i] == __c)
		i++;
	while (__s[i])
	{
		len = 0;
		while (__s[i] && __s[i] != __c)
		{
			len++;
			i++;
		}
		__matrix[position] = malloc(len + 1);
		// if (__matrix[position] == NULL)
		// 	ft_tratar_error_malloc();
		position++;
		while (__s[i] && __s[i] == __c)
			i++;
	}
	__matrix[position] = NULL;
}

void	ft_fill_in_words(char const *__s, char __c, char **__matrix)
{
	size_t	i;
	size_t	j;
	size_t	x;

	i = 0;
	j = 0;
	while (__s[i] && __s[i] == __c)
		i++;
	while (__matrix && __s[i])
	{
		x = 0;
		while (__s[i] && __s[i] != __c)
		{
			__matrix[j][x] = __s[i];
			i++;
			x++;
		}
		__matrix[j][x] = '\0';
		j++;
		while (__s[i] && __s[i] == __c)
			i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**matrix_string;

	matrix_string = malloc((ft_amount_strings(s, c) + 1) * sizeof(char *));
	if (matrix_string == NULL)
		return (NULL);
	ft_len_string(s, c, matrix_string);
	ft_fill_in_words(s, c, matrix_string);
	return (matrix_string);
}
