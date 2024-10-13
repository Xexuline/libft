/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 12:51:39 by jsabroso          #+#    #+#             */
/*   Updated: 2024/10/12 17:27:49 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Appends the string src to the end of dst
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = 0;
	src_len = 0;
	while (dst[dst_len] && dst_len < size)
		dst_len++;
	while (src[src_len] && (1 + dst_len + src_len) < size)
	{
		dst[dst_len + src_len] = src[src_len];
		src_len++;
	}
	if (dst_len < size)
		dst[dst_len + src_len] = '\0';
	return (dst_len + ft_strlen((char *)src));
}
