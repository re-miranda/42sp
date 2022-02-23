/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 09:05:34 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/18 06:31:28 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recursive_write(int nb);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2", 2);
			nb = 147483648;
		}
		else
		{
			write(1, "-", 1);
			nb = nb * -1;
		}
	}
	recursive_write(nb);
}

void	recursive_write(int nb)
{
	char	n;

	n = (nb % 10) + '0';
	if (nb < 10)
	{
		write(1, &n, 1);
	}
	else
	{
		recursive_write(nb / 10);
		write(1, &n, 1);
	}
}
