/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:54:09 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/17 21:04:36 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int	*ft_range(int min, int max)
{
	int *output;
	int i;
	int j;

	i = min;
	j = 0;
	if (min >= max)
		return (NULL);
	output = malloc(sizeof(int) * min - max);
	while (i < max)
	{
		output[j] = i;
		i++;
		j++;
	}
	return (output);
}
#include <stdio.h>
int main(void)
{
	int i = 0;
	int *n;
	
	n = ft_range(8, 8);
	while (i <= 5)
	{
		printf("%d", n[i]);
		i++;
	}
	printf("\n");
	free(n);
}