/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 01:23:06 by rmiranda          #+#    #+#             */
/*   Updated: 2022/03/03 01:23:06 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_recursive(char *str, int n, int i)
{
	char	limit;

	limit = '9' + (i - (n - 1));
	if (str[i] == limit)
	{
		ft_recursive(str, n, (i - 1));
		str[i] = str[i - 1] + 1;
	}
	else
		str[i]++;
	return ;
}

void	ft_print_combn(int n)
{
	int		i;
	char	str[10];
	char	limiter;

	i = 0;
	limiter = '0' + (10 - n);
	if (n < 1 || n > 9)
		return ;
	while (i < n)
	{
		str[i] = '0' + i;
		i++;
	}
	while (str[0] != limiter)
	{
		ft_recursive(str, n, (n - 1));
		write(1, str, n);
		if (str[0] != limiter)
			write(1, ", ", 3);
	}
}
