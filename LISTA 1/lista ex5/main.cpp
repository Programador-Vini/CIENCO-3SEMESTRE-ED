#include <iostream>

using namespace std;

int main()

/* 5. Construa um programa em C++ que calcule e apresente quanto deve ser
pago por um produto considerando a leitura do preço de etiqueta (PE) e o
código da condição de pagamento (CP). */

{
    float PE,valor;
    char CP;

    cout << "Preço da etiqueta: ";
    cin >> PE;
    cout << "Escolha a forma de pagamento: ";
    cin >> CP;

    switch(CP)
    {
        case '1':
        valor = PE - (PE * 0.10);
        cout << "Valor a pagar: " << valor;
              break;

        case '2':
            valor = PE - (PE * 0.05);
            cout << "Valor a pagar: " << valor;
            break;

        case '3':
            valor = PE / 2;
            cout << "Valor a pagar: " << valor;
            break;

        case '4':
            valor =(PE + (PE * 0.10)) / 3;


            cout << "Valor a pagar: " << valor;
            break;

        default:
            cout << "Código inexistente" << endl;
            break;
    }
    return 0;
}
