#include <iostream>
#include <string>
using namespace std;

class manusia{
	public:
		string kata(){
			string kata = "Hallo, Selamat Malam...\n";
			return kata;
		}
};

class mahasigma: public manusia{
	public:
		string kata2(){
			string kata = "Sekarang udah pagii";
			return kata;
		}
};

int main() {
	mahasigma m;
	cout << "memanggil dari class induk = " << m.kata();
	cout << "memanggil dari class anak = " << m.kata2();
	
	return 0;
	
}
