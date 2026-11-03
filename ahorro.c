#include <stdio.h>

int main (void){
("una persona ahorra el 15% de su salario semanal, el 20% en pagos y servicios,el 15% en diversion y el 50% en comida ");
float s,h,p,c,d;
    printf("ingresa tu salario semanal \n");
    scanf("%f",&s);

    h=s*0.15*4;
    p=s*0.20*4;
    c=s*0.50*4;
    d=s*0.15*4;


    printf("tu ahorro es %f\n",h);
    printf("tu pago en servicios es %f\n",p);
    printf("tu gasto en comidas es  %f\n",c);
    printf("tu dinero para divertirte es %f\n",d);

    return 0;
}