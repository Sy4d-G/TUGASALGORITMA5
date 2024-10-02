#include <iostream>
using namespace std;

// Fungsi untuk menghitung gaji pokok
int pokok(int jam_kerja) {
    int gaji_per_jam = 7500;
    if (jam_kerja <= 8)
        return jam_kerja * gaji_per_jam;
    else
        return 8 * gaji_per_jam;
}

// Fungsi untuk menghitung gaji lembur
int lembur(int jam_kerja) {
    int gaji_per_jam = 7500;
    if (jam_kerja > 8) {
        int jam_lembur = jam_kerja - 8;
        return jam_lembur * (gaji_per_jam * 1.5);
    } else {
        return 0;
    }
}

// Fungsi untuk menghitung uang makan
int makan(int jam_kerja) {
    if (jam_kerja >= 9)
        return 10000;
    else
        return 0;
}

// Fungsi untuk menghitung uang transport lembur
int transport(int jam_kerja) {
    if (jam_kerja >= 10)
        return 13000;
    else
        return 0;
}

// Fungsi utama
int main() {
    string nip, nama;
    int jam_kerja;

    // Input NIP, Nama, dan Jumlah jam kerja
    cout << "Masukkan NIP: ";
    cin >> nip;
    cout << "Masukkan Nama: ";
    cin.ignore();  // Mengabaikan karakter newline
    getline(cin, nama);
    cout << "Masukkan jumlah jam kerja: ";
    cin >> jam_kerja;

    // Hitung gaji pokok, lembur, uang makan, dan transport lembur
    int gaji_pokok = pokok(jam_kerja);
    int gaji_lembur = lembur(jam_kerja);
    int uang_makan = makan(jam_kerja);
    int uang_transport = transport(jam_kerja);

    // Output hasil perhitungan
    cout << "\n--- Rincian Gaji ---" << endl;
    cout << "NIP: " << nip << endl;
    cout << "Nama: " << nama << endl;
    cout << "Gaji Pokok: Rp. " << gaji_pokok << endl;
    cout << "Lembur: Rp. " << gaji_lembur << endl;
    cout << "Uang Makan: Rp. " << uang_makan << endl;
    cout << "Uang Transport: Rp. " << uang_transport << endl;
    cout << "Total Gaji: Rp. " << gaji_pokok + gaji_lembur + uang_makan + uang_transport << endl;

    return 0;
}
