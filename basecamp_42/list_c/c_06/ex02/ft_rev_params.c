/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 04:09:59 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/17 15:53:42 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	while (argc - 1)
	{
		i = 0;
		while (argv[argc - 1][i])
		{
			write(1, &argv[argc - 1][i], 1);
			i++;
		}
		write(1, "\n", 1);
		argc--;
	}
}
