/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  xviladri < xviladri@student.42barcelona.c +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:08:33 by xviladri          #+#    #+#             */
/*   Updated: 2024/10/13 20:55:24 by xviladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (!d && !s)
		return (dest);
	while (n)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "sdf";
	char	dest[14] = "Hola que tal";

	ft_memcpy(NULL, src, 2*sizeof(char));
	printf("dest = %s\n", dest);
	return (0);
}
*/
