# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    count_files.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/03 17:21:46 by rmiranda          #+#    #+#              #
#    Updated: 2022/02/03 17:21:48 by rmiranda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

find -type d,f | wc -l