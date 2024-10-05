/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:51:51 by jsabroso          #+#    #+#             */
/*   Updated: 2024/09/24 17:51:51 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	size_t	i;
	char	*str;

	i = 0;
	size = ft_strlen((char *)s);
	str = malloc((size * sizeof(char)) + 1);
	if (!str)
		return (NULL);
	while (i++ < size)
		str[i] = s[i];
	str[size] = '\0';
	return (str);
}
