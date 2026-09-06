// Display Cube of Numbers Up to an Integer
#include <stdio.h>
int main()
{
    int n,i;
    printf("enter number of terms: ");
    scanf("%d",&n);
    for (i=1;i<=n;++i)
    {
        printf("The cube of %d is : %d\n", i, i*i*i);
    }
    return 0;
}