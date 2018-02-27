#include <iostream>
#include "FormatoHora.h"
int main() {                        //formato
    FormatoHora Hora1(11, 30, 10 );
    FormatoHora Hora2( 15, 40,10);

    FormatoHora hora_resultante = Hora1 + Hora2;
    FormatoHora hora_resultante_resta = Hora2 - Hora1;
    std::cout<<"Incremento de Hora:"<<"\n";
    std::cout<<hora_resultante.horas<<":"<<hora_resultante.minutos<<":"<<hora_resultante.segundos<<"\n";

    std::cout<<"Decremento de Hora"<<"\n";
    std::cout<<hora_resultante_resta.horas<<":"<<hora_resultante_resta.minutos<<":"<<hora_resultante_resta.segundos<<"\n";


    return 0;
}