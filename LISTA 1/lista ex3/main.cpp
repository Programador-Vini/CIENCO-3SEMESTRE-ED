#include <iostream>

using namespace std;

int main()

/* 3. Faça um programa em C++ que receba o número de horas trabalhadas e o
valor do salário mínimo. Calcule e mostre o salário a receber seguindo as
regras abaixo:
a. A hora trabalhada vale a metade do salário mínimo;
b. O salário bruto equivale ao número de horas trabalhadas multiplicado
pelo valor da hora trabalhada
c. O imposto equivale a 3% do salário bruto;
d. O salário a receber equivale ao salário bruto menos o imposto.
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

    cout << "O salario a receber é " << salarioL << endl;








}
