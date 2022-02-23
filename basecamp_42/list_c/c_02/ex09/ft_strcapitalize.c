/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 23:25:04 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/16 04:12:35 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);
int		is_alpha_or_numeric(char str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && !is_alpha_or_numeric(str[i]))
		{
			i++;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			i++;
		}
		while (str[i] != '\0' && is_alpha_or_numeric(str[i]))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			i++;
		}
	}
	return (str);
}

int	is_alpha_or_numeric(char str)
{
	if ((str >= 'A' && str <= 'Z')
		|| (str >= 'a' && str <= 'z')
		|| (str >= '0' && str <= '9'))
		return (1);
	return (0);
}
