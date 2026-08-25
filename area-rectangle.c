//PROGRAM TO INPUT DIMENSIONS OF A RECTANGLE AND CALCULATE ITS AREA
#include <stdio.h>
int main(){
    int area, peri, length, breadth;
    printf("enter length of the rectangle: ");
    scanf("%d", &length);
    printf("enter breadth of the recangle: ");
    scanf("%d", &breadth);
    area=length*breadth;
    peri=2*(length+breadth);
    printf("area of rectangle is: %d\n", area);
    printf("perimeter of rectangle is: %d\n", peri);
    return 0;
}
