/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 07:36:56 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/12 15:34:18 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	size--;
	while (i < size)
	{
		temp = tab[size];
		tab[size] = tab[i];
		tab[i] = temp;
		i++;
		size--;
	}
}
