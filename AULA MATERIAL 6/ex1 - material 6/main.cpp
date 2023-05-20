#include <iostream>
#include <stack>

using namespace std;

void mostrarPilha(stack <int> pilha)
{
    if(pilha.empty())
    {
        cout << "A pilha esta vazia." << endl;
        return;
    }

    cout << "Elemento da pilha" << endl;
    while(!pilha.empty())
    {
        cout << pilha.top() << " ";
        pilha.pop();
    }
    cout << endl;
}

int main()
{
    stack <int> pilha;
    int opcao, elemento;

    do
    {
        cout << "Escolha uma opcao: " << endl;
        cout << "1. Inserir elemento" << endl;
        cout << "2. Remover elemento do topo" << endl;
        cout << "3. Verificar elemento do topo" << endl;
        cout << "4. Verificar se a pilha esta vazia" << endl;
        cout << "5. Exibir tamanho da pilha" << endl;
        cout << "0. Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;

        switch(opcao)
        {
        case 1:
                cout << "Digite um elemento: ";
                cin >> elemento;
                pilha.push(elemento);
                break;

        case 2:
                if(pilha.empty())
                {
                    cout << "Pilha vazia" << endl;
                }
                else
                {
                    pilha.top();
                    pilha.pop();
                }
                break;

        case 3:
                cout << "Elemento do topo: " << pilha.top() << endl;
                break;

        case 4:
                if(pilha.empty())
                {
                    cout << "Pilha vazia" << endl;
                }
                else
                {
                    cout << "A pilha nao esta vazia" << endl;
                }
                break;

        case 5:
               cout << "Tamanho da pilha: " << pilha.size();
               break;

        case 0:
               cout << "Encerrado";
               break;

        default:

            cout << "Opcao invalida";
            break;
        }
        cout << endl;
    }

    while(opcao != 0);

    return 0;
}
