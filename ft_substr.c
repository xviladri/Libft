/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  xviladri < xviladri@student.42barcelona.c +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:08:05 by xviladri          #+#    #+#             */
/*   Updated: 2025/02/07 15:22:02 by rmarrero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
#include <stdlib.h>
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*copia;
	unsigned int	i;
	unsigned int	j;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	copia = (char *)malloc((len + 1) * sizeof(char));
	if (!copia)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] && (i < len + start))
	{
		copia[j] = s[i];
		i++;
		j++;
	}
	copia[j] = '\0';
	return (copia);
}
/*int	main(void)
{
	char	s[] = "Hola que tal";
	unsigned int start = 5;
	size_t	len = 8;
	char *r = ft_substr(s, start, len);
	printf("%s\n", r);
	return (0);
}*/
