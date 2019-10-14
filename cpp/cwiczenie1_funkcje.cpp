/*
 * zadanie_funkcje.cpp
 *
 */


#include <iostream>

using namespace std;

int staz = 1;
float zarobek = 1000;

void drukuj() {
    cout << "Pracujesz " << staz << " lat i zarabiasz " << zarobek << endl;
}

void awans(int &staz, float &zarobek) {
    staz = staz + 1;
    zarobek = zarobek * 1.1;
}

int main(int argc, char **argv)
{   int lata;
    cout << "Podaj staz w latach: " << endl;
    cin >> lata;
	awans(staz, zarobek);
    drukuj();

	return 0;
}
