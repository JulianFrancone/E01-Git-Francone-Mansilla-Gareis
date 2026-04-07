#include <stdio.h>

void primero();
void segundo();
void iguales();

int primnum;
int segnum;

int main() {

    printf("Ingrese el primer numero: ");
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