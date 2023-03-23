/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hderin <harunderin2001@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:28:21 by hderin            #+#    #+#             */
/*   Updated: 2023/03/22 19:28:23 by hderin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
  write(1, &c, 1);

}

void ft_putnbr(int nb)
{
            
            if (nb == -2147483648)
            {
                write(1, "-2", 2);    // max bite değerinide çalıştırması için -2'yi tutacak 
                nb = 147483648;
            }

            if(nb < 0)
            {
                ft_putchar('-'); //burada + olarak devam edecek
                nb = - nb;
            }

        

            if(nb > 100)
            {
                ft_putnbr(nb / 10); //nb burada ona bölünüp tekrar şarta giriyor
                ft_putchar(nb % 10 + 48); //yüzlük sayılarda birler basamağı buraya gelir
            }
            if(nb < 10)
            {
                ft_putchar(nb % 10 + 48);
            }

            else if(nb < 100)
            {
                ft_putchar(nb / 10 +48);
                ft_putchar(nb % 10 + 48);
            } 


}
