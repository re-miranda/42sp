/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:27:34 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/19 01:29:02 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	output;

	output = 1;
	if (!nb)
		return (1);
	if (nb < 0)
		return (0);
	while (nb)
	{
		output *= nb;
		nb--;
	}
	return (output);
}
