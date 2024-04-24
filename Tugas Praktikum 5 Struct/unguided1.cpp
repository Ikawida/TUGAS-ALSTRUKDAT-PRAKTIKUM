// UNGUIDED 1
#include <iostream>
#include <string>

using namespace std;

// Mendefinisikan struktur buku
struct Buku {
    string judulBuku[5];
    string pengarang[5];
    string penerbit[5];
    int tebalHalaman[5];
    int hargaBuku[5];
};

int main() {
    Buku favorit;

    // Mengisi data ke dalam variabel favorit
    for (int i = 0; i < 5; ++i) {
        cout << "Masukkan informasi buku ke-" << i+1 << ":" << endl;
        cout << "Judul Buku: ";
        getline(cin, favorit.judulBuku[i]);
        cout << "Pengarang: ";
        getline(cin, favorit.pengarang[i]);
        cout << "Penerbit: ";
        getline(cin, favorit.penerbit[i]);
        cout << "Tebal Halaman: ";
        cin >> favorit.tebalHalaman[i];
        cout << "Harga Buku: Rp ";
        cin >> favorit.hargaBuku[i];
        cin.ignore(); // Membersihkan newline character dari buffer input
    }

    // Menampilkan informasi buku favorit
    cout << "\nInformasi buku favorit:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Buku ke-" << i+1 << ":" << endl;
        cout << "Judul Buku : " << favorit.judulBuku[i] << endl;
        cout << "Pengarang : " << favorit.pengarang[i] << endl;
        cout << "Penerbit : " << favorit.penerbit[i] << endl;
        cout << "Tebal Halaman: " << favorit.tebalHalaman[i] << " halaman" << endl;
        cout << "Harga Buku : Rp " << favorit.hargaBuku[i] << endl << endl;
    }

    return 0;
}
