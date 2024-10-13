/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  xviladri < xviladri@student.42barcelona.c +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:54:31 by xviladri          #+#    #+#             */
/*   Updated: 2024/10/13 20:13:34 by  xviladri        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*a;

	a = s;
	while (n--)
	{
		*a++ = '\0';
	}
	return (s);
}
/*
int	main(void)
{
    char str[] = "Hola que tal";
    printf("\nBefore bzero(): %s\n", str);

    ft_bzero(str + 1, 8);
      
    write(1, str, sizeof(str));
        
    return (0);
}
*/
