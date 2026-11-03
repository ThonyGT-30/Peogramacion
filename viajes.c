/*una compañia de viajes cuenta con 3 tipos de autobises a,b,c cada una tiene un precio por km recorrido 
por persona los costos respectivos son: 2 pesos, 2.50 pesos, 3 pesos se requiere determinar el costo total
y por persona del viaje considerando que cuando este se presupuesta debe haber un minimo de 20 personas de
 loscontario el cobro se realiza en base de este numero limite*/ 

#include <stdio.h>

int main(void){

    int p,tipo;
    float km, cpk, ct;

    printf("tipo de autobus \n[1] autobus de 2 pesos por persona por kilometro\n[2] autobus de 2.50 pesos por persona por kilometro\n[3]autobus de 3 pesos por persona por kilometro\n");
    scanf(" %d", &tipo);

    printf("kilometros a recorrer: ");
    scanf("%f", &km);

    printf("cuantas personas aborto\n si son menos de 20 se cobrara el precio de 20 personas\n ");
    scanf("%d", &p);

    
    if(tipo==1){
        cpk=2;
    }
    else if(tipo==2){
        cpk=2.50;
    }
    else {
        cpk=3;
    }

    if(p<20){
      p=20;

    }
    

    ct= p*km*cpk;

    printf("\nCosto total: %.2f\n",ct);
    printf("Costo por persona: %.2f\n",ct/p);

    return 0;
}