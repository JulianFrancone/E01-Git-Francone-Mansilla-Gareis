#include <stdio.h>
void primero();
void segundo();
void iguales();

extern int prinum;
 extern int segnum;
void primero(){

    printf("El primer numero es el mayor:%d\n",primnum);
    
}
void segundo(){
   
    printf("El segundo numero es el mayor:%d\n", segnum);
   
}
void iguales(){
   
    printf("Ambos numeros son iguales:%d\n",primnum);
    
}

int main() {

    return 0;
}