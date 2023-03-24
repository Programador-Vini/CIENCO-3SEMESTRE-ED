/*3. Ler um vetor A de 10 números. Após, ler mais um número e guardar em
uma variável X. Armazenar em um vetor M o resultado de cada
elemento de A multiplicado pelo valor X. Logo após, imprimir o vetor M.*/

#include <iostream>

using namespace std;

int main()
{
    int vetorA[10];
    int x;
    int vetorM[10];

    for(int i = 0; i < 10; i++)
    {
        cout << "Entre com os valores do vetor: ";
        cin >> vetorA[i];
    }

    cout << endl;
    cout << "Vetor A: ";

    for(int i = 0; i < 10; i++)
    {
        cout << vetorA[i] << " ";
    }

    cout << endl;

    cout << "Entre com o valor do multiplicador: ";
    cin >> x;
    cout << endl;

    cout << "Resultado do vetorM: ";
    for(int i = 0; i < 10; i++)
    {
        vetorM[i] = vetorA[i] * x;
        cout << vetorM[i] << " ";
    }
}
