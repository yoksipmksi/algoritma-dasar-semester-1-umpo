//ctrl+alt+n to compile and run
//ctrl+alt+m to stop run

#include <iostream>
using namespace std;

int main() {
    int nim;
    string nama;
    double nilaiKeaktifan, nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;

    cout << "Masukkan NIM : "; cin >> nim;
    cin.ignore(); // biar getline tidak ke skip
    cout << "Masukkan Nama : "; cin >> nama;
    cout << "Masukkan Nilai Keaktifan : "; cin >> nilaiKeaktifan;
    cout << "Masukkan Nilai Tugas : "; cin >> nilaiTugas;
    cout << "Masukkan Nilai UTS : "; cin >> nilaiUTS;
    cout << "Masukkan Nilai UAS : "; cin >> nilaiUAS;

    nilaiAkhir = (nilaiKeaktifan * 0.30) + (nilaiTugas * 0.15) + (nilaiUTS * 0.25) + (nilaiUAS * 0.30);

    cout << "Nilai Akhir   : " << nilaiAkhir << endl;
    return 0;
}