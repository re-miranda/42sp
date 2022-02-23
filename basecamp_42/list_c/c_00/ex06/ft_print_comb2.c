/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 05:21:21 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/07 20:29:59 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char numbers[])
{
	write(1, &numbers[0], 1);
	write(1, &numbers[1], 1);
	write(1, " ", 1);
	write(1, &numbers[2], 1);
	write(1, &numbers[3], 1);
	numbers[3]++;
	if (!(numbers[0] == '9' && numbers[1] == '8'))
		write(1, ", ", 2);
}

void	init_var(char numbers[])
{
	numbers[0] = '0';
	numbers[1] = '0';
	numbers[2] = '0';
	numbers[3] = '1';
}

void	ft_print_comb2(void)
{
	char	numbers[4];

	init_var(numbers);
	while (numbers[0] <= '9')
	{
		while (numbers[1] <= '9')
		{
			while (numbers[2] <= '9')
			{
				while (numbers[3] <= '9')
					print(numbers);
				numbers[2]++;
				numbers[3] = '0';
			}
			numbers[1]++;
			numbers[2] = numbers[0];
			numbers[3] = numbers[1] + 1;
		}
	numbers[0]++;
	numbers[1] = '0';
	numbers[2] = numbers[0];
	numbers[3] = numbers[1] + 1;
	}
}
