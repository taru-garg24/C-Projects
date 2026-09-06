//Odd Natural Numbers and Their Sum
#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("The odd natural numbers up to %d are:\n", n);
    for (i=1;i<=n;++i)
    {
        printf("%d\n",2*i-1);
        sum+=(2*i-1);
    }
    printf("The sum of odd natural numbers up to %d is: %d\n", n, sum);
    return 0;
}