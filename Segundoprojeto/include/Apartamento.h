#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include"Imovel.h"

class Apartamento:public Imovel
{
    public:
        Apartamento();
        void setNumQuartos();
        void setPosicao();
        void setArea();
        void setVagasGaragem();
        void setCondominio();
        void setAndar();

        int getNumQuartos;
        std::string getPosicao;
        double getArea;
        int getVagasGaragem;
        double getCondominio;
        int getAndar;


    protected:
        int numQuartos;
        std::string posicao;
        double area;
        int vagasGaragem;
        double condominio;
        int andar;



};

#endif // APARTAMENTO_H
