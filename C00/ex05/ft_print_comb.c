/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hderin <harunderin2001@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:28:09 by hderin            #+#    #+#             */
/*   Updated: 2023/03/22 19:28:11 by hderin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void)
{
    char num = '0';
    char num2 = '1'; //char tipi ile sayılarımıza adres atıyoruz
    char num3 = '2';
        while(num <= '7')
        {   
         num2= num + 1;
            while(num2 <= '8')
            {

            num3= num2 + 1; 
              while(num3 <= '9') 
                {
                    write(1, &num, 1);
                    write(1, &num2, 1); // son basamak 2'yi 9'a kadar arttıracak
                    write(1, &num3, 1);
                    if(num != '7')
                    {
                        write(1, ", ", 2);
                    }
                    num3++;
                    
                }
                num2++;
            }
            
        }
        
    
}


