/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testesc01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:31:38 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/10 19:37:57 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Testes criados por "maolivei | Matheus"
// Editado por "rmiranda | Renato"
// Os testes são todos feitos com printf();
// Esse é apenas um método de testar
// Sinta-se livre para modificar e implementar sua própria maneira
// Comando de execução de dentro da pasta do exercício
// | | |
// V V V
// clear && gcc -Wall -Wextra -Werror * -o ../teste && ../teste

// ==================== EXERCÍCIO 00 ====================
// deve printar 42
#include <stdio.h>
int	main(void)
{
	int	var;
	ft_ft(&var);
	printf("%d\n", var);
}

// ==================== EXERCÍCIO 01 ====================
// deve printar 42
#include <stdio.h>
int	main(void)
{
	int	var;
	int	*a;
	int	**b;
	int	***c;
	int	****d;
	int	*****e;
	int	******f;
	int	*******g;
	int	********h;

	a = &var;
	b = &a;
	c = &b;
	d = &c;
	e = &d;
	f = &e;
	g = &f;
	h = &g;
	ft_ultimate_ft(&h);
	printf("Valor: %d\n", var);
}

// ==================== EXERCÍCIO 02 ====================
// deve printar 42 24, e depois 24 42
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 24;
	printf("Antes de trocar: %d %d\n", a, b);
	ft_swap(&a, &b);
	printf("Depois de trocar: %d %d\n", a, b);
}

// ==================== EXERCÍCIO 03 ====================
// deve printar divisao = 0, modulo = 1
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 1;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	printf("Divisão = %d\n", div);
	printf("Módulo = %d\n", mod);
}

// ==================== EXERCÍCIO 04 ====================
// deve printar divisao = 0, modulo = 1
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("Divisão = %d\n", a);
	printf("Módulo = %d\n", b);
}

// ==================== EXERCÍCIO 05 ====================
// deve printar palavra
#include <stdio.h>
int	main(void)
{
	char	string[7] = {'p', 'a', 'l', 'a', 'v', 'r', 'a'};

	ft_putstr(&string[0]);
}

// ==================== EXERCÍCIO 06 ====================
// deve printar 7
#include <stdio.h>
int	main(void)
{
	char	string[7] = {'p', 'a', 'l', 'a', 'v', 'r', 'a'};
	int	size;

	size = ft_strlen(&string[0]);
	printf("Tamanho da string: %d\n", size);
}

// ==================== EXERCÍCIO 07 ====================
// deve printar -2 7 -1 0 5 4 15 -4 1 12 8 9, e depois 9 8 12 1 -4 15 4 5 0 -1 7 -2
#include <stdio.h>
int	main(void)
{
	int	table[12] = {-2, 7, -1, 0, 5, 4, 15, -4, 1, 12, 8, 9};
	int	tabsize;
	int	i;

	tabsize = 12;
	for (i = 0; i < tabsize; i++)
		printf("%d ", table[i]);
	printf("\n");
	ft_rev_int_tab(&table[0], tabsize);
	for (i = 0; i < tabsize; i++)
		printf("%d ", table[i]);
	printf("\n");
}

// ==================== EXERCÍCIO 08 ====================
// deve printar -2 7 -1 0 5 4 15 -4 1 12 8 9, e depois -4 -2 -1 0 1 4 5 7 8 9 12 15
int	main(void)
{
	int	table[12] = {-2, 7, -1, 0, 5, 4, 15, -4, 1, 12, 8, 9};
	int	tabsize;
	int	i;

	tabsize = 12;
	for (i = 0; i < tabsize; i++)
		printf("%d ", table[i]);
	printf("\n");
	ft_sort_int_tab(&table[0], tabsize);
	for (i = 0; i < tabsize; i++)
		printf("%d ", table[i]);
	printf("\n");
}