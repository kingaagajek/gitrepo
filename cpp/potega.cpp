/*
 * silnia.cpp
 */


#include <iostream>
using namespace std;

// x0 = 1 dla x=/0
// x1 = x
// xn = x * ... * x(n-czynnikow)

float potega_it(float x, int n) {
	 float potega = 1;
	for (int i=0; i < n; i++){
		potega = potega * x;
	}
	return potega;
}

// x0 = 1 dla x=/0
// xn = x(n-1)* x, n > 0

float potega_re(float x, int n){
	if (n == 0)
		return 1;
	else
		return potega_re(x, n-1) * x;
}

int main(int argc, char **argv)
{
	float x; //podstawa
	int n; //wykladnik
	cout << "Podaj podstawe: " << endl;
	cin >> x;
	cout << "Podaj wykladnik: " << endl;
	cin >> n;
	cout << "Potega: " << potega_it(x, n) << endl;
	cout << "Potega: " << potega_re(x, n) << endl;
	return 0;
}
