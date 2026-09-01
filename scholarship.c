//program to offer a scholarhsip to a student based on their marks
#include <stdio.h>
int main(){
    int p,c,m;
    printf("enter marks in physics, chemistry and mathematics: ");
    scanf("%d %d %d", &p, &c, &m);
    (p>=90 && c>=90 && m>=90)? printf("Congratulatiions!!! You have been offered a scholarship!"): printf("Sorry! You haven't been offered a scholarship!");
    return 0;
}