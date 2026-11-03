#include <stdio.h>

int main() {
    int n;
    int costo = 0;
    int acumulado = 0;

    printf("=== CONSULTORIO DR. LORENZO T. MATA LOZANO ===\n");
    printf("Numero de cita del paciente: ");
    scanf("%d", &n);

    if (n <= 3) {
        costo = 200;
        acumulado = n * 200;
    }
    else if (n <= 5) {
        costo = 150;
        acumulado = 600 + (n - 3) * 150;
    }
    else if (n <= 8) {
        costo = 100;
        acumulado = 900 + (n - 5) * 100;
    }
    else {
        costo = 50;
        acumulado = 1200 + (n - 8) * 50;
    }

    printf("\n--- RESULTADO ---\n");
    printf("a) Cuanto pagara por la cita: $%d\n", costo);
    printf("b) Monto total pagado por el tratamiento: $%d\n", acumulado);

    return 0;
}