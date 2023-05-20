#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <int> num;

    int elemento;

    while(elemento != 0)
    {
        cout << "Digite: ";
        cin >> elemento;
        if(elemento != 0)
        {
           num.push(elemento);
        }
    }

    cout << "Numeros na ordem inversa ";

    while(!num.empty())
    {
        cout << num.top() << " ";
        num.pop();
    }
}
