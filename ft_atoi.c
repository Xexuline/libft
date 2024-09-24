/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:51:07 by jsabroso          #+#    #+#             */
/*   Updated: 2024/09/24 15:34:37 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *nptr)
{
	int	is_negative;
	int	num;

	is_negative = 1;
	num = 0;
	while (*nptr == ' ')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{

		if (*nptr == '-')
			is_negative *= -1;
		nptr++;
	}
	while (*nptr != '\0' && ft_isdigit(*nptr - '0'))
	{

		num *= 10;
		num += (*nptr - '0');

		nptr++;
	}
	return (num * is_negative);
}
