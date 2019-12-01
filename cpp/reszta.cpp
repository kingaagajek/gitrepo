/*
 * reszta.cpp
 */


#include <iostream>
using  namespace std;

int nominaly[100];
int liczbaNominalow;

void wczytajNominaly() {
	cout << "Podaj liczbę nominałów: ";
	cin >> liczbaNominalow;

	cout << "Podaj nominały w kolejności malejącej: " << endl;
	int i = 0;
	int nominal = 0;
	cin >> nominal;
	nominaly[i] = nominal;
	i++;
	while (i < liczbaNominalow) {
		cin >> nominal;
		if (nominal > nominaly[i-1]) {
			cout << "Nominał większy od poprzedniego!" << endl;
			continue;
		}
		nominaly[i] = nominal;
		i++;
	};
	//for(int i = 0; i < liczbaNominalow; i++) {
		//cin >> nominaly[i];
	//}
	for(int i = 0; i < liczbaNominalow; i++) {
		cout << nominaly[i] << " ";
	}
	cout << endl;
}

int znajdzReszte(int reszta) {
	cout << "Wypłacone nominały: " << endl;
	int aktualnyNominal = 0;
	int suma = 0;

	while (reszta > 0 && aktualnyNominal < liczbaNominalow) {
		cout << "reszta = " << reszta << endl;
		if (reszta > aktualnyNominal)
		//znajdź największy dostępny nominał mniejszy od reszty;
            cout << "aktualny nominał: " << nominaly[aktualnyNominal] << endl;
            int ile = reszta / aktualnyNominal;
            if (ile) {
                suma += ile * aktualnyNominal;
                reszta = reszta - ile * aktualnyNominal;
            }
		// oblicz wymaganą ilość nominałów
		// pomniejsz resztę
		//brak nominalow do wydanie
	}
	if (reszta > 0)
		cout << "Brak nominałów do wydania kwoty" << reszta << endl;

}
// [50, 50, 20, 20, 10, 10, 5, 5, 5, 1]

int main(int argc, char **argv)
{
	wczytajNominaly();
	int cena;
	int wplata;
	cout << "Podaj cenę: ";
	cin >> cena;

	do { //pętla blokująca
		cout << "Podaj wpłatę: ";
		cin >> wplata;
	} while (wplata < cena);

	znajdzReszte(wplata - cena);

	return 0;
}

/*R = 69;
69 % 50 = 1
1) R: 60 - 50 * (69 % 50) = 19
2) R: 19 - 10 * (19 % 10) = 9
3) R: 9 - 5 * (9 % 5) = 4
4) R: 4 - 2 * (4 % 2) = 0 */

