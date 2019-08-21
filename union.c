/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 19:21:43 by yinzhang          #+#    #+#             */
/*   Updated: 2019/08/19 19:21:44 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     finddup(char c, int i , char *s)
{
    if (i == 0)
        return (0);
    i--;
    while (i >= 0)
    {
        if (s[i] == c)
            return(1);
        i--;
    }
    return(0);
}

int     finddupinstring(char c, char *s)
{
    int i = 0;

    while(s[i])
    {
        if (c == s[i])
            return(1);
        i++;
    }
    return(0);
}

void    ftunion(char *s1, char *s2)
{
    int i = 0;

    while (s1[i])
    {
        if (finddup(s1[i], i, s1) == 0)
            write(1, &s1[i], 1);
        i++;
    }

    i = 0;
    while(s2[i])
    {
        if (finddup(s2[i], i, s2) == 0 && finddupinstring(s2[i], s1) == 0)
            write(1, &s2[i], 1); 
        i++;
    }
}

int     main(int argc, char **argv)
{
    if (argc == 3)
    {
        ftunion(argv[1], argv[2]);
    }
    write(1, "\n", 1);
}
