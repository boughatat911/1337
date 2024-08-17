#include <unistd.h>

void ft_print_comb2(void)
{
    char a ='0';
    char b;

    while(a <= '9')
    { b = a + 1;
    while (b <= '9'){
        write(1, "00 ", 3);
        write(1, &a, 1);
        write(1, &b, 1);
        write(1, ", ", 2);
        b++;
    }
    a++;    
    }
        char c = '9';
        char d = '0';
        while(c <= '9')
    {
        while(d <= '9')
        {    
            write(1, "00 ", 3);
            write(1, &c, 1);
            write(1, &d, 1);
            if(c!= '9' || d !='9')
            {
                write(1, ", ", 2);
            }
             d++;
        }
        c++;
		
		char j;
		char k;
		j = '0';
		while (j <= '99'){
			k = j + 1;
			while (k <= '99'){
				write (1, &j, 1);
				write (1, &k, 1);
				k++;
			}
			j++;
		}
    }
    
int main()
{
    ft_print_comb2();
    return (0);
} 