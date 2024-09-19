#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t l;
    size_t c;
    size_t x;
    char *str;

    l = 0;
    c = 0;
    x = 0;
    l = strlen(s);
    if (start > l)
        return(ft_strdup(""));
    str = malloc((len + 1) * (sizeof(char)));
    if ((!str) || (start >= l))
        return (NULL);
    while (c < start)
        c++;
    while (x < len)
        str[x++] = s[c++];
    str[x] = '\0';
    return (str);
}
char **ft_split(char const *s, char c)
{

}