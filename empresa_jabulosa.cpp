#include<iostream>

using namespace std;

int main(){
	
	int pretensao_salarial = 0;
	
	cout << "Qual sua pretencao salarial? \n";
	cin >> pretensao_salarial;
	
	if (pretensao_salarial < 1300){
		
		cout << "Em nossa empresa temos uma vaga como AUXILIAR que se encaixa na sua pretensao salarial de: " << pretensao_salarial<< " Reais";
		
	}else if (pretensao_salarial >= 1300 && pretensao_salarial<=2500){
		
		cout << "Em nossa empresa temos uma vaga como LIDER que se encaixa na sua pretensao salarial de: " << pretensao_salarial<< " Reais";
		 
	}else{
		cout << "Em nossa empresa nao temos nenhum cargo que se adapte a o salario solicitado";
	}

}
