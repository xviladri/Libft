/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  xviladri < xviladri@student.42barcelona.c +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:46:16 by xviladri          #+#    #+#             */
/*   Updated: 2024/10/14 05:36:55 by xviladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

static int	digit_count(int num)
{
	int				i;
	unsigned int	p;

	i = 1;
	if (num == 0)
		i++;
	if (num < 0)
	{
		p = -num;
		i++;
	}
	p = num;
	while (p > 0)
	{
		p = p / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				len;
	unsigned int	p;
	char			*new;

	if (n == -2147483648)
		return ("-2147483648");
	len = digit_count(n);
	new = (char *)malloc((len + 1) * sizeof(char));
	if (!new)
		return (NULL);
	new[0] = '0';
	p = (unsigned int)n;
	if (n < 0)
	{
		p = -n;
		new[0] = '-';
	}
	new[len] = '\0';
	while (p)
	{
		new[--len] = p % 10 + '0';
		p = p / 10;
	}
	return (new);
}
/*
int	main(void)
{
	int	n = 0;
	char	*r;
	
	r = ft_itoa(n);
	printf("%s", r);
	return (0);	
}*/
