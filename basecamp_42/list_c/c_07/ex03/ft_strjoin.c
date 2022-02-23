/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 22:09:58 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/19 07:28:39 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*output;

	output = dest;
	while (*dest)
		dest++;
	while (*src)
		*(dest++) = *(src++);
	*dest = *src;
	return (output);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		sep_size;
	int		strs_size;
	char	*output;
	char	*moving_output;

	i = 0;
	j = 0;
	sep_size = 0;
	strs_size = 0;
	// if (!size)
	// 	?
	while (j <= size)
	{
		strs_size += ft_strlen(str[j]);
		j++;
	}
	sep_size = ft_strlen(sep);
	output = malloc(sizeof(char) * (1 + strs_size + (sep_size * size)));
	*output = '0';
	ft_strcat(output, sep);
	while (i < size)
	{
		ft_strcat(output, sep);
		ft_strcat(output, strs[j]);
		i++;
	}
	return (output);
}
#include <stdio.h>
int main()
{
	int size = 2;
	char *str[2] = {"ab", "cd"};
	char sep[2] = {", "};
	char *test;

	test = ft_strjoin(size, str, sep);
	printf("%s\n", test);
}