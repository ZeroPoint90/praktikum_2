#include <iostream>

using namespace std;

int main() {
    int nT, nUTS, nUAS;
    string nama, NIM;
    double nA;

    cout << "===========================================" << endl;
    cout << "Kalkulator Menghitung Nilai Akhir mahasiswa" << endl;
    cout << "===========================================" << endl;

    cout << "Masukkan Nama Mahasiswa: ";
    cin >> nama;

    cout << "Masukkan NIM Mahasiswa: ";
    cin >> NIM;

    cout << "Masukkan Nilai Tugas: ";
    cin >> nT;

    cout << "Masukkan Nilai UTS: ";
    cin >> nUTS;

    cout << "Masukkan Nilai UAS: ";
    cin >> nUAS;

    nA = (0.3 * nT) + (0.3 * nUTS) + (0.4 * nUAS);

    cout << "===========================================" << endl;
    cout << "Nilai Akhir Mahasiswa" << endl;
    cout << "===========================================" << endl;
    cout << "Nama: " << nama << endl;
    cout << "NIM: " << NIM << endl;
    cout << "Nilai Tugas: " << nT << endl;
    cout << "Nilai UTS: " << nUTS << endl; 
    cout << "Nilai UAS: " << nUAS << endl;
    cout << "Nilai Akhir: " << nA << endl;

    return 0;
}