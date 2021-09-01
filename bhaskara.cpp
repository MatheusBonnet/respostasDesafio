#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a = 0.0;
	float b = 0.0;
	float c = 0.0;
	float delta = 0.0;
	float resultado1 = 0.0;
	float resultado2 = 0.0;

    cout << "Insira o valor de a: ";
    cin >> a;

    cout << "Insira o valor de b: ";
    cin >> b;

    cout << "Insira o valor de c: ";
    cin >> c;

    if (a != 0){
    	
        delta = (b*b) - (4*a*c);

        if (delta<0){
        	
            cout << "Não tem raizes reais\n";
            
        }
        else if (delta==0){
        	
            resultado1 = (-b)/(2*a);
            
            cout << "Possui apenas uma raiz real: " << resultado1 << "\n";
            
        }else{
        	
            resultado1 = (-b - sqrt(delta))/(2*a);
            
            resultado2 = (-b + sqrt(delta))/(2*a);
            
            cout << "Raiz 1: " << resultado1 << "\n";
            
            cout << "Raiz 2: " << resultado2 << "\n";
        }
    }else{
    	
        cout <<"coificiente a e igual a 0, não é uma equação do segundo grau\n";
        
    }

}
