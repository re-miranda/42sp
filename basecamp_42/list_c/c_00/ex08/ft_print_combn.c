/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmiranda <rmiranda@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 19:57:40 by rmiranda          #+#    #+#             */
/*   Updated: 2022/03/01 19:57:40 by rmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_recursive(char *str, int n, int i)
{
    char limit;

    limit = '9' + (i - (n - 1));
    if (str[i] == limit)
    {
        ft_recursive(str, n, (i - 1));
        str[i] = str[i - 1] + 1;
    }
    else
        str[i]++;
    return ;
}

void ft_print_combn(int n)
{
    char str[10] = "0123456789";
    char limiter;

    limiter = '0' + (10 - n);
    if (n < 1 || n > 9)
        return;
    while (str[0] != limiter)
    {
        ft_recursive(str, n, (n - 1));
        write(1, str, n);
        if (str[0] != limiter)
            write(1, ", ", 3);
    }
}

int main(void)
{
    printf("##### INICIO\n\n");
    ft_print_combn(1);
    printf("\n##### FIM\n");
    return (0);
}