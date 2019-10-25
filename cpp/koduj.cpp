/*
 * znaki.cpp
 * znakiem kończącym tablicę znakową jest \0
 */


#include <iostream>

using namespace std;



void koduj(char tabzn[], int rozmiar) {
	for (int  i = 0; i < rozmiar; i++) {
		cout << (int)tabzn[i] << ", ";
	}
}

void dekoduj(int kod[], int rozmiar) {
	for (int  i = 0; i < rozmiar; i++) {
		cout << (char)kod[i] << " ";
	}
}

int main(int argc, char **argv)
{
<<<<<<< HEAD
	int rozmiar = 10;

	char napis[rozmiar] = "dziala?";
=======
	int rozmiar = 11;
	
	char napis[rozmiar] = "Ala ma kota";
>>>>>>> 2c4d7c347e4b9c57b465d78eecec84efef09a125
	int kod[rozmiar] = {65, 108, 97, 32, 109, 97, 32, 107, 111, 116, 97};

	koduj(napis, rozmiar);
	cout << endl;
	dekoduj(kod, rozmiar);


	return 0;
}

