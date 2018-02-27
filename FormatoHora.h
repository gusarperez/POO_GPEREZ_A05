#ifndef POO_GPEREZ_A05_FORMATOHORA_H
#define POO_GPEREZ_A05_FORMATOHORA_H


class FormatoHora {
//Atributos de la clase FormatoHora.
friend FormatoHora operator +(const FormatoHora &Hi, const FormatoHora &Hf);
    friend FormatoHora operator -(const FormatoHora &Hi, const FormatoHora &Hf);

//Metodos de la clase FormatoHora.
public:
    FormatoHora(int hr, int mts, int sds);
    int horas;
    int minutos;
    int segundos;
};


#endif //POO_GPEREZ_A05_FORMATOHORA_H
