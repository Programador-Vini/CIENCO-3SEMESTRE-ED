/*6. Faça um programa em C++ para ler e armazenar em um vetor a temperatura
média de todos os dias do ano. Calcular e escrever:
a) Menor temperatura do ano
b) Maior temperatura do ano
c) Temperatura média anual
d) O número de dias no ano em que a temperatura foi inferior a média
anual*/

#include <iostream>

using namespace std;

#define ANO 365

int main()
{
    float vetorTemp[ANO];
    float total = 0;
    float media = 0;
    float abaixo = 0;
    float menorTemp = 1000;
    float maiorTemp = -1000;

   for(int i = 0; i < ANO; i++)
    {
        cout << "Temperatura por dias: ";
        cin >> vetorTemp[i];
        total = total + vetorTemp[i];

        if(vetorTemp[i] < menorTemp)
        {
            menorTemp = vetorTemp[i];
        }
        if(vetorTemp[i] > maiorTemp)
        {
           maiorTemp = vetorTemp[i];
        }
    }

    media = total / ANO;

    cout << "Temperatura media do ano: " << media << endl;

    for(int i = 0; i < ANO; i++)
    {
        if(vetorTemp[i] < media)
        {
            abaixo++;
        }
    }
    cout << "Menor temperatura: " << menorTemp << endl;
    cout << "Maior temperatura: " << maiorTemp << endl;
    cout << "Dias de temperaturas abaixo da media: " << abaixo << endl;
}
