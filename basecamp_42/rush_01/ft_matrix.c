/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 20:46:24 by gmoreira          #+#    #+#             */
/*   Updated: 2022/02/14 03:02:18 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	**ft_make_board(int n_size)
{
	int		line;
	char	**columns;

	columns = malloc (n_size * sizeof (char *));
	line = 0;
	while (line < n_size)
	{
		columns[line] = malloc (sizeof (char) * n_size);
		line++;
	}
	ft_putchar_matrix('0', columns, n_size);
	return (columns);
}

void	ft_free_matrix(char **columns, int n_size)
{
	int	line;

	line = 0;
	while (line < n_size)
	{
		free(columns[line]);
		line++;
	}
	free(columns);
}

void	ft_putchar_matrix(char n, char **matrix, int n_size)
{
	int	index;
	int	i_lines;

	index = 0;
	i_lines = 0;
	while (index < n_size)
	{
		while (i_lines < n_size)
		{
			matrix[index][i_lines] = n;
			i_lines++;
		}
		i_lines = 0;
		index++;
	}
}
