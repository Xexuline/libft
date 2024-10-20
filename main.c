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
#include <bsd/string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	test_isdigit(void)
{
	char	i;

	i = '0';
	while (i < '9')
	{
		printf("exer: %d\n", ft_isdigit(i));
		printf("orig: %d\n", isdigit(i));
		i++;
	}
}

void	test_memset(void)
{
	int	*str;
	int	*str2;

	printf("memset\n");
	str = malloc(sizeof(int) * 10);
	str2 = malloc(sizeof(int) * 10);
	str = ft_memset(str, 'a', 10);
	str2 = memset(str2, 'a', 10);
	printf("exer: %s\n", (char *)str);
	printf("real: %s\n", (char *)str2);
	printf("\nEOF memset\n");
}
void	test_strlcpy()
{
	char dest[10];
	char *p_dest;
	p_dest = memset(dest, ' ', 10);
	printf("res: %ld\n", ft_strlcpy(dest, "aaa", 2));
	p_dest = memset(dest, ' ', 10);
	printf("ori: %ld\n", strlcpy(dest, "aaa", 2));
	(void)p_dest;
}

void	test_strlcat(void)
{
	size_t	total;
	char	dst[9] = "someword";
	char	*src;

	// size_t total2;
	// char dst2[9]= "someword";
	src = "Hello";
	// char *src2= "Hello";
	total = ft_strlcat(dst, src, 7);
	// total2 = strlcat(dst2, src2, 7);
	printf("total mio: %d - %s\n", (int)total, dst);
	// printf("total ori: %d - %s\n",(int)total2, dst2);
	printf("EOF strlcat\n");
}

void	test_strchr(void) // run with -lbsd flags
{
	char str[] = "hola que ase";
	printf("res: %s\n", ft_strchr(str, '8'));
	printf("res: %s\n", strchr(str, '8'));
}

void	test_strrchr(void) // run with -lbsd flags
{
	printf("res: %s\n", ft_strrchr("hola que ase", 'a'));
	printf("res: %s\n", strrchr("hola que ase", 'a'));
}

void	test_strncmp(void)
{
	const char	s1[] = "hola que ase";
	const char	s2[] = "hola que tase";

	printf("res: %d\n", ft_strncmp(s1, s2, 20));
	printf("ori: %d\n", strncmp(s1, s2, 20));
}

void	test_memchr(void)
{
	const char	s[] = "hola que ase";
	const char	c = 'q';

	printf("res: %s\n", (char *)ft_memchr(s, c, 20));
	printf("ori: %s\n", (char *)memchr(s, c, 13));
}

void	test_memcmp(void)
{
	const char	s1[] = "houa que ase";
	const char	s2[] = "hola que ase";
	const char	s3[] = "ho";
	const char	s4[] = "hola que ase";

	printf("res: %d\n", ft_memcmp(s1, s2, 5));
	printf("ori: %d\n", memcmp(s1, s2, 5));
	printf("res: %d\n", ft_memcmp(s3, s4, 5));
	printf("ori: %d\n", memcmp(s3, s4, 3));
	printf("res: %d\n", ft_memcmp(s3, s4, 0));
	printf("ori: %d\n", memcmp(s3, s4, 0));
}

void	test_strnstr(void)
{
	const char	s1[] = "hola que tase";
	const char	s2[] = "";
	const char	s3[] = "que";
	const char	s4[] = "pe";

	printf("res: %s\n", ft_strnstr(s1, s2, 3));
	// printf("ori: %s\n", strnstr(s1, s2, 3));
	printf("res: %s\n", ft_strnstr(s1, s3, 8));
	// printf("ori: %s\n", strnstr(s1, s3, 8));
	printf("res: %s\n", ft_strnstr(s1, s4, 8));
	// printf("ori: %s\n", strnstr(s1, s4, 8));
	printf("res: %s\n", ft_strnstr("", s4, 8));
	// printf("ori: %s\n", strnstr("", s4, 8));
}
void	test_atoi(void)
{
	char	num1[] = "  -123";
	char	num2[] = "--123";
	char	num3[] = "+123";
	char	num4[] = "123a";
	char	num5[] = "-a234";
	char	limit_max[] = "2147483647";
	char	limit_min[] = "-2147483648";
	char	num6[] = "\e475";

	
	printf("res: %s -> %d\n", num1, ft_atoi(num1));
	printf("ori: %s -> %d\n", num1, atoi(num1));
	printf("res: %s -> %d\n", num2, ft_atoi(num2));
	printf("ori: %s -> %d\n", num2, atoi(num2));
	printf("res: %s -> %d\n", num3, ft_atoi(num3));
	printf("ori: %s -> %d\n", num3, atoi(num3));
	printf("res: %s -> %d\n", num4, ft_atoi(num4));
	printf("ori: %s -> %d\n", num4, atoi(num4));
	printf("res: %s -> %d\n", num5, ft_atoi(num5));
	printf("ori: %s -> %d\n", num5, atoi(num5));
	printf("res: %s -> %d\n", limit_max, ft_atoi(limit_max));
	printf("ori: %s -> %d\n", limit_max, atoi(limit_max));
	printf("res: %s -> %d\n", limit_min, ft_atoi(limit_min));
	printf("ori: %s -> %d\n", limit_min, atoi(limit_min));
	printf("res: %s -> %d\n", num6, ft_atoi(num6));
	printf("ori: %s -> %d\n", num6, atoi(num6));
}

void	test_memmove(void)
{
	int 	len;
	char	dest[3];
	char	dest2[3];

	len = 3;
	printf("res: %s\n", (char *)ft_memmove(dest, "ESTO es UNA prueba", len));
	printf("ori: %s\n", (char *)memmove(dest2, "ESTO es UNA prueba", len));
}

void	test_calloc(void) // run with valgrind1 to check
{
	int rows = 20;
	int cols = (2147483648 / rows) + 1;
	char *tmp;
	char *tmp2;
	tmp = ft_calloc(rows, cols);
	tmp2 = calloc(rows, cols);
	free(tmp);
	free(tmp2);
}

void	test_strdup()
{
	char	*str;
	char	*str2;

	str = "hola que ase";
	str2 = ft_strdup(str);
	printf("ori: %s\n", str);
	printf("res: %s\n", str2);
	free(str2);
}

void	test_strjoin()
{
	char	s1[] = "lorem ipsum";
	char	s2[] = "dolor sit amet";
	char *new_str = ft_strjoin(s1, s2);
	printf("deberia ser: '%s%s' \nres: '%s'\n", s1, s2, new_str);
	free(new_str);
	s1[0] = '\0';
	new_str = ft_strjoin(s1, s2);
	printf("deberia ser: '%s%s' \nres: '%s'\n", s1, s2, new_str);
	free(new_str);
}

void	test_substr()
{
	char *empty = malloc(1);
	char s1[] = "cadena de prueba";
	printf("esperado: NULL \nres: '%s'\n", ft_substr(empty, 0, 3));
	printf("esperado: 'cadena de prueba'\nres: '%s'\n", ft_substr(s1, 0, 17));
	printf("esperado: 'dena de prueba'\nres: '%s'\n", ft_substr(s1, 2, 19));
	printf("esperado: 'c'\nres: '%s'\n", ft_substr(s1, 0, 1));
	printf("esperado: ''\nres: '%s'\n", ft_substr(s1, 0, 0));
	printf("esperado: ''\nres: '%s'\n", ft_substr(s1, 18, 1));
	s1[1] = '\0';
	printf("esperado: 'c'\nres: '%s'\n", ft_substr(s1, 1, 1));
	printf("esperado: ''\nres: '%s'\n", ft_substr("", 0, 1));
	printf("esperado: ''\nres: '%s'\n", ft_substr("", 1, 1));
}

void	test_strtrim()
{
	char s1[] = "esta es la cadena originalest";
	char set[] = "est";
	printf("esperado: a es la cadena original \nres: %s\n", ft_strtrim(s1, set));
	char set2[] = "es";
	printf("esperado: ta es la cadena original \nres: %s\n", ft_strtrim(s1, set2));
	printf("esperado: '' \nres: %s\n", ft_strtrim("", ""));
	char set3[] = "nada";
	printf("esperado: 'esta es la cadena originalest' \nres: %s\n", ft_strtrim(s1, set3));
}

void	test_split()
{
	char s[] = "esta es la cadena";
	int i = 0;
	char **res;

	res = ft_split(s, ' ');
	while (res[i])
	{
		printf("esperado: '%s' \nres: '%s'\n", s, res[i]);
		i++;
	}
	i = 0;
	res = ft_split("cadena        con   algunos  spacios", ' ');
	while (res[i])
	{
		printf("esperado: 'cadena'-'con'-'algunos'-'spacios' \nres: '%s'\n", res[i]);
		i++;
	}
	res = ft_split("cadena con algunos espacios", '\t');
	i = 0;
	while (res[i])
	{
		printf("esperado: 'cadena con algunos espacios' \nres: '%s'\n", res[i]);
		i++;
	}
}

void	test_itoa()
{
	printf("esperado %d\nres: %s\n", 123, ft_itoa(123));
	printf("esperado %d\nres: %s\n", -123, ft_itoa(-123));
	printf("esperado %d\nres: %s\n", 0, ft_itoa(0));
	printf("esperado %d\nres: %s\n", __INT_MAX__, ft_itoa(__INT_MAX__));
	printf("esperado %d\nres: %s\n", -2147483647, ft_itoa(-2147483647));
}

static char	s_ft_toUpper(unsigned int i, char c)
{
	(void)i;
	return (c - 32);
}
static char s_addone(unsigned int i, char c)
{
	(void)i;
	return (c + 1);
}
void	test_strmapi()
{
	char	*str = "hola que ase";
	char	*res;

	res = ft_strmapi(str, &s_ft_toUpper);
	printf("esperado: HOLA QUE ASE\nres: %s\n", res);
	free(res);
	res = ft_strmapi(str, &s_addone);
	printf("esperado: hola que ase\nres: %s\n", res);
}
static void s_ft_stri_increment(unsigned int i, char *c)
{
	*c = *c + i;
}
static void ft_stri_addone(unsigned int i, char *c)
{
	(void)i;
	*c = *c + 1;
}
void	test_strteri()
{
	char	str[] = "1234";
	ft_striteri(str, &s_ft_stri_increment);
	printf("esperado: 1357\nres: %s\n", str);
	ft_striteri(str, &ft_stri_addone);
	printf("esperado: 2468\nres: %s\n", str);
}

void	test_putchar()
{
	ft_putchar_fd('a', 1);
	write(1, "\n", 1);
}

void	test_putstr()
{
	ft_putstr_fd("hola que ase", 1);
	write(1, "\n", 1);
}

void	test_putendl()
{
	ft_putendl_fd("hola que ase putendl", 1);
}

void	test_putnbr_fd()
{
	ft_putnbr_fd(1234, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-1234, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(0, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
}

void test_lstnew()
{
	t_list *new;
	char *content = "hola que ase";
	new = ft_lstnew(content);
	printf("content: %s\n", (char *)new->content);
	printf("next: %p\n", new->next);
	printf("EOF lstnew\n");
}

void test_lstadd_front()
{
	t_list *old;
	t_list **lst = (t_list**)malloc(sizeof(t_list *));
	t_list *new;

	old = ft_lstnew("antiguo");
	new = ft_lstnew("nuevo");
	*lst = old;
	printf("content: %s\n", (char *)(*lst)->content);
	ft_lstadd_front(lst, new);
	printf("content debería cambiar a nuevo\n");
	printf("content: %s\n", (char *)(*lst)->content);
}

int	main(void)
{
	test_lstadd_front();
	return (0);
}
