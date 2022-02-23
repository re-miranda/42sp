/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:34:35 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/19 01:53:18 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	recursive(int nb)
{
	if (!nb)
		return (1);
	return (nb * recursive(nb -1));
}

int	ft_recursive_factorial(int nb)
{
	if (!nb)
		return (1);
	if (nb < 0)
		return (0);
	return (recursive(nb));
}
