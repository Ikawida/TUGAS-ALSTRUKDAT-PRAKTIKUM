// 2. Contoh program dari fungsi class dan struct
// fUNGSI CLASS
#include <iostream>
using namespace std;

class Kendaraan {
public:
    // Properti class
    string jenis;
    int roda;

    // Metode untuk menampilkan informasi kendaraan
    void info() {
        cout << "Jenis kendaraan: " << jenis << ", Jumlah roda: " << roda << endl;
    }
};

int main() {
    // Membuat objek dari class Kendaraan
    Kendaraan mobil;
    mobil.jenis = "Mobil";
    mobil.roda = 4;

    // Memanggil metode info untuk menampilkan informasi kendaraan
    mobil.info();

    return 0;
}