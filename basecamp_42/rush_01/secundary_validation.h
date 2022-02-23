/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   secundary_validation.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 01:35:37 by sde-cama          #+#    #+#             */
/*   Updated: 2022/02/14 03:19:40 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SECUNDARY_VALIDATION_H
# define SECUNDARY_VALIDATION_H

int		secundary_validation(int *ptr, int board_size);
int		check_adjacent(int *ptr);
int		check_corner(int *ptr);
int		check_opposite(int *ptr);

#endif