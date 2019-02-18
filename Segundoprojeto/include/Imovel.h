#ifndef IMOVEL_H
#define IMOVEL_H
#include<string>

#define IMOVELV 1
#define IMOVELA 2

using namespace std;

class Imovel
{
public:
    Imovel();
    string getValor();
    int getTipoOferta();
    Endereco getEndereco();
    string getDescricao();

    void setValor();
    void setTipoOferta();
    void setEndereco();
    void setDescricao();

protected:
    double valor;
    int tipoOferta;
    Endereco endereco;


};

#endif // IMOVEL_H
