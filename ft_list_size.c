/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 22:18:35 by yinzhang          #+#    #+#             */
/*   Updated: 2019/08/19 22:18:36 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int     ft_list_size(t_list *begin_list)
{
    int size;

    size = 0;
    while (begin_list)
    {
        begin_list = begin_list->next;
        size += 1;
    }
    return(size);
}

