#include <stdlib.h>
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    int len1, len2, i, i2;

    if (!s1 && !s2)
        return (NULL);
    len1 = s1 ? strlen(s1) : 0;
    len2 = s2 ? strlen(s2) : 0;
    
    str = malloc((len1 + len2 + 1) * sizeof(char));
    if (!str)
        return (NULL);

    i = 0;
    if (s1)
        while (i < len1)
            str[i++] = s1[i];
    i2 = 0;
    if (s2)
        while (i2 < len2)
            str[i++] = s2[i2++];

    str[i] = '\0';
    return str;
}
