/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:23:39 by jsabroso          #+#    #+#             */
/*   Updated: 2024/09/14 17:39:32 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int		ft_isdigit(int n);
int		ft_isalpha(int n);
int		ft_isalnum(int n);
int		ft_isascii(int n);
int		ft_isprint(int n);
size_t	ft_strlen(char *str);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memset(void *s, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	ft_strlcpy(char *dst, const char *src, size_t len);

#endif