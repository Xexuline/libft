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

void	test_memset(void)
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

void	test_strlcat(void)
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

void	test_strchr(void) // run with -lbsd flags
{
	printf("res: %s\n", ft_strchr("hola que ase", '8'));
	printf("res: %s\n", strchr("hola que ase", '8'));
}

void	test_strrchr(void) // run with -lbsd flags
{
	printf("res: %s\n", ft_strrchr("hola que ase", 'a'));
	printf("res: %s\n", strrchr("hola que ase", 'a'));
}

void	test_strncmp(void)
{
	const char s1[] = "hola que ase";
	const char s2[] = "hola que tase";

	printf("res: %d\n", ft_strncmp(s1, s2, 20));
	printf("ori: %d\n", strncmp(s1, s2, 20));
}

void	test_memchr(void)
{
	const char s[] = "hola que ase";
	const char c = 'q';

	printf("res: %s\n", (char *)ft_memchr(s, c, 20));
	printf("ori: %s\n", (char *)memchr(s, c, 20));
}

void	test_memcmp(void)
{
	const char s1[] = "houa que ase";
	const char s2[] = "hola que ase";
	const char s3[] = "ho";
	const char s4[] = "hola que ase";

	printf("res: %d\n", ft_memcmp(s1, s2, 5));
	printf("ori: %d\n", memcmp(s1, s2, 5));
	printf("res: %d\n", ft_memcmp(s3, s4, 5));
	printf("ori: %d\n", memcmp(s3, s4, 5));
	printf("res: %d\n", ft_memcmp(s3, s4, 0));
	printf("ori: %d\n", memcmp(s3, s4, 0));
}

int	main(void)
{
	test_memcmp();
	return (0);
}
