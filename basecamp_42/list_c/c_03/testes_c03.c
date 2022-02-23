/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testes_c03.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 04:32:20 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/16 04:56:02 by rmiranda         ###   ########.fr       */
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
#include <string.h>
#include <stdio.h>
int main(void)
{
	char s1[] = "fgfggggggg";
	char s2[] = "fgfggggggg";
	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s1, s2));
}

// ==================== EXERCÍCIO 01 ====================
#include <string.h>
#include <stdio.h>
int main(void)
{
	char s1[] = "fgfggggggg";
	char s2[] = "fgfggggggg";
	printf("%d\n", strncmp(s1, s2, 1));
	printf("%d\n", ft_strncmp(s1, s2, 1));
}

// ==================== EXERCÍCIO 02 ====================
#include <string.h>
#include <stdio.h>
int main(void)
{
	char dest[] = "fgfggggggg\0          ";
	char ft_dest[] = "fgfggggggg\0          ";
	char str[] = "fgfggggggg";
	printf("%s\n", dest);
	printf("%s\n", strcat(dest, str));
	printf("%s\n", ft_strcat(ft_dest, str));
}

// ==================== EXERCÍCIO 03 ====================
#include <string.h>
#include <stdio.h>
int main(void)
{
	char dest[] = "fgfggggggg\0          ";
	char ft_dest[] = "fgfggggggg\0          ";
	char str[] = "fgfggggggg";
	printf("%s\n", dest);
	printf("%s\n", strncat(dest, str, 5));
	printf("%s\n", ft_strncat(ft_dest, str, 5));
}

// ==================== EXERCÍCIO 04 ====================
#include <string.h>
#include <stdio.h>
int main(void)
{
	char str[] = "ffgfgfgggggg";
	char to_find[] = "fgg";
	printf("%p\n", strstr(str, to_find));
	printf("%p\n", ft_strstr(str, to_find));
}

// ==================== EXERCÍCIO 05 ====================
