/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 18:51:03 by yinzhang          #+#    #+#             */
/*   Updated: 2019/08/19 18:51:04 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    char *ret;

    while(src[i])
        i++;
    if (!(ret = malloc(sizeof(char) * i + 1)))
        return(NULL);
    ret[i] = '\0';
    return(ret);
}
