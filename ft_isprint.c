/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:29:05 by jsabroso          #+#    #+#             */
/*   Updated: 2024/09/14 11:30:12 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Returns 1 if n is a printable character, 0 otherwise.
int	ft_isprint(int n)
{
	if (n >= 32 && n <= 126)
		return (1);
	return (0);
}
