#include "libft.h"
#include <string.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char	*str;
    int	i;
    int	i2;
    int	len;

    if (!s1 && s2)
        return (ft_strdup(s2));
    if (s1 && !s2)
        return (ft_strdup(s1));
    if (!s1 && !s2)
        return (NULL);
    len = ft_strlen(s1) + ft_strlen(s2);
    str = malloc((len + 1) * sizeof(char));
    if (!str)
        return (NULL);
    i  = -1;
    while (++i < ft_strlen(s1))
        str[i] = s1[i];
    i2 = 0;
    while (i < len)
        str[i++] = s2[i2++];
    str[i] = '\0';
    return (str);
}
