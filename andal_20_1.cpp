#include <iostream>
using namespace std;

class Kalkulator{
	public:
	int perkalian(int a, int b) {
		return a * b;
	}
	double perkalian(double a, double b){
		return a*b;
	}
};

int main() {
	Kalkulator obj;
	cout << "hasil perkalian adalah = " <<  obj.perkalian(10.5,12.5) <<endl;
	cout << "hasil perkalian adalah = " << obj.perkalian(12,2) <<endl;
	return 0;
}
	
