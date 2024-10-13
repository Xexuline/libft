/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:51:07 by jsabroso          #+#    #+#             */
/*   Updated: 2024/10/12 17:27:05 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isspace(int c)
{
	if (c == '\f' || c == '\n' || c == '\t'
		|| c == '\r' || c == '\v' || c == ' ')
		return (1);
	return (0);
}
// Convert numbers from string to integer
int	ft_atoi(char *nptr)
{
	int	is_negative;
	int	num;

	is_negative = 1;
	num = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			is_negative *= -1;
		nptr++;
	}
	while (*nptr != '\0' && ft_isdigit(*nptr))
	{
		num *= 10;
		num += (*nptr - '0');
		nptr++;
	}
	return (num * is_negative);
}
