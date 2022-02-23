/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:17:45 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/19 01:54:16 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	min;
	long int	mid;
	long int	max;
	long int	i;

	min = 0;
	max = nb;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while (min <= max)
	{
		mid = (min + max) / 2;
		i = mid * mid;
		if (i == nb)
			return (mid);
		if (i < nb)
			min = mid + 1;
		if (i > nb)
			max = mid - 1;
	}
	return (0);
}
