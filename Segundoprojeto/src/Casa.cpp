#include "Casa.h"

        Casa::Casa(){
        }

        void Casa::setNumPavimentos(int np){
            numPavimentos = np;
        }
        void Casa::setAreaTerreno(double art){
            areaTerreno = art;
        }
        void Casa::setAreaConstruida(double ac){
            areaConstruida = ac;
        }
        void Casa::setNumQuartos(int n){
            numQuartos = n;
        }

        int Casa::getNumPavimentos(){
            return numPavimentos;
        }
        double Casa::getAreaTerreno(){
            return areaTerreno;
        }
        double Casa::getAreaConstruida(){
            return areaConstruida;
        }
        int Casa::getNumQuartos(){
            return numQuartos;
        }

