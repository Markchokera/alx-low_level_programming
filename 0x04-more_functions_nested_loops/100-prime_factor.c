#include <stdio.h>

int main(void)
{
    long int n = 612852475143;
    long int i;
    
    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    
    printf("%ld\n", i - 1);
    
    return 0;
}
