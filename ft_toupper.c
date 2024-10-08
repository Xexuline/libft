/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:35:49 by jsabroso          #+#    #+#             */
/*   Updated: 2024/09/14 17:37:50 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Converts a lowercase letter to uppercase.
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
