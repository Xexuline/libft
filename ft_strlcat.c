/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 12:51:39 by jsabroso          #+#    #+#             */
/*   Updated: 2024/09/15 12:51:39 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// Appends the string src to the end of dst
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen((char *)src);
	if (dstsize == 0)
		return (src_len);

	i = 0;
	while (dst[i] && (i < dstsize - dst_len - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}

	return (dst_len + src_len);
}