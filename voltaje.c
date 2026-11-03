/*un sistema electrico de medicion de temperatura proporciona incrementos de 100 milivolts por cada grado centigradopara indicar la temperatura
el rango de medicion va desde menos 3 volts hasta 10 volts tome en cuenta que las medidas de -3 volts hasta un 1 volts son consideradas frias 
las medidas de 1 a 4 volts son consideradas templadas y de 4 a 10 volts son calientes: Haga un rpograma en c que dando la entrada en volts 
indique cual es la temperratua censada y a cual de las 3 clases pertenece */

#include<stdio.h>

int main(void){
    float vt,tp;

    printf("\t sistema de medicion de temperatura\n");
    printf("ingrese el voltaje con rango de (-3 a 10)\n");
    scanf("%f",&vt);

    if(vt<-3 && vt> 10){
        printf("Error:voltaje no esta en el rango\n");
    }
    else{
        //100 milivolts= 0.1 volts=1 grado = Temperatura = Volts * 10
        tp =vt*10;

        printf("\tResultado\n");
        printf("Voltaje ingresado:%f\n",vt);
        printf("Temperatura censada:%f\n",tp);

        if(vt>=-3 && vt<1){
            printf("Clase fria\n");   
        }
        else if(vt>=1 && vt<4){
            printf("Clase templada\n");
        }
        else if(vt>=4 && vt<=10){
            printf("Clase caliente\n");
        }
    }

    return 0;

}