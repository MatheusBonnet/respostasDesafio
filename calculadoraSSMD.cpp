#include <iostream>

using namespace std;

int main (){
	
	int equacao = 0;
	float resultado = 0;
	float numero_escolhido1 = 0;
	float numero_escolhido2 = 0;
	
	cout << "Escolha uma das operacoes a baixo:\nSoma tecle 1\nSubtracao tecle 2\nMultiplicacao tecle 3\nDivisao tecle 4\n";
	cin >> equacao;
	
	cout << "Entre com o primeiro numero: ";
	cin >> numero_escolhido1;
	cout << "Entre com o segundo numero: ";
	cin >> numero_escolhido2;
	
	if (equacao ==  1){
		resultado = numero_escolhido1 + numero_escolhido2;
		cout <<"A soma dos numeros digitados e igual a: ";
	}
	
	if (equacao ==  2){
		resultado = numero_escolhido1 - numero_escolhido2;
		cout <<"A subtracao dos numeros digitados e igual a: ";
	}
	if (equacao ==  3){
		resultado = numero_escolhido1 * numero_escolhido2;
		cout <<"A multiplicacao dos numeros digitados e igual a: ";
	}
	if (equacao ==  4){
		resultado = numero_escolhido1 / numero_escolhido2;
		cout <<"A divisao dos numeros digitados e igual a: " ;
	}
	
	if(resultado < 0){
		resultado = resultado * -1;
	}
	cout << resultado;
	
	return 0;
}
