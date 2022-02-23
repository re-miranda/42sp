/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:01:36 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/19 01:54:33 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (!power)
		return (1);
	if (power < 0)
		return (0);
	while (i < power)
	{
		result = nb * result;
		i++;
	}
	return (result);
}
