/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loading_bar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 05:36:30 by rmiranda          #+#    #+#             */
/*   Updated: 2022/02/09 08:33:55 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	printf("(#######------)");
	fflush(stdout);
	sleep(1);
	printf("\b\b\b\b\b\b\b#-----)");
	fflush(stdout);
	sleep(1);
	printf("\b\b\b\b\b\b#----)");
	fflush(stdout);
	sleep(1);
	printf("\b\b\b\b\b#---)");
	fflush(stdout);
	sleep(1);
	printf("\b\b\b\b#--)");
	fflush(stdout);
	sleep(1);
	printf("\b\b\b#-)");
	fflush(stdout);
	sleep(1);
	printf("\b\b#)");
}
