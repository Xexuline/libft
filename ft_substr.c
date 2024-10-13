/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 12:09:45 by jsabroso          #+#    #+#             */
/*   Updated: 2024/10/13 13:17:21 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Create a new string from s, starting at start and with a length of len
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen((char *)s))
		return (ft_strdup(""));
	if ((size_t)start + len > ft_strlen((char *)s))
		len = ft_strlen((char *)s) - (size_t)start;
	new_str = malloc(sizeof(char) * len + 1);
	if (new_str == NULL)
		return (NULL);
	i = -1;
	while (++i < len)
		new_str[i] = s[start + i];
	new_str[i] = '\0';
	return (new_str);
}
