/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:40:53 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/17 15:48:22 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ((*(s1++) == *(s2++)) && (*s1 || *s2))
		;
	return (*(--s1) - *(--s2));
}

void	sort_pointers_str(int argc, char *argv[])
{
	char	*swap;
	int		j;

	j = 1;
	while (j + 1 < argc)
	{
		if (ft_strcmp(argv[j], argv[j + 1]) > 0)
		{
			swap = argv[j + 1];
			argv[j + 1] = argv[j];
			argv[j] = swap;
			j = 1;
			continue ;
		}
		j++;
	}
}

void	print_argv(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

int	main(int argc, char *argv[])
{
	sort_pointers_str(argc, argv);
	print_argv(argc, argv);
}
