/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:32:07 by jsabroso          #+#    #+#             */
/*   Updated: 2024/09/14 10:53:13 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Returns 1 if n is an ASCII character, 0 otherwise.
int	ft_isascii(int n)
{
	if (n >= 0 && n <= 127)
		return (1);
	return (0);
}
