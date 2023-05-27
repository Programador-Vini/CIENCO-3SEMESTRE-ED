#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    queue <string> fila;
    queue <string> aux;

    int opcao;
    string cliente;

    do
    {
        cout << "1. Inserir cliente na fila" << endl;
        cout << "2. Atender proximo cliente" << endl;
        cout << "3. Exibir fila de espera" << endl;
        cout << "4. Encerrar o programa" << endl;
        cout << "Opcao: ";
        cin >> opcao;

    switch(opcao)
    {
    case 1:
        cout << "Nome do cliente: ";
        cin >> cliente;
        fila.push(cliente);
        break;

    case 2:
        if(fila.empty())
        {
            cout << "Fila fazia" << endl;
        }
        else
        {
            cout << "Atendendo cliente: " << fila.front() << endl;
            fila.pop();
        }
        break;

    case 3:
        if(fila.empty())
        {
            cout << "Fila fazia" << endl;
        }
        else
        {
            cout << "Tamanho da fila de espera: " << fila.size() << endl;
            if(!fila.empty())
            {
                aux = fila;
            }
            while(!aux.empty())
            {
                cout << aux.front() << endl;
                aux.pop();
            }
        }
        break;
    }
    }while(opcao != 4);
}
