/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testesc02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:31:38 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/16 03:56:17 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Testes criados por "rmiranda | Renato"
// Os testes são todos feitos com printf();
// Esse é apenas um método de testar
// Sinta-se livre para modificar e implementar sua própria maneira
// Comando de execução de dentro da pasta do exercício
// | | |
// V V V
// clear && gcc -Wall -Wextra -Werror * -o ../teste && ../teste

// ==================== EXERCÍCIO 00 ====================
#include <stdio.h>
int	main(void)
{
	
}

// ==================== EXERCÍCIO 01 ====================

#include <stdio.h>
#include <string.h>
int	main(void)
{
	unsigned int n = 7;
	char	dest[] = "ahsgdhagshdgas";
	char	ft_dest[] = "ahsgdhagshdgas";
	char	src[] = "chari";

	printf("%s\n", src);
	strncpy(dest, src, n);
	printf("%s\n", dest);
	ft_strncpy(ft_dest, src, n);
	printf("%s\n", ft_dest);
}

// ==================== EXERCÍCIO 02 ====================
#include <stdio.h>
int	main(void)
{
	char set1[] = {'a', 'b', 'c', '\0'};
	char set2[] = {'a', '1', 'c', '\0'};
	char set3[] = {'2', 'b', 'c', '\0'};
	char set4[] = {'\0'};

	printf("returned %d - should be 1.\n", ft_str_is_alpha(set1));
	printf("returned %d - should be 0.\n", ft_str_is_alpha(set2));
	printf("returned %d - should be 0.\n", ft_str_is_alpha(set3));
	printf("returned %d - should be 1.\n", ft_str_is_alpha(set4));
}

// ==================== EXERCÍCIO 03 ====================
// Teste c02 ex03
#include <stdio.h>
int	main(void)
{
	char set1[] = {'1', '2', '3', '\0'};
	char set2[] = {'a', '1', 'c', '\0'};
	char set3[] = {'2', 'b', 'c', '\0'};
	char set4[] = {'\0'};

	printf("returned %d - should be 1.\n", ft_str_is_numeric(set1));
	printf("returned %d - should be 0.\n", ft_str_is_numeric(set2));
	printf("returned %d - should be 0.\n", ft_str_is_numeric(set3));
	printf("returned %d - should be 1.\n", ft_str_is_numeric(set4));
}

// ==================== EXERCÍCIO 04 ====================
// Teste c02 ex04
#include <stdio.h>
int	main(void)
{
	char set1[] = {'a', 'b', 'c', '\0'};
	char set2[] = {'a', 'A', 'c', '\0'};
	char set3[] = {'2', 'b', 'c', '\0'};
	char set4[] = {'\0'};

	printf("returned %d - should be 1.\n", ft_str_is_lowercase(set1));
	printf("returned %d - should be 0.\n", ft_str_is_lowercase(set2));
	printf("returned %d - should be 0.\n", ft_str_is_lowercase(set3));
	printf("returned %d - should be 1.\n", ft_str_is_lowercase(set4));
}

// ==================== EXERCÍCIO 05 ====================
// Teste c02 ex05
#include <stdio.h>
int	main(void)
{
	char set1[] = {'A', 'B', 'C', '\0'};
	char set2[] = {'a', 'A', 'c', '\0'};
	char set3[] = {'2', 'b', 'c', '\0'};
	char set4[] = {'\0'};

	printf("returned %d - should be 1.\n", ft_str_is_uppercase(set1));
	printf("returned %d - should be 0.\n", ft_str_is_uppercase(set2));
	printf("returned %d - should be 0.\n", ft_str_is_uppercase(set3));
	printf("returned %d - should be 1.\n", ft_str_is_uppercase(set4));
}

// ==================== EXERCÍCIO 06 ====================
// Teste c02 ex06
#include <stdio.h>
int	main(void)
{
	char set1[] = {'A', 'B', 'C', '\0'};
	char set2[] = {128, 'A', 'c', '\0'};
	char set3[] = {'2', 31, 'c', '\0'};
	char set4[] = "";

	printf("returned %d - should be 1.\n", ft_str_is_printable(set1));
	printf("returned %d - should be 0.\n", ft_str_is_printable(set2));
	printf("returned %d - should be 0.\n", ft_str_is_printable(set3));
	printf("returned %d - should be 1.\n", ft_str_is_printable(set4));
}

// ==================== EXERCÍCIO 07 ====================
// Teste c02 ex07
#include <stdio.h>
int	main(void)
{
	char set1[] = "Aac";
	char set2[] = "cAc";
	char set3[] = "2cc";
	char set4[] = "";

	printf("returned %s - should be AAC.\n", ft_strupcase(set1));
	printf("returned %s - should be CAC.\n", ft_strupcase(set2));
	printf("returned %s - should be 2CC.\n", ft_strupcase(set3));
	printf("returned%s- should be null.\n", ft_strupcase(set4));
}

// ==================== EXERCÍCIO 08 ====================
// Teste c02 ex08
#include <stdio.h>
int	main(void)
{
	char set1[] = "Aac";
	char set2[] = "cAc";
	char set3[] = "2Cc";
	char set4[] = "";

	printf("returned %s - should be aac.\n", ft_strlowcase(set1));
	printf("returned %s - should be cac.\n", ft_strlowcase(set2));
	printf("returned %s - should be 2cc.\n", ft_strlowcase(set3));
	printf("returned%s- should be null.\n", ft_strlowcase(set4));
}

// ==================== EXERCÍCIO 09 ====================
// Teste c02 ex09
#include <stdio.h>
int	main(void)
{
	char set1[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char set2[] = "-$kk|i3c_3,v[h  ki4y.at-fd'439j5bj2.j9j$";
	char set3[] = "+$Kk|I3c_3,V[H  Ki4y.At-Fd'439j5bj2.J9j$";
	char set4[] = "Q#A)H,'B8y=9/=O0vv9xc$";
	char set5[] = "-9cb,mthr!flqicmw:$3w8z,#b}n$";
	char set6[] = "";

	printf("returned %s - Oi, Tudo Bem? 42palavras Quarenta-E-Duas; Cinquenta+E+Um.\n", ft_strcapitalize(set1));
	printf("returned %s - should be Cac.\n", ft_strcapitalize(set2));
	printf("returned %s - should be 2cc.\n", ft_strcapitalize(set3));
}

// ==================== EXERCÍCIO 10 ====================
#include <stdio.h>
int	main(void)
{
	
}

// ==================== EXERCÍCIO 11 ====================
#include <stdio.h>
int	main(void)
{
	
}

// ==================== EXERCÍCIO 12 ====================
#include <stdio.h>
int	main(void)
{
	
}