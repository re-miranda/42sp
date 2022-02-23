/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 01:40:27 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/19 01:57:16 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long int	ft_sqrt_ex06(long long int nb)
{
	long long int	min;
	long long int	mid;
	long long int	max;
	long long int	i;
	int				limit;

	min = 0;
	max = nb;
	limit = 100;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while (min <= max && limit--)
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
	return (mid);
}

int	ft_is_prime(long long int nb)
{
	long long int	sqrt;
	long long int	i;

	i = 3;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if ((nb % 2) == 0)
		return (0);
	sqrt = ft_sqrt_ex06(nb);
	while (i <= sqrt)
	{
		if ((nb % i) == 0)
			return (0);
		i += 2;
	}
	return (1);
}
