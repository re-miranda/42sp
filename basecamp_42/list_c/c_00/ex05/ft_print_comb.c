/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 05:21:21 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/07 20:15:52 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> //uni standard

void	ft_print_comb(void)
{
	char	numbers[3];

	numbers[0] = '0';
	numbers[1] = '1';
	numbers[2] = '2';
	while (numbers[0] <= '7')
	{
		while (numbers[1] <= '8')
		{
			while (numbers[2] <= '9')
			{
				write(1, &numbers[0], 1);
				write(1, &numbers[1], 1);
				write(1, &numbers[2], 1);
				numbers[2]++;
				if (numbers[0] < '7')
					write(1, ", ", 2);
			}
			numbers[1]++;
			numbers[2] = numbers[1] + 1;
		}
	numbers[0]++;
	numbers[1] = numbers[0] + 1;
	numbers[2] = numbers[1] + 1;
	}
}
