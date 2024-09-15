/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:38:34 by jsabroso          #+#    #+#             */
/*   Updated: 2024/09/14 17:39:19 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Converts an uppercase letter to lowercase.
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
