#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned  char *s;

	d = dest;
	s = src;
	if(d > s)
	{
	while (n > 0)
	{
		n--;
		d[n] = s[n];
	}
	}
	else
		ft_memcpy(dest, src, n);	
	return (dest);
}
