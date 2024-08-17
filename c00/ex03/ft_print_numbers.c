#include <unistd.h>

void ft_print_numbers(void)
{
	char i;

	i = 48;
	while(i <= 57)
	{
		write(1, &i, 1);
		i++;
	}
}
