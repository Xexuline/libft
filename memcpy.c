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

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst_char;
	char		*src_char;
	size_t	i;

	i = 0;
	while (i < n)
	{
		dst_char = (char *)dst;
		src_char = (char *)src;
		dst_char[i] = src_char[i];
		i++;
	}
	return (dst);
}