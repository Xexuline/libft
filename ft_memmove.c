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

// Copies n bytes from memory area src to memory area dest.
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_char;
	unsigned char	*src_char;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	dest_char = (unsigned char *)dest;
	src_char = (unsigned char *)src;
	if (src_char < dest_char)
	{
		while (n-- > 0)
			dest_char[n] = src_char[n];
	}
	else
	{
		i = -1;
		while (++i < n)
			dest_char[i] = src_char[i];
	}
	return (dest);
}
