#include "libft.h"
#include <stdlib.h>
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

int main(void)
{
    int *arr;
    size_t n = 5;

    // Test your ft_calloc function
    arr = (int *)ft_calloc(n, sizeof(int));

    if (!arr) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Print the values in the array (they should all be zero)
    for (size_t i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
        printf("\n");

    
    // Free the allocated memory
    free(arr);

    return 0;
}
