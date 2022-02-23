/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 00:43:41 by gmoreira          #+#    #+#             */
/*   Updated: 2022/02/14 03:22:03 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	main(int argc, char *argv[])
{
	char	**matrix;
	int		board_size;
	int		observer_count;
	int		*observers;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (initial_validation(argv[1], &observer_count, &board_size))
	{
		write(1, "Error\n", 6);
		return (initial_validation(argv[1], &observer_count, &board_size));
	}
	observers = create_observers(argv[1], observer_count);
	if (secundary_validation(observers, board_size))
	{
		write(1, "Error\n", 6);
		return (secundary_validation(observers, board_size));
	}
	matrix = ft_make_board(board_size);
	print_matrix(matrix, board_size);
	free(observers);
}
