// membuat sequential search

#include <iostream>  // Library untuk input-output standar
#include <vector>    // Library untuk menggunakan tipe data vector

using namespace std;

// Fungsi untuk melakukan pencarian berurutan (sequential search)
int sequential_search(vector<int> data, int target) {
    int count = 0;  // Variabel untuk menyimpan jumlah angka 4 yang ditemukan
    // Loop untuk setiap elemen dalam data
    for (int number : data) {
        // Mengecek apakah elemen tersebut adalah angka 4
        if (number == target) {
            count++;  // Jika ya, tambahkan satu ke jumlah angka 4 yang ditemukan
        }
    }
    return count;  // Mengembalikan jumlah angka 4 yang ditemukan
}

int main() {
    // Mendefinisikan vektor yang berisi data bilangan bulat
    vector<int> data = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int target = 4;  // Nilai yang ingin dicari dalam data

    // Memanggil fungsi sequential_search untuk mencari jumlah angka 4 dalam data
    int jumlah_angka_4 = sequential_search(data, target);

    // Menampilkan jumlah angka 4 yang ditemukan
    cout << "Jumlah angka 4 dalam data adalah: " << jumlah_angka_4 << endl;

    return 0;
}
