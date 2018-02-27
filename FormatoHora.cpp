#include "FormatoHora.h"
#include <cmath>

FormatoHora::FormatoHora(int hr, int mts, int sds) {
    this->horas = hr;
    this->minutos = mts;
    this->segundos = sds;
}
FormatoHora operator+ (const FormatoHora &Hi, const FormatoHora &Hf){
    int resultado_a=(Hf.segundos + Hi.segundos);
    int resultado_b=(Hf.minutos + Hi.minutos);
    int resultado_c=(Hf.horas + Hi.horas);
            if(0<resultado_a<60) {
               // resultado_a=Hi.segundos + Hf.segundos;
               // resultado_a = resultado_a - 60;
            }if (0<resultado_b<60){
                resultado_b=Hi.minutos +Hf.minutos;
                //resultado_b= resultado_b- 60;
        }
            if(0<resultado_c<60){

            }
    FormatoHora resultado= *new FormatoHora(resultado_c, resultado_b, resultado_a);
    return resultado;
}
    FormatoHora operator -(const FormatoHora &Hi, const FormatoHora &Hf){
        int resultado_a= fabs(Hf.segundos - Hi.segundos);
        int resultado_b= fabs(Hf.minutos - Hi.minutos);
        int resultado_c= fabs(Hf.horas- Hi.horas);
            if(resultado_a>=60){
                resultado_b++;
                resultado_a=resultado_a-60;
            }if(resultado_b>=60){
            resultado_c++;
            resultado_b=resultado_b-60;
        }
    FormatoHora resultado= *new FormatoHora(resultado_c, resultado_b, resultado_a);
        return  resultado;
    }