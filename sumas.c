#include<stdio.h>

int main(void){

    int a,b;
    float f;
    char C;

    a=3;
    b=a+a;
    b=b*2;
    f=b/2;
    a=f;
    C='67';

    printf ("%i %i %f %c",a*3,b,f,C+32);


    return 0;
}