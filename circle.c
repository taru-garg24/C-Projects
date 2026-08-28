//PROGRAM TO INPUT THE RADIUS OF A CIRCLE AND CALCULATE ITS AREA AND PERIMETER
#include <stdio.h>
int main(){
    float radius, area, peri;
    printf("enter the radius of the circle: ");
    scanf("%f", &radius);
    area=3.14*radius*radius;
    peri=2*3.14*radius;
    printf("the area and perimeter of the circle is: %f and %f respectively.", area, peri);
    return 0;
}
