#include <stdio.h>

int main()
{
    long long int number = 239809320265259;
    long int f1 = 2;
    long int f2;

    while (number % f1)
    {
        if (f1 <= number)
        {
            f1++;
        }
        else {
            return (-1);
        }
    }

    f2 = number / f1;
    printf("%lld = %ld * %ld\n", number, f2, f1);
    return (0);
}
