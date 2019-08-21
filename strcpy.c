/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 19:57:23 by yinzhang          #+#    #+#             */
/*   Updated: 2019/08/12 20:14:45 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, char *s2)
{
	int i;
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return(s1);
}

int		main()
{
	char s1[] = "dddd";
	char s2[] = "666";
	char *s;

	printf("s1 %s s2 %s\n", s1, s2);

	s = ft_strcpy(s1, s2);
	printf("s1 %s s2 %s  s %s\n", s1, s2, s);
}