/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 12:34:55 by jsabroso          #+#    #+#             */
/*   Updated: 2024/09/15 12:34:55 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//Copies chars from src to dst, adds a null terminator and returns the length
size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] && i < len - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}
