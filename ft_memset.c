/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:39:23 by jsabroso          #+#    #+#             */
/*   Updated: 2024/09/14 11:39:23 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// Fills the first len bytes of pointer s with the constant byte c.
void	*ft_memset(void *s, int c, size_t len)
{
	size_t	i;
	int		*p;

	i = 0;
	while (i < len)
	{
		p[i] = c;
	}
	return (p);
}
