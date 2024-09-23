/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsabroso <jsabroso@student.42malaga.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:46:51 by jsabroso          #+#    #+#             */
/*   Updated: 2024/09/14 11:46:51 by jsabroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bsd/string.h>

void test_memset(void)
{
	printf("memset\n");
	int *str = malloc(sizeof(int) * 10);
	int *str2 = malloc(sizeof(int) * 10);
	str = ft_memset(str, 'a', 10);
	str2 = memset(str2, 'a', 10);

	printf("exer: %s\n", (char *)str);
	printf("real: %s\n", (char *)str2);
	printf("\nEOF memset\n");
}
	
void test_strlcat(void)
{
	size_t total;
	size_t total2;
	char dst[9]= "someword";
	char dst2[9]= "someword";
	char *src= "Hello";
	char *src2= "Hello";
	total = ft_strlcat(dst, src, 7);
	total2 = strlcat(dst2, src2, 7);
	printf("total mio: %d - %s\n",(int)total, dst);
	printf("total ori: %d - %s\n",(int)total2, dst2);
	printf("EOF strlcat\n");
}

void test_strchr(void)
{
	printf("res: %s\n", ft_strchr("hola que ase", '8'));
	printf("res: %s\n", strchr("hola que ase", '8'));
}
int	main(void)
{
	test_strchr();
	return (0);
}
