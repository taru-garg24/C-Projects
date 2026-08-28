//program to check what the type of a triangle is based on the lengths of its sides
#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a==b && b==c){
        printf("The triangle is equilateral.");
    }
    else if (a==b || b==c || a==c){
        printf("The triangle is isosceles.");
    }
    else{
        printf("The triangle is scalene.");
    }
    return 0;
}