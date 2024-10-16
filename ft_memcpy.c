/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:39:49 by jsabroso          #+#    #+#             */
/*   Updated: 2024/09/14 16:46:43 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// copies n bytes from memory area src to memory area dst
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_char;
	unsigned char		*src_char;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dst_char = (unsigned char *)dst;
		src_char = (unsigned char *)src;
		dst_char[i] = src_char[i];
		i++;
	}
	return (dst);
}
