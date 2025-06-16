#include <iostream>
#include <string.h>

using namespace std;

main () {
	int n ;
	cout << "Masukkan Bilangan : ";
	cin >> n; 
	
	if ( n % 2 == 0) {
		cout << "Adalah bilangan genap";
	} 
	else {
		cout << "Adalah bilangan ganjil";
	}
	return 0;
}
