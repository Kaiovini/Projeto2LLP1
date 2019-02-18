#ifndef CASA_H
#define CASA_H
#include"Imovel.h"


class Casa:public Imovel
{
    public:

    Casa();
    void setAreaTerreno(int);
    void setAreaConstruida(double);
    void setNumQuartos(double);
    void setNumPavimentos(int);

    int getNumPavimentos();
    double getAreaTerreno();
    double getAreaConstruida();
    int getNumQuartos();


    protected:

    int numPavimentos;
    double areaTerreno;
    double areaConstruida;
    int numQuartos;

};

#endif // CASA_H
