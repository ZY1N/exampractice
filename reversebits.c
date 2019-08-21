/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reversebits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 19:05:50 by yinzhang          #+#    #+#             */
/*   Updated: 2019/08/19 19:05:52 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char   reverse_bits(unsigned char b)
{
    unsigned char c = '\0';

    int i = 0;

    while (i < 8)
    {
        c = (c << 1) | (b & 1);
        b = b >> 1;
        i++;
    }    
    return(c);
}

unsigned char   reverse_bits2(unsigned char octet)
{
	return  (((octet >> 0) & 1) << 7) | \
			(((octet >> 1) & 1) << 6) | \
			(((octet >> 2) & 1) << 5) | \
			(((octet >> 3) & 1) << 4) | \
			(((octet >> 4) & 1) << 3) | \
			(((octet >> 5) & 1) << 2) | \
			(((octet >> 6) & 1) << 1) | \
			(((octet >> 7) & 1) << 0);
}

int	main(void)
{
	unsigned char c;

	c = '&';
	write(1, &c, 1);
	write(1, "\n", 1);
	c = reverse_bits2(c);
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}