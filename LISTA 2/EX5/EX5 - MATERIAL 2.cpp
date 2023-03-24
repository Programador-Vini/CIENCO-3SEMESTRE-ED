/*5. Faça um programa em C++ para ler um valor N qualquer (que será o
tamanho dos vetores). Após, ler dois vetores A e B (de tamanho N cada um)
e depois armazenar em um terceiro vetor Soma a soma dos elementos do
vetor A com os do vetor B (respeitando as mesmas posições) e escrever o
vetor Soma.*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    int vetorA[n];
    int vetorB[n];
    int vetorSoma[n];

    cout << "Tamanho: ";
    cin >> n;
    cout << endl;

    for(int i = 0; i < n; i++)
    {
        cout << "Vetor A: ";
        cin >> vetorA[i];
        cout << "Vetor B: ";
        cin >> vetorB[i];

        vetorSoma[i] = vetorA[i] + vetorB[i];
    }

    cout << endl;
    for(int i = 0; i < n; i++)
    {
        cout << vetorA[i] << " + " << vetorB[i] << " = " << vetorSoma[i] << endl;
    }
}
