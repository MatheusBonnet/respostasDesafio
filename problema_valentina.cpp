#include <iostream>

using namespace std;


int main (){
	
	int entrada1 = 0;
	int entrada2 = 0;
	int entrada3 = 0;
	
	cout << "Entre com o primeiro numero: ";
	cin >> entrada1;
	
	cout << "Entre com o numero que você acha que seria divisivel por " << entrada1 << "\n";
	cin >> entrada2;
	
	cout << "Entre com o segundo numero que você acha que seria divisivel por " << entrada1 << "\n";
	cin >> entrada3;
	
	if (entrada1 % entrada2 == 0 && entrada1 % entrada2 == 0 ){
		
		cout << "ambos os numeros sao divisiveis";
		
	}
	else{
	
		cout << "Tente novamente";
		
	}
	
	return 0;
	
}
