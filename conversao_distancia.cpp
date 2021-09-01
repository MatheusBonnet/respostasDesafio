#include<iostream>

using namespace std;

int main(){
	
	float distancia_metros    = 0;
	float distancia_polegadas = 0;
	float distancia_pes       = 0;
	float distancia_jardas    = 0;
	float distancia_milhas    = 0;
	float distancia_cm        = 0;
	float distancia_km        = 0;
	
	cout << "Entre com uma distancia em metros: ";
	cin >> distancia_metros;
	
	distancia_polegadas = distancia_metros * 39.37;
	distancia_pes = distancia_metros       * 3.281;
	distancia_jardas = distancia_metros    * 1.094;
	distancia_milhas = distancia_metros    /  1609;
	distancia_cm = distancia_metros        *   100;
	distancia_km = distancia_metros        /  1000;
	
	cout << "\n Em polegadas fica: " << distancia_polegadas  << "\n Em pes fica: " << distancia_pes  << "\n Em jardas fica: " << distancia_jardas  << "\n Em milhas fica fica: " << distancia_milhas  << "\n Em cm fica: " << distancia_cm  << "\n Em km fica: " << distancia_km;
	return 0;
}
