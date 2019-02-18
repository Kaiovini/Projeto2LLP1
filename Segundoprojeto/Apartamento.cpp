#include"Apartamento.h"

        Apartamento::Apartamento(){
        }

        void Apartamento::setNumQuartos(int n){
            numQuartos = n;
         }

        void Apartamento::setPosicao(std::string p){
            posicao = p;
         }

        void Apartamento::setArea(double a){
            area = a;
         }

        void Apartamento::setVagasGaragem(int v){

            vagasGaragem = v;
         }

        void Apartamento::setCondominio(double c){
            condominio = c;
         }
        void Apartamento::setAndar(int an){
            andar = an;
         }

        int Apartamento::getNumQuartos(){
            return numQuartos;
         }
        std::string Apartamento::getPosicao(){
            return posicao;
         }

        double Apartamento::getArea(){
            return area;
         }

        int Apartamento::getVagas(){
            return vagas;
         }

        double Apartamento::getCondominio(){
            return condominio;
         }

        int Apartamento::getAndar(){
            return andar;
         }
