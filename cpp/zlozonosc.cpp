/*
 * zlozonosc.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int n = 5;
	int tb[n] = {3, 3, 8, 10000, 9};
	//int i = 0;
	int x = 8;
	for (int i = 0; i < n; i++) {
		if (tb[i] == x) {
			cout << i;
			return 0;
		}
	}
	cout << -1;
	
	return 0;
}

