# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    skip.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/03 17:21:24 by rmiranda          #+#    #+#              #
#    Updated: 2022/02/03 17:21:26 by rmiranda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
ls -l | sed -n 'p;n'