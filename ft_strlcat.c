/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  xviladri < xviladri@student.42barcelona.c +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:37:37 by xviladri          #+#    #+#             */
/*   Updated: 2024/10/13 20:47:59 by  xviladri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
#include <string.h>
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;

	d = ft_strlen(dst);
	if (size < d)
		return (size + ft_strlen(src));
	s = 0;
	while (src[s] != '\0' && d + s < size - 1)
	{
		dst[d + s] = src[s];
		s++;
	}
	if (size > ft_strlen(dst))
		dst[d + s] = '\0';
	return (d + ft_strlen(src));
}

/*
int	main(void)
{
	char	d[] = "Hello";
	char	src[]= "World";
	size_t	r = ft_strlcat(d, src, 8);
	printf("%zu\n", r);
	printf("%s\n", d);
	return (0);
}

*/
