/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:07:49 by jsabroso          #+#    #+#             */
/*   Updated: 2024/09/14 14:07:49 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// Fills the first n bytes of the memory area from s with zeros.
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
