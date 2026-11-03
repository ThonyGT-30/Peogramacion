#include<stdio.h>
 
int main(void){

    int entero;
    float decimal;
    char caracter[20]="";

    printf("ingresa un N.entero");
    scanf("%d", &entero);


    printf("ingresa un N. decimal");
    scanf("%f", &decimal);


    printf("ingresa un caracter");
    scanf("%c", caracter);

    printf("datos ingresados\n");
    printf("N.entero:%d\n",entero);
    printf("N.decimal:%f\n",decimal);
    printf("caracter:%c\n",caracter);
    


    return 0;
}