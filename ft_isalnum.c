/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:29:03 by jsabroso          #+#    #+#             */
/*   Updated: 2024/09/14 10:29:03 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// Returns 1 if n is an alphanumeric character, 0 otherwise.
int	ft_isalnum(int n)
{
	if (ft_isdigit(n) || ft_isalpha(n))
		return (1);
	return (0);
}
