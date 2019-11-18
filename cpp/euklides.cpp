/*
 * euklides.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int a, b, i;
	a = b = i = 0;
	cout << "Podaj dwie liczby całkowite: " << endl;
	cin >> a >> b;
	while (a > 0) {
		i++;
		a = a % b;
		b = b - a;
	}
	cout << "NWD: " << b << endl;
	cout << "Powtórzeń: " << i << endl;
	return 0;
}

