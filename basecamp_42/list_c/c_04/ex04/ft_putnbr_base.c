/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:08:42 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/18 20:22:31 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_test(char *base, int i, int base_count)
{
	if (base[i] == '-' || base[i] == '+')
		return (1);
	if (base[i] < 32 && base[i] > 126)
		return (1);
	if (i < base_count && base[i] == base[base_count])
		return (1);
	return (0);
}

void	recursive_write(unsigned int u_nbr, char *base, int base_count)
{
	char	n;

	n = base[u_nbr % base_count];
	if (u_nbr < (unsigned int)base_count)
	{
		write(1, &n, 1);
	}
	else
	{
		recursive_write(u_nbr / base_count, base, base_count);
		write(1, &n, 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				base_count;
	int				i;
	unsigned int	u_nbr;

	u_nbr = nbr;
	base_count = 0;
	while (base[base_count])
	{
		i = 0;
		while (i <= base_count)
		{
			if (base_test(base, i, base_count))
				return ;
			i++;
		}
		base_count++;
	}
	if (base_count < 2)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		u_nbr *= -1;
	}
	recursive_write(u_nbr, base, base_count);
}
// ==================== EXERCÍCIO 04 ====================
int main(void)
{
	ft_putnbr_base(011, "011");
	write(1, "\n", 1);
}