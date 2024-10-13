/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 10:37:53 by jsabroso          #+#    #+#             */
/*   Updated: 2024/10/13 11:19:37 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Join 2 string and create a new one
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	size;
	int		i;
	int		j;

	size = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	i = -1;
	j = -1;
	new_str = malloc(sizeof(char) * size + 1);
	if (new_str == NULL)
		return (NULL);
	while (s1[++i])
		new_str[i] = s1[i];
	while (s2[++j])
		new_str[i + j] = s2[j];
	new_str[i + j] = '\0';
	return (new_str);
}
