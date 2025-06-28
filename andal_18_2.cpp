#include<iostream>
using namespace std;

int honorLembur(int jamKerja);

int main() {
	int pegawaiHonorer;
	cout << "Masukkan Jumlah Pegawai honorer: ";
	cin >> pegawaiHonorer;
	
	int i = 0;
	int jamKerjaHonorer[pegawaiHonorer];
	
	while (i < pegawaiHonorer) {
		cout << "Masukkan Jam Kerja Pegawai " << (i+1) << ": ";
		cin >> jamKerjaHonorer[i];
		i++;
	} 
	cout << endl;
	for (i=0; i<pegawaiHonorer; i++) {
		cout << "Honor yang didapat Pegawai Honorer " << (i+1) << " = ";
		cout << honorLembur(jamKerjaHonorer[i]) << endl;
	}
	return 0;
}

int honorLembur(int jamKerja) {
	int honorHarian = 15000;
	int lembur = 5000;
	int totalHonor;
	int totalJamLembur;
	
	if (jamKerja > 8) {
		totalJamLembur = jamKerja - 8;
		totalHonor = (totalJamLembur * lembur ) + honorHarian;
		return totalHonor;
	} else {
		totalHonor = honorHarian;
		return totalHonor;
	}
}










