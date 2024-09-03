#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	size_t i;
	size_t l;
	char *y;

	i = 0;
	y = malloc(nmemb * size);
	l = nmemb * size;
	if (!y)
		return (NULL);
	while (i < l)
	{
		y[i] = 0;
		i++;
	}
	return ((void *)y);
}
