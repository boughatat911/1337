#include <unistd.h>

void ft_print_alphabet(void)
{
	char i;

	i =  97;
	while(i <= 122)
	{
		write(1, &i, 1);
		i++;
	}
}
 int main()
 {
	ft_print_alphabet();
	return (0);
 }