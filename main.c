#include <stdio.h>

void primero();
void segundo();
void iguales();

int main() {
    if(primnum>segnum){
        primero();
    }
    else if(primnum<segnum){
        segundo();
    }
    else{
        iguales();
    }
    return 0;
}