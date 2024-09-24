/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:58:59 by jsabroso          #+#    #+#             */
/*   Updated: 2024/09/24 13:32:50 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*aux;

	if (!ft_strlen((char *)little))
		return ((char *)big);
	i = 0;
	while (*big)
	{
		if (*big == little[i])
		{
			if (i == 0)
				aux = (char *)big;
			i++;
		}
		if (i == len - 1 || !little[i])
			return (aux);
		big++;
	}
	return (NULL);
}
