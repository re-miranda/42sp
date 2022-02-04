/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helloWorld.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:52:12 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/04 04:39:07 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	int a;
	char b;
	float c;
	double d;
	long int e;
	short int f;
	
	printf("\nRESUMO BÁSICO C\n\n");
	printf("int ocupa %lu bytes.\n", sizeof(a));
	printf("char ocupa %lu byte.\n", sizeof(b));
	printf("float ocupa %lu bytes.\n", sizeof(c));
	printf("double ocupa %lu bytes.\n", sizeof(d));
	printf("long int ocupa %lu bytes.\n", sizeof(e));
	printf("short int ocupa %lu bytes.\n", sizeof(f));
	printf("\n");
	printf("Um int signed vai de -128 à 127, por padrão int é signed.\n");
	printf("Um int unsigned vai de 0 à 255, isso porque ele utiliza o último bit, que no signed int é utilizado para indicar positivo / negativo.\n");
	printf("\nFUNÇÕES:\n");
	printf("printf() printa o conteúdo dentro dos () que estiver em double quotes \" \".\n");
	printf("Para exibir o valor de variáveis no printf(), utiliza-se o especificador %%.");
	printf("\n");
	printf("\nsizeof() retorna o tamanho em bytes do argumento.\n");
	printf("\n");
	printf("\nCOMPILANDO SEU CÓDIGO\n");
	printf("Utiliza-se o comando: gcc [-Wall] [-Werror] [-Wextra] [-o outfile] infile...\n");
	printf("Para executar o código compilado (se -o não é especificado): ./a.out\n");
	printf("\n");
	printf("\nDICAS DE OURO!\n");
	printf("• Há um escopo maior que contém código do documento, possibilitando a declaração de uma variável fora do \"int main()\"; Acessível na função principal.\n");
	printf("\n");
}