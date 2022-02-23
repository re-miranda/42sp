/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_recursivo.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 05:21:21 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/12 16:12:39 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_recursive(int nb);

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
			nb = nb * -1;
		}
	}
	ft_recursive(nb);
}

void	ft_recursive(int nb)
{
	char	n;

	n = (nb % 10) + '0';
	if (nb < 10)
	{
		write(1, &n, 1);
	}
	else
	{
		ft_recursive(nb / 10);
		write(1, &n, 1);
	}
}
