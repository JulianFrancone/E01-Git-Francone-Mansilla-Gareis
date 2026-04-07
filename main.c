#include <stdio.h>

void primero();
void segundo();
void iguales();

extern int primnum;
extern int segnum;


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