// 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    // Meminta pengguna untuk memasukkan data array
    string data_array;
    cout << "Masukkan data array (pisahkan angka dengan spasi): ";
    getline(cin, data_array);

    // Menggunakan stringstream untuk memisahkan string menjadi angka
    stringstream ss(data_array);
    int angka;
    vector<int> data_list;
    while (ss >> angka) {
        data_list.push_back(angka);
    }

    // Membuat vector untuk menyimpan angka genap dan ganjil
    vector<int> genap;
    vector<int> ganjil;

    // Memisahkan angka genap dan ganjil
    for (int angka : data_list) {
        if (angka % 2 == 0) {
            genap.push_back(angka);
        } else {
            ganjil.push_back(angka);
        }
    }

    // Menampilkan output
    cout << "Data Array: ";
    for (int angka : data_list) {
        cout << angka << " ";
    }
    cout << endl;

    cout << "Nomor Genap: ";
    for (int angka : genap) {
        cout << angka << " ";
    }
    cout << endl;

    cout << "Nomor Ganjil: ";
    for (int angka : ganjil) {
        cout << angka << " ";
    }
    cout << endl;

    return 0;
}