/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caredua3 <caredua3@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:07:54 by caredua3          #+#    #+#             */
/*   Updated: 2023/10/17 15:12:42 by caredua3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
#include  <stdlib.h>

int	main(void)
{
    char *src;
    char *dest;
    char *str = strdup("KJDHIOFJKLFPJKJKFREPJOREPJOFR");
    src = &str[3];
    dest = &str[5];

    ft_memmove(dest, src, 5);
    printf("memmove dest = %s, src = %s\n", dest, src);

    return(0);

}
