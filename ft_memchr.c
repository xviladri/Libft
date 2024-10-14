/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  xviladri < xviladri@student.42barcelona.c +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:51:35 by xviladri          #+#    #+#             */
/*   Updated: 2024/10/14 04:54:53 by xviladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s1;

	s1 = (char *)s;
	i = 0;
	while (i < n)
	{
		if (s1[i] != (unsigned char)c)
			i++;
		else
			return ((void *)&s1[i]);
	}
	return (NULL);
}
/*
int	main(void)
{
	const char s[] = "Hola mundo";
	char	c = 'o';
	size_t	n = 10;
	char	*r = ft_memchr(s, c, n);

	printf("%s\n", r);
	return 0;
}*/
