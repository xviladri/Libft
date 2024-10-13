/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  xviladri < xviladri@student.42barcelona.c +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:59:54 by xviladri          #+#    #+#             */
/*   Updated: 2024/10/13 21:06:52 by xviladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	len;

	if (s == NULL)
		return (NULL);
	len = ft_strlen((char *)s);
	if (c == '\0')
		return ((char *)&s[len]);
	i = len - 1;
	while (i > 0 && s[i])
	{
		if (s[i] != ((unsigned char)c))
			i--;
		else
			return ((char *)&s[i]);
	}
	return (NULL);
}
/*
int	main(void)
{
	char *str = "Hola a que tal";
	int c = '\0';
	char *r;

	r = ft_strrchr(str, c);
	printf("%s\n", r);
	return (0);
}
*/
