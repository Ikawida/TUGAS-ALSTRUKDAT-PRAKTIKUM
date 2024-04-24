// 1. Program menggunakan tipe data primitif minimal dua fungsi dan bebas.
#include <iostream>
using namespace std;

// Fungsi untuk menjumlahkan dua angka
int tambah(int a, int b) {
    return a + b;
}

// Fungsi untuk mengalikan dua angka
int kali(int a, int b) {
    return a * b;
}

int main() {
    // Variabel dengan tipe data primitif int
    int angka1 = 5;
    int angka2 = 3;

    // Memanggil fungsi tambah dan mencetak hasil
    cout << "Hasil penjumlahan: " << tambah(angka1, angka2) << endl;

    // Memanggil fungsi kali dan mencetak hasil
    cout << "Hasil perkalian: " << kali(angka1, angka2) << endl;

    return 0;
}