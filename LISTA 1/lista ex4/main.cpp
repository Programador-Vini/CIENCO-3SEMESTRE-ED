#include <iostream>

using namespace std;

int main()

/* 4. Construa um programa em C++ que calcule o novo sal�rio de um funcion�rio.
Considere que o funcion�rio dever� receber um reajuste de 15% caso seu
sal�rio seja menor que 1000. Se o sal�rio for maior ou igual a 1000, mas
menor ou igual a 1500, o reajuste deve ser de 10%. Caso o sal�rio seja maior
que 1500, o reajuste deve ser de 5%. */

{
    float salarioF,novoS,reajuste;

    cout << "Entre com o salario do funcioario: ";
    cin >> salarioF;

    if(salarioF < 1000)
    {
        reajuste = 0.15;
        novoS = salarioF * reajuste + salarioF;
        cout << novoS;
    }
    else if((salarioF >= 1000) && (salarioF <= 1500))
    {
        reajuste = 0.10;
        novoS = salarioF * reajuste + salarioF;
        cout << novoS;
    }
    else
    {
        reajuste = 0.5;
        novoS = salarioF * reajuste + salarioF;
        cout << novoS;
    }
}
