#include <iostream>
using namespace std;

// Definisi struktur Mahasiswa
struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
};

int main() {
    Mahasiswa mhs1;

    mhs1.nama = "Ani";
    mhs1.umur = 19;
    mhs1.ipk = 3.85;

    cout << "Data Mahasiswa:\n";
    cout << "Nama  : " << mhs1.nama << endl;
    cout << "Umur  : " << mhs1.umur << " tahun" << endl;
    cout << "IPK   : " << mhs1.ipk << endl;

    return 0;
}

