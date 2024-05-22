// 2. Buatlah versi program Rekursif Tidak Langsung (Indirect Recursion) dari soal nomor 1 diatas!

#include <iostream>

using namespace std;

// Deklarasi fungsi
int functionA(int n);
int functionB(int n);

int main() {
    int num;
    
    // Meminta pengguna untuk memasukkan bilangan bulat positif
    cout << "Masukkan bilangan bulat positif: ";
    cin >> num;
    
    // Mengecek apakah input adalah bilangan bulat positif
    if (num < 0) {
        cout << "Input tidak valid. Silakan masukkan bilangan bulat positif." << endl;
    } else {
        // Menghitung dan mencetak hasil faktorial menggunakan rekursi tidak langsung
        int hasil = functionA(num);
        cout << "Faktorial dari " << num << " adalah: " << hasil << endl;
    }

    return 0;
}

// Fungsi A untuk rekursi tidak langsung
int functionA(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * functionB(n - 1);
    }
}

// Fungsi B untuk rekursi tidak langsung
int functionB(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * functionA(n - 1);
    }
}
