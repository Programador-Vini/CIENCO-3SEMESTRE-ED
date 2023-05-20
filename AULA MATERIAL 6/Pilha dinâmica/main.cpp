#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <string> roupas;

    if(roupas.empty()){
        cout << "Pilha vazia" << endl;
    }

    roupas.push("calca azul");
    roupas.push("calca preta");
    roupas.push("camiseta branca");
    roupas.push("camiseta amarela");
    roupas.push("calca branca");
    roupas.push("bermuda preta");

    cout << "Tamanho da pilha: " << roupas.size() << endl;

    while(!roupas.empty()){
        cout << "Peca de roupa no topo: " << roupas.top() << endl;
        roupas.pop();
    }

    cout << endl;

    cout << "Tamanho da pilha: " << roupas.size() << endl;

    return 0;
}
