#include <iostream>
#include <stdio.h>
using namespace std;

struct tarjeta{
    char *cara;
    char *pie;
};

int main(){
    struct tarjeta estructura;
    struct tarjeta *ptrEstructura;

    estructura.cara = "Redonda";
    estructura.pie = "Ancho";

    ptrEstructura = &estructura;

    cout<<estructura.cara<<" y "<<estructura.pie
        <<"\n"<<ptrEstructura->cara<<" y "<<ptrEstructura->pie
        <<"\n"<<(*ptrEstructura).cara<<" y "<<(*ptrEstructura).pie;

    return 0;
}