/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:14:52 by jsabroso          #+#    #+#             */
/*   Updated: 2024/10/16 14:52:17 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_length(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	else if (n == 0)
		i++;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	long	nb;

	nb = (long)n;
	len = num_length(nb);
	res = malloc(sizeof(char) * len + 1);
	if (res == NULL)
		return (NULL);
	res[len] = '\0';
	if (nb < 0)
	{
		nb *= -1;
		res[0] = '-';
	}
	else if (nb == 0)
		res[0] = '0';
	while (nb > 0)
	{
		res[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (res);
}
