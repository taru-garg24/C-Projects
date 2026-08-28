//program to check if a person is eligible for driving license or not
#include <stdio.h>
int main()
{
    int age;
    printf("enter your age: ");
    scanf("%d", &age);
    (age>=18)? printf("You are eligible for driving license!"): printf("You are NOT eligible for driving license!");
    return 0;
}
