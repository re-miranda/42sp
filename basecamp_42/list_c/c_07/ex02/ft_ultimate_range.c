/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:41:44 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/17 22:09:34 by rmiranda         ###   ########.fr       */
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
int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	range[0] = ft_range(min, max);
	return (min - max);
}
