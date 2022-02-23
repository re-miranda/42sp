/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 05:40:19 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/18 09:12:23 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*output;
	int		i;
	int		j;
	int		match;

	i = 0;
	match = 1;
	if (!*to_find)
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0' && match--)
			break ;
		i++;
	}
	if (match)
		return (NULL);
	return (&str[i]);
}
