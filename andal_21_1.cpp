#include <iostream>
using namespace std;

class nama_mahasiswa{
	private:
		string nama = "Reinaldi Alimsyah";
		
	public:
		string get_name() {
			string n;
			n = nama;
			return n;
		}
};

int main() {
	nama_mahasiswa m;
	cout << "Contoh Enkapsulasi = " << m.get_name();
	
	return 0;	
}
