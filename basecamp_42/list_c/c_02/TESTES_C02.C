// Testes criados por "maolivei | Matheus"
// Os testes são todos feitos com printf();
// Esse é apenas um método de testar
// Sinta-se livre para modificar e implementar sua própria maneira
// Não se esqueça da biblioteca!!!
// | | |
// V V V
#include <stdio.h>

// ======================== EXERCÍCIO 00 ========================
// deve printar o conteúdo da str1 (nesse caso "fresh2refresh")
// ==============================================================
// A função 'strcpy' original copia a string 'src' para a string
// 'dest', incluindo o último byte nulo ('\0'). As strings não
// devem se sobrepor, isto é, a string 'dest' deve por obrigação
// ser grande o suficiente para receber o conteúdo de 'src'.
// O tratamento de erros em caso de sobreposição não é por conta
// da função, e sim do usuário.
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int main()
{
	char str1[20] = "fresh2refresh"; // altere à vontade
	char str2[20] = "sdfadssfd"; // altere à vontade
	char *n;

	n = strcpy(str2, str1);
	printf("%s\n", n);
	n = ft_strcpy(str2, str1);
	printf("%s\n", n);
}


// ======================== EXERCÍCIO 01 ========================
// deve printar o conteúdo da str1 (nesse caso "fresh2refresh") 
// ==============================================================
// A diferença desse exercício para o anterior é que dessa vez
// apenas a quantidade de caracteres especificada como parâmetro
// deve ser copiada. Nesse caso, 9 caracteres são equivalentes a
// "fresh2ref". Se não houver caractere nulo entre os 'n' bytes,
// a string não deve ser terminada em nulo.
// O tratamento de erros caso a string não termine em nulo não
// é por conta da função, e sim do usuário.
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

// ======================== EXERCÍCIO 02 ========================
// deve printar 1 ou 0, a depender do caso
// ==============================================================
// Nesse exercício, verifica-se se na string passada pra função
// existem apenas caracteres alfabéticos. No caso do exemplo,
// isso é verdade, então deve retornar 1. Adicione caracteres
// numerais e especiais, e então deve retornar 0. Em caso de
// string vazia, deve retornar 1 também.
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int    main()
{
	char    string[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"; // altere à vontade

	printf("%d\n", ft_str_is_alpha(string));
}


// ======================== EXERCÍCIO 03 ========================
// deve printar 1 ou 0, a depender do caso
// ==============================================================
// Idêntico ao exercício anterior, mas dessa vez verifica-se se na
// string contém apenas números.
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int    main()
{
	char    string[] = "0123456789"; // altere à vontade

	printf("%d\n", ft_str_is_numeric(string));
}


// ======================== EXERCÍCIO 04 ========================
// deve printar 1 ou 0, a depender do caso
// ==============================================================
// Idêntico ao exercício anterior, mas dessa vez verifica-se se na
// string contém apenas caracteres alfabéticos minúsculos.
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int    main()
{
	char    string[] = "abcdefghijklmnopqrstuvwxyz"; // altere à vontade

	printf("%d\n", ft_str_is_lowercase(string));
}


// ======================== EXERCÍCIO 05 ========================
// deve printar 1 ou 0, a depender do caso
// ==============================================================
// Idêntico ao exercício anterior, mas dessa vez verifica-se se na
// string contém apenas caracteres alfabéticos maiúsculos.
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int    main()
{
	char    string[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // altere à vontade

	printf("%d\n", ft_str_is_uppercase(string));
}


// ======================== EXERCÍCIO 06 ========================
// deve printar 1 ou 0, a depender do caso
// ==============================================================
// Idêntico ao exercício anterior, mas dessa vez verifica-se se na
// string contém apenas caracteres "imprimíveis" (do 32 ao 126 da
// tabela ASCII).
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int    main()
{
	char    string[] = " :~/\\)(*sdf1554FSDF0"; // altere à vontade

	printf("%d\n", ft_str_is_printable(string));
}


// ======================== EXERCÍCIO 07 ========================
// deve transformar letras minúsculas em maiúsculas
// ==============================================================
// Garanta que apenas caracteres minúsculos são alterados. Carac-
// teres maiúsculos, especiais, numéricos etc., devem permanecer
// como são.
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int    main()
{
	char    string[] = "abcdefghijklmnopqrstuvwxyz"; // altere à vontade

	printf("%s\n", ft_strupcase(string));
}


// ======================== EXERCÍCIO 08 ========================
// deve transformar letras maiúsculas em minúsculas
// ==============================================================
// Garanta que apenas caracteres maiúsculos são alterados. Carac-
// teres minúsculos, especiais, numéricos etc., devem permanecer
// como são.
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int    main()
{
	char    string[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // altere à vontade

	printf("%s\n", ft_strlowcase(string));
}


// ======================== EXERCÍCIO 09 ========================
// deve printar "Oi, Tudo Bem? 42palavras Quarenta-E-Duas; Cinquenta+E+Um"
// ==============================================================
// Garanta que apenas a primeira letra de cada palavra é maiúscula
// e que todo o restante é minúsculo. Se a palavra for iniciada em
// números, a primeira letra não deve ser capitalizada.
// Caracteres minúsculos, especiais, numéricos etc., devem
// permanecer como são.
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int	main()
{
	char    string[] = "oI, tUDo bEM? 42PALavRAS qUAREnTA-e-dUAS; cINqUenTA+e+uM";

	printf("%s\n", ft_strcapitalize(string));
}


// ======================== EXERCÍCIO 10 ========================
// deve ter o mesmo output nas duas funções
// ==============================================================
// Esse exercício é chato de ser testado. A função 'strlcpy'
// original funciona de forma semelhante a 'strncpy', com alguns
// ajustes. Primeiro de tudo, 'strlcpy' retorna o tamanho da string
// 'src', então no caso do exemplo abaixo, ela deve retornar 34.
// Essa função garante que a string destino será terminada em nulo,
// ou seja, se quer que toda a string seja copiada, deve deixar
// um espaço pro byte nulo no parâmetro 'size'. Também note que
// a função 'strlcpy' funciona apenas em strings C "verdadeiras",
// ou seja, strings terminadas com byte nulo.
// É confuso, eu sei, mas se a pessoa fez o exercício ela deve 
// saber explicar isso.
// ==============================================================
// NÃO ESQUEÇA DAS BIBLIOTECAS (esse tem uma a mais)
#include <bsd/string.h>
#include <stdio.h>
// ==============================================================
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int main()
{
	char src[] = "ola, boa tarde, meu nome e zezinho"; // altere o conteúdo da string à vontade
	char dest[35]; // altere o tamanho da string à vontade
	int orig;
	int fake;

	printf("\n========================= RESULTADOS FUNÇÃO CRIADA ===========================\n");
	fake = ft_strlcpy(dest, src, 30); // altere o último parâmetro (30) à vontade
	printf("Tamanho string 'src': %d\n", fake); // isso aqui é o que a função retorna
	printf("String 'src': %s\n", src);
	printf("String 'dest': %s\n\n", dest);
	printf("========================= RESULTADOS FUNÇÃO ORIGINAL =========================\n");
	orig = strlcpy(dest, src, 30); // altere o último parâmetro (30) à vontade
	printf("Tamanho string 'src': %d\n", orig); // isso aqui é o que a função retorna
	printf("String 'src': %s\n", src);
	printf("String 'dest': %s\n\n", dest);
}
// OBSERVAÇÕES:
// Na hora de compilar, certifique-se de usar a flag '-lbsd' só
// depois do nome do arquivo. Exemplo:
// gcc -Wall -Werror -Wextra ft_strlcpy.c -lbsd
// ==============================================================
// Cuidado pra não quebrar muito a lógica das strings pois pode
// prejudicar o output das duas funções, como por exemplo criar
// uma string destino menor que a quantidade de caracteres a ser
// copiado. Caso isso aconteça, recomendo testar a função original
// e a recriada individualmente, e então comparar os outputs.


// ======================== EXERCÍCIO 11 E 12 ========================
// po fml esses eu nao fiz, foi mal