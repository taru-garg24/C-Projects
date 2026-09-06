//Display n Terms of Natural Numbers and Their Sum
#include <stdio.h>
int main()
{
    int i, n, sum=0;
    printf("enter the value of n: ");
    scanf("%d", &n);
    for (i=1; i<=n; ++i)
    {
        printf("%d ", i);
        sum+=i;
    }
    printf("\nsum is %d", sum);
    return 0;
}