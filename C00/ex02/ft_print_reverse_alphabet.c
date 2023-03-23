/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hderin <harunderin2001@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:27:33 by hderin            #+#    #+#             */
/*   Updated: 2023/03/22 19:27:36 by hderin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char c = 'z';
    while (c >= 'a')
    {
        write(1, &c, 1);
        c--; // z'nın decimal değerini bir bir a değerine kadar azaltacak
    }
    
}
