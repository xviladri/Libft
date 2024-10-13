/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  xviladri < xviladri@student.42barcelona.c +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:36:42 by xviladri          #+#    #+#             */
/*   Updated: 2024/10/13 20:54:03 by xviladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;

	a = s;
	while (n--)
	{
		*a++ = c;
	}
	return (s);
}
/*
int	main(void)
{
    char str[] = "Hola";
    printf("\nBefore memset(): %s\n", str);

    ft_memset(str + 2, 'o', 3*sizeof(char));

    printf("After memset():  %s", str);
    return (0);
}
*/
