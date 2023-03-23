/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hderin <harunderin2001@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:28:15 by hderin            #+#    #+#             */
/*   Updated: 2023/03/22 19:28:16 by hderin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c,1); // karakter ekrana yazdırır
}

void ft_print_comb2(void)
{
                 
    int nbr = 0;
    int nbr2 = 1;
            while(nbr <= 99)
            {
                nbr2 = nbr + 1;
                    while(nbr2 != 100)
                    {
                        ft_putchar(nbr / 10 + 48); 
                        ft_putchar(nbr % 10 + 48);      //nbr2'yi 100' eşit olmayana kadar arttıracak
                        write(1," ", 1);

                        ft_putchar(nbr2 / 10 + 48);
                        ft_putchar(nbr2 % 10 + 48);
                        if(nbr != 98)
                            write(1,", ", 1);
                        nbr2++;
                    }
                nbr++;
            }

}

