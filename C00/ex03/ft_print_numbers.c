/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hderin <harunderin2001@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:27:43 by hderin            #+#    #+#             */
/*   Updated: 2023/03/22 19:28:03 by hderin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(int c)
{
    write(1, &c, 1); //yazdırma fonksiyonum
}

void ft_print_numbers(void)
{
    int c = 0;
    while(c <= 9) //bu döngü rakamları 0'dan 9'a kadar ++
    {
        ft_putchar(c);
        c++; //arttıracak
    }

}

