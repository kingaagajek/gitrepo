/*
 * parzyste.cpp
 * program powinien wydrukować liczby parzytse z przedziału [0, 100]
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{

    int a;


    cin >> a;

    for (int i=0; a>i; a*a) {
        cout << a << " ";
    }
	return 0;
}

