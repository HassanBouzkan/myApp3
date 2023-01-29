#include <stdio.h>

int main()
{
    int a, b, n1, n2, rem;

    printf("Enter two integers: \n");
    printf("num1 : ");
    scanf("%d",&a);
    printf("num2 : ");
    scanf("%d",&b);

    n1 = a ;
    n2 = b ;
    n1 = ( n1 > 0) ? n1 : -n1;
    n2 = ( n2 > 0) ? n2 : -n2;

    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("GCD = %d\n",n1);
    rem = a % b ;
    printf("\nRemainder of %d modulus %d is rem = %d\n", a, b, rem);
  return 0;
}

