#include <stdio.h>

void primero();
void segundo();
void iguales();

int primnum;
int segnum;

int main() {

<<<<<<< HEAD
    printf("Dev- 1: Ingrese el primer numero: ");
=======
    printf("Dev-2: Ingrese el primer numero: ");
>>>>>>> Dev-2
    scanf("%d", &primnum);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &segnum);

    if (primnum > segnum) {
        primero();
    } else if (primnum < segnum) {
        segundo();
    } else {
        iguales();
    }

    return 0;
}

void primero() {
    printf("El primer numero es el mayor: %d\n", primnum);
}

void segundo() {
    printf("El segundo numero es el mayor: %d\n", segnum);
}

void iguales() {
    printf("Ambos numeros son iguales: %d\n", primnum);
}