/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  xviladri < xviladri@student.42barcelona.c +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:37:37 by xviladri          #+#    #+#             */
/*   Updated: 2024/10/14 04:27:14 by xviladri         ###   ########.fr       */
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
	size_t	i;

	d = ft_strlen(dst);
	if (size <= d)
		return (size + ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && i < size - d - 1)
	{
		dst[d] = src[i];
		d++;
		i++;
	}
	dst[d] = '\0';
	return (d + ft_strlen(src));
}

/*
int	main(void)
{
	char	d[] = "Hello";
	char	src[]= "World";
	size_t	r = ft_strlcat(NULL, src, 8);
	size_t	o = strlcat(NULL, src, 8);
	printf("%zu\n", r);
	printf("%s\n", d);
	printf("%zu\n", o);
	return (0);
}*/
