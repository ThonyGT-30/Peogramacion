/*La langosta ahumada es una empresa dedicada a ofrecer banquetes ; sus tarifas son : el costo por persona es de $95 
pero si el numero de personas es mayor a 200 pero menor o igual a 300, el costo es de $85 para mas de 3000 personas 
el costo por platillo es de $75*/

#include <stdio.h>

int main(void){

    int p;
    float cp,ct;
    
    printf("ingrese el numero de personas que asistiran\n");
    scanf("%d",&p);

    if(p<=0){
        printf("el numero de personas debe ser mayor a 0\n");
        return 1;
    }

    if(p>300){
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
    printf("Costo por platillo: %2f\n",cp);
    printf("Costo total del evento: %2f\n\n",ct);

    printf("Gracias por su compra, Esperamos a su regreso\n\n");

    return 0;
}