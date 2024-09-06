#include "libft.h"

char *ft_strdup(const char *s)
{
size_t	i;
size_t	c;
unsigned char *y;

c = 0;
if (!s)
return (NULL);

i = ft_strlen(s);
y = malloc((i + 1) * sizeof(char));
while (c < i)
{
	y[c] = s[c];
	c++;
}
y[c] = '\0';

return((char *)y);
}
