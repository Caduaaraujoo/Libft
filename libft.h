/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caredua3 <caredua3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:14:36 by caredua3          #+#    #+#             */
/*   Updated: 2023/10/15 21:57:40 by caredua3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H_
#define LIBFT_H_

/*
	Is functions libray ctype.h
*/

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);

/*
	Is functions libray string.h
*/

size_t	ft_strlen(const char *__s);
void	*ft_memset(void *s, int c, size_t n);

#endif
