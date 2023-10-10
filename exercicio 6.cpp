#include <iostream>
#include <math.h>

using namespace std; 

int main (){
    float a;
    float b;

    cout << "Informe o valor de a:" << endl;
    cin >> a;
    cout << "Informe o valor de b:" << endl; 
    cin >> b;

    cout << "Soma =" << a+b << endl;
    cout << "Subtracao =" << a-b << endl;
    cout << "Multiplicacao =" << a*b << endl;
    cout << "Divisao =" << a/b << endl;
    cout << "Modulo =" << fmod(a,b) << endl;

    return 0;
}