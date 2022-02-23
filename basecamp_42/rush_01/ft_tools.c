/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:15:48 by gmoreira          #+#    #+#             */
/*   Updated: 2022/02/14 03:03:27 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_putchar(char n)
{
	write (1, &n, 1);
}

void	print_matrix(char **matrix, int n_size)
{
	int	index;
	int	i_lines;

	index = 0;
	i_lines = 0;
	while (index < n_size)
	{
		while (i_lines < n_size)
		{
			ft_putchar(matrix[index][i_lines]);
			i_lines++;
			if (i_lines != n_size)
			{
				ft_putchar(' ');
			}
		}
		i_lines = 0;
		index++;
		ft_putchar('\n');
	}
	ft_free_matrix(matrix, n_size);
}

int	initial_validation(char *input, int	*observer_count, int *board_size)
{
	*observer_count = str_charnbr_count(input);
	if (*observer_count % 4 != 0)
		return (2);
	else if (str_charnbr_most_low(input) < 1)
		return (3);
	else if (str_charnbr_most_high(input) > *observer_count / 4)
		return (4);
	*board_size = *observer_count / 4;
	return (0);
}

int	*create_observers(char *input, int observer_count)
{
	int	i;
	int	*output;

	i = 0;
	output = malloc (observer_count * sizeof(int));
	while (i < observer_count)
	{
		output[i] = str_charnbr (input, i);
		i++;
	}
	return (output);
}
