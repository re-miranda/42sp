/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testes_c04.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 04:32:20 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/18 19:30:53 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Testes criados por "rmiranda | Renato"
// Os testes são todos feitos com printf();
// Esse é apenas um método de testar
// Sinta-se livre para modificar e implementar sua própria maneira
// Aliases de execução de dentro da pasta do exercício
// | | |
// V V V
alias norm='clear && norminette -R CheckForbiddenSourceHeader'
alias run='clear && gcc -Wextra -Werror -Wall *.c -o ~/teste.out && ~/teste.out'
alias run2='clear && gcc *.c -o ~/teste.out && ~/teste.out'

// ==================== EXERCÍCIO 00 ====================
#include <stdio.h>
int main(void)
{
	char str[] = "123456";
	
	printf("%d\n", ft_strlen(str));
}
// ==================== EXERCÍCIO 01 ====================
int main(void)
{
	char str[] = "123456";
	ft_putstr(str);
}
// ==================== EXERCÍCIO 02 ====================
int main(void)
{
	ft_putnbr(12345);
}
// ==================== EXERCÍCIO 03 ====================
int main(void)
{
	int n;

	n = ft_atoi(" -+--10");
	printf("%d\n", n);
}
// ==================== EXERCÍCIO 04 ====================
int main(void)
{
	ft_putnbr_base(011, "011");
	write(1, "\n", 1);
}
// ==================== EXERCÍCIO 05 ====================
#include <stdio.h>
int main(void)
{
	int n;
	n = ft_atoi_base("255", "01");
	printf("%d\n", n);
}