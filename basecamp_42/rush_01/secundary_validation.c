/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   secundary_validation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:57:08 by sde-cama          #+#    #+#             */
/*   Updated: 2022/02/14 03:20:19 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	secundary_validation(int *input, int board_size)
{
	if (board_size != 4)
		return (0);
	if (check_adjacent(input))
	{
		return (check_adjacent(input));
	}
	if (check_corner(input))
	{	
		return (check_corner(input));
	}
	if (check_opposite(input))
	{
		return (check_opposite(input));
	}
	return (0);
}

int	check_adjacent(int *ptr)
{
	int	i;
	int	count;

	i = 0;
	while (i < 15)
	{
		count = 1;
		while (count < 4)
		{
			if (ptr[i] == ptr[i + 1])
			{
				if (ptr[i] == 4 || ptr[i] == 1)
				{
					return (11);
				}
			}
			i++;
			count++;
		}
		i++;
	}
	return (0);
}

int	check_corner(int *ptr)
{
	if (ptr[0] == 1 && ptr[8] > 1)
	{
		return (12);
	}
	else if (ptr[3] == 1 && ptr[12] > 1)
	{
		return (12);
	}
	else if (ptr[4] == 1 && ptr[11] > 1)
	{
		return (12);
	}
	else if (ptr[7] == 1 && ptr[15] > 1)
	{
		return (12);
	}
	return (0);
}

int	check_opposite(int *ptr)
{
	int	i;

	i = 0;
	while (i <= 3)
	{
		if (ptr[i] == ptr[i + 4])
		{
			if (ptr[i] != 2)
			{
				return (13);
			}
		}
		if (ptr[i + 8] == ptr[i + 12])
		{
			if (ptr[i + 8] != 2)
			{
				return (13);
			}
		}
		i++;
	}
	return (0);
}
