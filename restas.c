#include <stdio.h>

int main (void){

float a,b,s,r,m,d;
printf("ingresa un numero a\n");
scanf("%f",&a);

printf("ingresa un numero b\n");
scanf("%f",&b);

s=a+b;
r=a-b;
m=a*b;
d=a/b;

printf("tu suma es %f\n",s);
printf("tu resta es %f\n",r);
printf("tu multiplicacion es %f\n",m);
printf("tu divison es %f\n",d);


    return 0;
}