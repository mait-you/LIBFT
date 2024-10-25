#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

// -L. -lft
char to_upper_if_even(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (char)ft_toupper(c);
	return c;
}

int main(void)
{
	// ===> ft_substr
	// char s[] = "Bonjour comment ca va?"; // ur comme
	// char *substr = ft_substr(s, 5, 30);
	// printf("%s\n", substr);
	// free(substr);

	// ===> ft_strjoin
	// char *s1 = "";
	// char *s2 = "";
	// char *s_join;

	// s_join = ft_strjoin(s1, s2);
	// printf("%s\n", s_join);
	// free(s_join);

	// ===> ft_strtrim
	// char *s = "y_Hello, World! _";
	// char *set = "!o_y";
	// char *trim;

	// trim = ft_strtrim(s, set);
	// printf("%s", trim);
	// free(trim);

	// ===> ft_split
	// char *s = "____He_l_lo,_World!__";
	// char **split;

	// split = ft_split(s, '_');
	// int i = 0;
	// while (i < 4)
	// 	printf("%s\n", split[i++]);
	// i = 0;
	// while (i < 4)
	// 	free(split[i++]);
	// free(split);

	// ===> ft_itoa
	// int x = 17845;
    // char *str = ft_itoa(x);
    // printf("%s\n", str);

	// ft_strmapi
	char *s = "hello, world!";
    char *result = ft_strmapi(s, to_upper_if_even);

    if (result)
    {
        printf("%s\n", s);
        printf("%s\n", result);
        free(result);
    }
    else
        printf("Memory allocation failed.\n");
}
