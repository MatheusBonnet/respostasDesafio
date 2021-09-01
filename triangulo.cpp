#include <iostream>

using namespace std;


int main (){
	
	float base1 = 0;
	float base2 = 0;
	float altura1 = 0;
	float altura2 = 0;
	float resultado1 = 0;
	float resultado2 = 0;
	
	cout << "Entre com a base do primeiro triangulo: " << "\n";
	cin >> base1;
	cout << "Entre com a altura do primeiro triangulo: " << "\n";
	cin >> altura1;
	
	cout << "Entre com a base do segundo triangulo: " << "\n";
	cin >> base2;
	cout << "Entre com a altura do segundo triangulo: " << "\n";
	cin >> altura2;
	
	
	resultado1 = (base1 * altura1)/2;
	resultado2 = (base2 * altura2)/2;
	
	if(resultado1 > resultado2){
		
		cout << "O primeiro triangulo tem a area de :" << resultado1 << " e o segundo triangulo tem a area de: " << resultado2;
		cout << "\nSendo assim o primeiro triangulo e maior que o segundo";
		
	}
	else{
		
		cout << "O primeiro triangulo tem a area de :" << resultado1 << " e o segundo triangulo tem a area de: " << resultado2;
		cout << "\nSendo assim o segundo triangulo e maior que o primeiro";
		
	}
	
	return 0;
}
