#include <stdio.h>
void primero();
void segundo();
void iguales();

extern int primnum;
 extern int segnum;
void primero(){

    printf("El primer numero es el mayor:%d\n",primnum);//y asi debe ser
    
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