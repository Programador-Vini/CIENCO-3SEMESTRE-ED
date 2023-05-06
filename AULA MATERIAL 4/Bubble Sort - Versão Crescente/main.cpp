#include <iostream>

using namespace std;

void imprimeVetor(int x[])
{
    for(int i = 0; i <= 4; i++)
    {
        cout << i +1 << " numero: " << x[i] << endl;
    }
}

void bubbleSort3(int x[])
{
    int n = 1;
    int troca = 1;
    int aux = 0;
    while (n <= 5 && troca == 1)
    {
        troca = 0;
        for(int i = 0; i <= 3;i++)
        {
            if(x[i] > x[i + 1])
            {
                troca = 1;
                aux = x[i];
                x[i] = x[i +1];
                x[i + 1] = aux;
            }
        }
        n++;
    }
}

int main()
{

int x[5];

for(int i = 0; i <= 4; i++)
{
    cout << "Digite o numero" << endl;
    cin >> x[i];
}
bubbleSort3(x);
imprimeVetor(x);

return 0;

}
