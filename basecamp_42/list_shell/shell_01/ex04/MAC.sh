# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAC.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/03 17:21:36 by rmiranda          #+#    #+#              #
#    Updated: 2022/02/10 00:13:41 by rmiranda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh
ifconfig | grep ether | sed 's/     ^.*(ether )       //'