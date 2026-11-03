/*una compañia de viajes cuenta con 3 tipos de autobises a,b,c cada una tiene un precio por km recorrido 
por persona los costos respectivos son: 2 pesos, 2.50 pesos, 3 pesos se requiere determinar el costo total
y por persona del viaje considerando que cuando este se presupuesta debe haber un minimo de 20 personas de
 loscontario el cobro se realiza en base de este numero limite*/ 


    #include <stdio.h>

    int main(void){
    int p,tipo;
    float km, cpk, ct;

    printf("\t\nTipos de autobus\n\n[1] Autobus de 2 pesos/p\n[2] Autobus de 2.50 pesos/p\n[3] Autobus de 3 pesos/p\n\nIntroduce el numero del autobus que prefiere\n");
    scanf(" %d", &tipo);

    printf("cuantos kilometros va a recorrer: ");
    scanf("%f", &km);

    printf("cuantas personas van abordo: ");
    scanf("%d", &p);

    if(km <= 0 || p <= 0){
        printf("km y personas deben ser > 0\n");
        return 1;
    }

    switch(tipo){
        case 1:
            cpk = 2.0;
            break;
        case 2:
            cpk = 2.5;
            break;
        case 3:
            cpk = 3.0;
            break;
        default:
            printf("Tipo no valido. Usa 1,2 o 3.\n");
            return 1;
    }

    if(p<20){
        ct=km*cpk*20;
    }else{
        ct=p*km*cpk;
    }
    

    printf("\nCosto total: %.2f\n", ct);
    printf("Costo por persona: %.2f\n", ct / p);

    return 0;
    }