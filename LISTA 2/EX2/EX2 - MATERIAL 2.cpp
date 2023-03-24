/*2. Escreva um programa em C++ que permita a leitura das notas de uma
turma de 20 alunos. Calcular a média da turma e contar quantos alunos
obtiveram nota acima desta média calculada. Escrever a média da turma
e o resultado da contagem.*/

#include <iostream>

using namespace std;

#define NOTAS 20

float mediaValores(int vet[], int tam)
{
    float soma = 0;
    for(int i = 0; i < NOTAS; i++)
    {
        soma = soma + vet[i];
    }
    return soma / tam;
}

int main()
{
    int vet[NOTAS], acimaMedia = 0;
    float media;

    for(int i = 0; i < NOTAS; i++)
    {
        cout << "Nota " << i + 1 << ": ";
        cin >> vet[i];
    }
    cout << endl;

    media = mediaValores(vet, NOTAS);

    cout << "Media :" << media << endl;

    for(int i = 0; i < NOTAS; i++)
    {
        if(vet[i] > media)
        {
            acimaMedia++;
        }
    }

    cout << "Acima da media: " << acimaMedia << endl;
    cout << "Abaixo da media " << NOTAS - acimaMedia;

    return 0;
}
