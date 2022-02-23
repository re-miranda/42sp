/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 05:28:42 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/16 04:44:13 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*output;

	output = dest;
	while (*dest)
		dest++;
	while (*src && nb--)
		*(dest++) = *(src++);
	*dest = '\0';
	return (output);
}
