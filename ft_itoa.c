/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caredua3 <caredua3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:00:58 by caredua3          #+#    #+#             */
/*   Updated: 2023/10/25 19:38:53 by caredua3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_convert_int_for_char(int n, char *__s)
{
	char	c_char;

	if (n <= 9)
	{
		c_char = n + '0';
	}
	else
	{
		c_char = (n % 10) + '0';
		ft_convert_int_for_char(n / 10);
	}
}
size_t	ft_len_str(int n, int is_s)
{
	size_t	len;
	int		index;

	len = 1;
	index = is_s;
	while (index > 10)
	{
		index = index / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		signal;
	int		is_signal;
	char	*str_number;

	signal = 1;
	is_signal = 1;
	if (n < 0)
	{
		signal = -1;
		is_signal = 2;
	}
	str_number = malloc((ft_len_str(n, is_signal) + 1) * sizeof(char));
	str_number[ft_len_str(n, is_signal) + 1] = '\0';
	if (str_number == NULL)
		return (NULL);
	ft_convert_int_for_char(n * signal, str_number);
	return (str_number);
}
