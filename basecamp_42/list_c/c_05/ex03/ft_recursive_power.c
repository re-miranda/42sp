/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 02:03:55 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/19 01:52:44 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;
	int	negative_power;

	result = 1;
	negative_power = 0;
	if (!power)
		return (1);
	if (power < 0)
	{
		negative_power = 1;
		power *= -1;
	}
	result = nb * ft_recursive_power(nb, power - 1);
	if (negative_power)
		return (1 / result);
	return (result);
}
