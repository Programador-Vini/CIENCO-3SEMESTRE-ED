#include <iostream>

using namespace std;

int main()

/*1. Elabore um programa em C++ que solicite o peso e a altura de uma determinada pessoa. Após a digitação,
 exibir se esta pessoa está ou não com seu peso ideal.*/

{
    float peso, altura, imc;

    cout << "Entre com o peso de Vini:";
    cin >> peso;
    cout << "Entre com a altura de Vini:";
    cin >> altura;

    imc = (peso / (altura * altura));

    if(imc < 20)
    {
        cout << "Vini esta abaixo do peso";
    }
    else if(imc < 25)
    {
        cout << "Vini esta no peso ideal";
    }
    else
    {
        cout << "Vini esta acima do peso";
    }
}
