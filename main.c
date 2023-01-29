#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, n1, n2, i, gcd;

    printf("Enter two integers: \n");
    printf("num1 : ");
    scanf("%d", &n1);
    printf("num2 : ");
    scanf("%d", &n2);

    num1 = n1;
    num2 = n2;

    n1 = ( n1 > 0) ? n1 : -n1;
    n2 = ( n2 > 0) ? n2 : -n2;

    for(i=1; i <= n1 && i <= n2; ++i)
    {

        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("\nGreatest Common Divisor of %d and %d is GCD = %d\n", num1, num2, gcd);

    return 0;
}
