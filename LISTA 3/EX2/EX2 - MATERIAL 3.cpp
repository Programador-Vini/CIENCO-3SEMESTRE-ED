/*2. Suponha que você está desenvolvendo um programa para armazenar
informações sobre animais em um zoológico. Crie uma estrutura chamada
Animal que deve armazenar as seguintes informações sobre cada animal:
• Nome do animal (string)
• Espécie do animal (string)
• Idade do animal (int)
• Peso do animal em kg (float)
Em seguida, crie um typedef para uma lista de animais chamada ListaAnimais,
que deve ser um vetor de 10 elementos do tipo Animal.
Por fim, crie um programa que pede ao usuário para digitar os dados de 10
animais e armazena esses dados em uma variável do tipo ListaAnimais.
Ao final, o programa deve exibir os dados de cada um dos 10 animais na tela.*/

#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string>

using namespace std;

typedef struct
{
    string nome, especie;
    int idade;
    float peso;

}Animal;

typedef struct
{
   Animal lista;

}ListaAnimal;

int main()
{
   ListaAnimal registro[10];

   for(int i = 0; i < 10; i++)
   {
       cout << "Nome do animal: ";
       getline(cin, registro[i].lista.nome);
       cout << "Epecie do animal: ";
       getline(cin, registro[i].lista.especie);
       cout << "Idade do animal: ";
       cin >> registro[i].lista.idade;
       cout << "Peso do animal em kg: ";
       cin >> registro[i].lista.peso;

       cin.ignore();
   }

   system("CLS || CLEAR");

   cout << "Nome" << "\tEspecie" << "\tIdade" << "\tPeso em Kg" << endl;

   for(int i = 0; i < 10; i++)
   {
       cout << registro[i].lista.nome
        << "\t" << registro[i].lista.especie
        << "\t" << registro[i].lista.idade
        << "\t" << registro[i].lista.peso << endl;
   }
}
