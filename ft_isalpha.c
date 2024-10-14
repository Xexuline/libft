/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:58:28 by jsabroso          #+#    #+#             */
/*   Updated: 2024/09/12 18:58:28 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Returns 1 if c is an alphabetic character, 0 otherwise.
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
