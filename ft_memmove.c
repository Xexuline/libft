/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:51:21 by jsabroso          #+#    #+#             */
/*   Updated: 2024/09/14 16:51:21 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_char;
	unsigned char	*src_char;
	unsigned char	*aux;
	size_t			i;

	dest_char = (unsigned char *)dest;
	src_char = (unsigned char *)src;
	aux = malloc(sizeof(unsigned char));
	i = 0;
	while (i < n)
	{
		aux[i] = src_char[i];
		dest_char[i] = aux[i];
		i++;
	}
	free(aux);
	return (dest);
}
