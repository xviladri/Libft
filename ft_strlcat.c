/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  xviladri < xviladri@student.42barcelona.c +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:37:37 by xviladri          #+#    #+#             */
/*   Updated: 2024/10/14 04:31:36 by xviladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (size <= dlen)
		return (slen + size);
	j = dlen;
	while (src [i] != '\0' && i < size - dlen - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dlen + slen);
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
