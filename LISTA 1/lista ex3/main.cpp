#include <iostream>

using namespace std;

int main()

/* 3. Fa�a um programa em C++ que receba o n�mero de horas trabalhadas e o
valor do sal�rio m�nimo. Calcule e mostre o sal�rio a receber seguindo as
regras abaixo:
a. A hora trabalhada vale a metade do sal�rio m�nimo;
b. O sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado
pelo valor da hora trabalhada
c. O imposto equivale a 3% do sal�rio bruto;
d. O sal�rio a receber equivale ao sal�rio bruto menos o imposto.
*/

{
    float numeroH,valorH,salarioM,salarioB,imposto,salarioL;

    cout << "Entre com o valor do salario minimo: ";
    cin >> salarioM;
    cout << "Entre com o valor de horas trabalhadas: ";
    cin >> numeroH;

    valorH = salarioM / 2;
    salarioB = numeroH * valorH;
    imposto = salarioB * 3/100;
    salarioL = salarioB - imposto;

    cout << "O salario a receber � " << salarioL << endl;








}
