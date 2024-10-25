#include <stdio.h>

// static int n_len(long int n)
// {
// 	int	l;
	
// 	l = 1;
// 	if (n < 0)
// 		n = -n;
// 	while (n > 1)
// 	{
// 		n /= 10;
// 		l++;
// 	}
// 	return (l);
// }

static int	count_words(char const *s, char c)
{
	int	count;
	int	key;

	count = 0;
	key = 1;
	while (*s)
	{
		if (*s != c && key)
		{
			count++;
			key = !key;
		}
		if (*s == c && !key)
			key = !key;
		s++;
	}
	return (count);
}

int main()
{
	// int x = -12345;
	// printf("%d\n", n_len(x));

	char *s = "Hello,_World!";
	printf("%d\n", count_words(s, '_'));

}