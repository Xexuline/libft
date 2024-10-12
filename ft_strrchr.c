/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:02:17 by jsabroso          #+#    #+#             */
/*   Updated: 2024/09/23 19:22:18 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Locates the last occurrence of c (converted to a char) in the string
char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = (int)ft_strlen((char *)s);
	while (len >= 0)
	{
		if ((char)c == s[len])
			return ((char *)&s[len]);
		len--;
	}
	return (0);
}
