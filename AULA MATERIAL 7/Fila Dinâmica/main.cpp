#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    queue <string> pessoas;

    pessoas.push("VINICIUS");
    pessoas.push("LUIS");
    pessoas.push("CARLOS");
    pessoas.push("CAIO");
    pessoas.push("RAYSSA");
    pessoas.push("JOSE");

    cout << "Tamanho da Fila: " << pessoas.size() << endl;
    cout << "Primeira pessoa " << pessoas.front() << endl;
    cout << "Ultima pessoa " << pessoas.back() << endl << endl;

    while(!pessoas.empty()){
        cout << "Primeira pessoa " << pessoas.front() << endl;
        pessoas.pop();
    }

    return 0;
}
