/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 08:35:28 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/18 06:29:50 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*(str + n))
	{
		n++;
	}
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_size;
	unsigned int	dest_size;
	unsigned int	remaining_size;

	src_size = ft_strlen(src);
	dest_size = ft_strlen(dest);
	remaining_size = size - dest_size;
	if (remaining_size <= src_size)
		return (size + dest_size);
	if (src_size < remaining_size)
	{
		dest += dest_size;
		while (*src && remaining_size--)
		{
			*dest++ = *src++;
		}
		*dest = '\0';
	}
	return (src_size + dest_size);
}
