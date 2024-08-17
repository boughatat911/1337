#include <stdio.h>
#include <unistd.h>

void ft_print_comb(void){
    char j;
        char k;
        char l;
        char m;
        j = '0';
        while (j <= '9'){
            k = j + 1;
            while (k <= '9'){

                write (1, &j, 1);
                write (1, &k, 1);
                write(1, " ", 1);
            l = '0';
            while (l <= '9'){
                m = k + 1;
                while ( m <= '9'){
                    
                 
                write (1, &l, 1);
                write (1, &m, 1);
                write(1, ", ", 2);
                
                    m++;
                }
                l++;
            }
                k++;
            }
            j++;
        }
}
int main()
{
    ft_print_comb();
    return (0);
}