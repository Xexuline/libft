/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:45:00 by jsabroso          #+#    #+#             */
/*   Updated: 2024/10/22 18:57:44 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	count(char const *s, char c)
{
	int	counter;
	int	found_flag;
	int	i;

	i = -1;
	found_flag = 1;
	counter = 0;
	while (s[++i])
	{
		if (s[i] != c && found_flag == 1)
		{
			found_flag = 0;
			counter++;
		}
		else if (s[i] == c)
			found_flag = 1;
	}
	return (counter);
}

static void	get_positions(int *start, int *end, char const *s, char c)
{
	while (s[*start] == c)
		(*start)++;
	*end = *start;
	while (s[*end] && s[*end] != c)
		(*end)++;
}

static void	clean(char **arr, int arr_pos)
{
	while (arr_pos >= 0)
	{
		free(arr[arr_pos]);
		arr_pos--;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		start;
	int		end;
	int		arr_pos;

	arr = (char **)malloc(sizeof(char *) * (count(s, c) + 1));
	if (!s || !arr)
		return (NULL);
	start = 0;
	end = 0;
	arr_pos = 0;
	while (arr_pos < count(s, c))
	{
		get_positions(&start, &end, s, c);
		arr[arr_pos] = ft_substr(s, start, end - start);
		if (!arr[arr_pos])
		{
			clean(arr, arr_pos);
			return (NULL);
		}
		start = end;
		arr_pos++;
	}
	arr[arr_pos] = NULL;
	return (arr);
}
