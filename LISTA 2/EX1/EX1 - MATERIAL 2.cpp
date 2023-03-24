/*1. Escreva um programa em C++ que permita a leitura dos nomes de 10
pessoas e armazena os nomes lidos em um vetor. Após isto, o algoritmo
deve permitir a leitura de mais 1 nome qualquer de pessoa e depois
escrever a mensagem ACHEI, se o nome estiver entre os 10 nomes lidos
anteriormente (guardados no vetor), ou NÃO ACHEI caso contrário */

#include <iostream>
#include <string.h>

using namespace std;

#define PESSOAS 10

string hip;

void nomesIguais(string nomes[])
{
    int quant = 0;

    while(quant < PESSOAS)
    {
        if(nomes[quant] != hip)
        {
            cout << "Não encontrado" << endl;
        }
        else
        {
            cout << "Encontrado" << endl;
        }
        quant++;
    }
}
int main()
{
    string nomes[PESSOAS];
    int quant = 0;
    while(quant < PESSOAS)
    {
        cout << "Nome: ";
        cin >> nomes[quant];
        quant++;
    }

    cout << endl;
    cout << "Hipotese: ";
    cin >> hip;
    cout << endl;

    nomesIguais(nomes);
}
