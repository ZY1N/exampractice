char    *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = s2[i];
	return (s1);
}

// DO NOT SUBMIT ANYTHING BELOW

#include <stdio.h>

int main(void)
{
	char str1[] = "Flavio";
	char *str2 = "Gaucho";
	char *s = "9999";
	printf("%s\n", str1);
	printf("%s\n", s);
	s = ft_strcpy(str1, str2);
	s[3] = '8';
	printf("%s\n", s);
	return (0);
}
