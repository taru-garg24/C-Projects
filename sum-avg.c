//Sum and Average of 10 Numbers from Keyboard


//#include <stdio.h>
//int main()
//{
//    int i,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,sum=0;
  //  float avg;
   // printf("Enter ten numbers of your choice: ");
    //scanf("%d %d %d %d %d %d %d %d %d %d", &n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);
    //sum = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10;
    //avg = sum / 10.0;
    //printf("The sum of the ten numbers is: %d", sum);
    //printf("\nThe average of the ten numbers is: %.2f", avg);
    //return 0;
//}

#include <stdio.h>
int main()
{
    int i,n,sum=0;
    float avg;
    printf("Enter the value of n: ");

    for (i=1;i<=10;++i)
    {
        printf("\nNumber-%d: ",i);
        scanf("%d", &n);
        sum+=n;
    }
    avg = sum/10.0;
    printf("The sum of the ten numbers is: %d", sum);
    printf("\nThe average of the ten numbers is: %.2f", avg);
    return 0;
}