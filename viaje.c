/*una compañia de viajes cuenta con 3 tipos de autobises a,b,c cada una tiene un precio por km recorrido 
por persona los costos respectivos son: 2 pesos, 2.50 pesos, 3 pesos se requiere determinar el costo total
y por persona del viaje considerando que cuando este se presupuesta debe haber un minimo de 20 personas de
 loscontario el cobro se realiza en base de este numero limite*/ 

 #include <stdio.h>

int main(void){

    int p,b,k;
    float cp,ct;

    printf("ingrese el numero de personas que abordo\n");
    scanf("%d",&p);
    printf("ingresa cuanta distancia va a viajar en kilometros enteros \n");
    scanf("%d",&k);
    printf("ingrese el tipo de autobus\n[1]autobus de 2 p/persona\n [2]autobus de 2.50 p/persona\n[3]autobus de 3 pesos\n");
    scanf("%d",&b);


    if(p<20){
        printf("el precio se dividira en total de personas\n");

        return 1;
    }
    cp=p/20;


    if(p=20){
        cp=75;
    } 
    else if(p>200&&p<=300){
        cp=85;
    } 
    else {
        cp=95;
    }

    ct= p*cp;

    printf("\n Detalles del evento\n\n");
    printf("Numero de personas: %d\n",p);
    printf("Costo por persona: %2f\n",cp);
    printf("Costo del viaje : %2f\n\n",ct);

    printf("Gracias por su compra, Esperamos a su regreso\n\n");

    return 0;
    }