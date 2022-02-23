/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:31:14 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/17 20:51:29 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *output;
	int i;

	i  = 0;
	while (src[i])
		i++;
	output = malloc(sizeof(char) * i + 1);
	while (i)
	{
		output[i] = src[i];
		i--;
	}
	output[i] = src[i];
	return (output);
}
#include <stdio.h>
int main(void)
{
	char m[] = "abc";
	char *n;
	n = ft_strdup(m);
	printf("Input: %s\nOutput: %s\n", m, n);
	free(n);
}