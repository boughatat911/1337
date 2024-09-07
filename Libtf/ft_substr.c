#include "libft.h"
// #include <string.h>
// #include <stdlib.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t l;
	size_t c;
	size_t x;
	unsigned char *str;

	l = 0;
	c = 0;
	x = 0;
	l = ft_strlen(s);
	str = malloc((len + 1) * (sizeof(char)));
	if (start > l)
		return ("");
	if (!str)
		return (NULL);
	while (c < start)
		c++;
	while (x < len)
	{
		str[x] = s[c];
		c++;
		x++;
	}
	str[x] = '\0';
	return ((char *)str);
}
int main()
{
	char str[] = "hello, world!";

	printf("%s\n", ft_substr(str, 7, 4));
	return(0);
}