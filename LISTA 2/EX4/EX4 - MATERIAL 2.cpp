/*4. Fa�a um programa em C++ para ler 20 n�meros e armazenar em um vetor.
Ap�s a leitura total dos 20 n�meros, o algoritmo deve escrever esses 20
n�meros lidos na ordem inversa.*/

#include <iostream>

using namespace std;

int main()
{
    int vetorOrig[20];
    int vetorInvert[20];

    for(int i = 0; i < 20; i++)
    {
        cout << "Numero: ";
        cin >> vetorOrig[i];
    }

    cout << "Vetor original: ";
    for(int i = 0; i < 20; i++)
    {
       cout << vetorOrig[i] << " ";
    }

    cout << endl;

    cout << "Vetor invertido: ";
    for(int i = 19; i >= 0; i--)
    {
        vetorInvert[i] = vetorOrig[i];
        cout << vetorInvert[i] << " ";
    }
}
