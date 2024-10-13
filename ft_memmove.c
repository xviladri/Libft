/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  xviladri < xviladri@student.42barcelona.c +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:33:45 by xviladri          #+#    #+#             */
/*   Updated: 2024/10/13 20:53:41 by xviladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*destiny;
	unsigned const char	*source;

	destiny = dest;
	source = src;
	if (source < destiny)
	{
		i = n;
		while (i > 0)
		{
			i--;
			destiny[i] = source[i];
		}
	}
	else if (destiny < source)
	{
		i = 0;
		while (i < n)
		{
			destiny[i] = source[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char str[100] = "HOLAQUETAL"; 
	char src[100] = "Adeu estoy bien"; // fuente
	char str1[100] = "HOLAQUETAL";

	ft_memmove(str + 4, src, 20);  


	write(1, str, sizeof(str)); 

//	write(1, "\n", 1);
//	write(1, str1, sizeof(str1)); // escribimos todo el contenido de str. 
	return (0);
}
*/
/*
int main() // de Moha
{
	char src[100] = "Adeu estoy bien";
	char *dest = src;
	char src1[100] = "Adeu estoy bien";
	char *dest1 = src;
	int size = 2147483647;
	ft_memmove(dest + 8, dest, size);
	//memmove(dest1 + 8, dest, size);
	write(1, &src, 25);
	//write(1, "original:\n", 10);
	//write(1, &dest1, 7);

}
*/
