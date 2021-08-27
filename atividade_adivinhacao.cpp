#include<iostream>

using namespace std;

int main(){
	int numero_pessoal = 0;
	int numero_certo = 4;

	while (numero_pessoal != numero_certo){
	
	cout << "insira um numero de 1 a 10: ";
	cin >> numero_pessoal;

	if (numero_pessoal == numero_certo){
		cout << "Parabens voce acertou";
	}
	else {
		cout << "Tente novamente, voce errou!!\n";
	}
	return 0;	
}
}
