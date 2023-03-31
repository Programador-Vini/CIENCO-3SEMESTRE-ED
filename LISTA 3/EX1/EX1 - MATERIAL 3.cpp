/*1. Crie uma estrutura chamada pessoa que seja capaz de
armazenar o nome, o endereço, o CPF e a idade de 5
pessoas.*/

#include <iostream>
#include <cstdlib>
#include <string>


using namespace std;

struct PESSOA
{
    string nome;
    string endereco;
    string cpf;
    int idade;
};

int main()
{
    PESSOA pessoas[5];

  for(int i = 0; i < 5; i++)
  {
      cout << "Entre com o nome " << i + 1 << ": ";
      getline(cin, pessoas[i].nome);
      cout << "Entre com o endereço " << i + 1 << ": ";
      getline(cin, pessoas[i].endereco);
      cout << "Entre com o CPF " << i + 1 << ": ";
      getline(cin, pessoas[i].cpf);
      cout << "Entre com a idade " << i + 1 << ": ";
      cin >> pessoas[i].idade;
      cout << "============================" << endl;

      cin.ignore();
  }
  cout << endl;

    cout << "Dados das pessoas: ";
    cout << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << "Nome: " << pessoas[i].nome << endl;
        cout << "Endereço: " << pessoas[i].endereco << endl;
        cout << "CPF: " << pessoas[i].cpf << endl;
        cout << "Idade: " << pessoas[i].idade << endl;
    }

    cout << endl;
}
