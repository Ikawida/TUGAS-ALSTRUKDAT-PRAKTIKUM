// FUNGSI STRUCT
#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    // Anggota struct
    string nama;
    string nim;
    string jurusan;
};

int main() {
    // Membuat objek dari struct Mahasiswa
    Mahasiswa mahasiswa1 = {"Ika Wida", "2311110001", "Sains Data"};

    // Menampilkan informasi mahasiswa menggunakan anggota struct
    cout << "Nama: " << mahasiswa1.nama << ", NIM: " << mahasiswa1.nim << ", Jurusan: " << mahasiswa1.jurusan << endl;

    return 0;
}