#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){

    ifstream arquivoE;

    string linha;

    arquivoE.open("ArquivoBas.txt");

    if(arquivoE.is_open()){

        while(getline(arquivoE,linha)){

            cout << linha << endl;
        }
            arquivoE.close();
    }else{
        cout << "Arquivo não aberto"<< endl;
    }

    return 0;
}
