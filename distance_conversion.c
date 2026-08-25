#include <stdio.h>
int main(){
    float dkm,dm,din,dcm,dft;
    printf("enter distance in kilometres: ");
    scanf("%f", &dkm);
    dm = dkm * 1000;
    dcm= dkm * 100000;
    dft= dkm * 3280.84;
    din= dkm * 39370.1;
    printf("distance in metres: %.2f\ndistance in centimetres: %.2f\ndistance in inches: %.2f\ndistance in feet: %.2f", dm, dcm, din, dft);
    return 0;
}