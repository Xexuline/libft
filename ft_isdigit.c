/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:06:41 by jsabroso          #+#    #+#             */
/*   Updated: 2024/09/12 19:07:51 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Returns 1 if n is a digit, 0 otherwise.
int	ft_isdigit(int n)
{
	if (n >= '0' && n <= '9')
		return (1);
	return (0);
}
