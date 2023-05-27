#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    char opcao;
    string pais;
    string linha;
    fstream arquivo;

    arquivo.open("novoArquivo.txt", ios::out|ios::app);

    do
    {
        cout << "Qual o pais?: ";
        cin >> pais;
        arquivo << pais << endl;
        cout << "Deseja informar outro?: ";
        cin >> opcao;

        system("cls");
    }while(opcao == 'S' || opcao == 's');

    arquivo.close();

    arquivo.open("/novoArquivo.txt", ios::in);

    cout << "Conteudo do novo arquivo: \n";
    if(arquivo.is_open())
    {
        while(getline(arquivo, linha))
        {
            cout << linha << endl;
        }
        arquivo.close();
    }
    else
    {
        cout << "Impossivel abrir";
    }
}
