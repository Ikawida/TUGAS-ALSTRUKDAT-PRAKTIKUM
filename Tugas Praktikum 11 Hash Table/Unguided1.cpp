// 1. Implementasikan hash table untuk menyimpan data mahasiswa. Setiap mahasiswa memiliki NIM dan nilai. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan nilai. Dengan ketentuan : a. Setiap mahasiswa memiliki NIM dan nilai. b. Program memiliki tampilan pilihan menu berisi poin C. c. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan rentang nilai (80 – 90).

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Struktur data untuk setiap mahasiswa
struct Mahasiswa {
    string nim;
    int nilai;
};

// Struktur data untuk setiap node di dalam tabel hash
struct HashNode {
    Mahasiswa data;
    HashNode* next;
    HashNode(const Mahasiswa& data) : data(data), next(nullptr) {}
};

// Class hash table untuk menyimpan data mahasiswa
class HashTable {
private:
    static const int TABLE_SIZE = 10;
    vector<HashNode*> table[TABLE_SIZE];

    // Fungsi hash sederhana untuk menghasilkan indeks dari sebuah NIM
    int hashFunc(const string& nim) {
        int sum = 0;
        for (char c : nim) {
            sum += c;
        }
        return sum % TABLE_SIZE;
    }

public:
    // Menambahkan data mahasiswa ke dalam tabel hash
    void tambahData(const Mahasiswa& mahasiswa) {
        int index = hashFunc(mahasiswa.nim);
        HashNode* newNode = new HashNode(mahasiswa);
        newNode->next = table[index].empty() ? nullptr : table[index][0];
        table[index].clear();
        table[index].push_back(newNode);
    }

    // Menghapus data mahasiswa dari tabel hash berdasarkan NIM
    void hapusData(const string& nim) {
        int index = hashFunc(nim);
        for (HashNode* node : table[index]) {
            if (node->data.nim == nim) {
                delete node;
                table[index].clear();
                cout << "Data dengan NIM " << nim << " berhasil dihapus." << endl; // Tambah keterangan
                return;
            }
        }
        cout << "Data mahasiswa dengan NIM " << nim << " tidak ditemukan." << endl;
    }

    // Mencari data mahasiswa berdasarkan NIM
    Mahasiswa* cariByNIM(const string& nim) {
        int index = hashFunc(nim);
        for (HashNode* node : table[index]) {
            if (node->data.nim == nim) {
                return &node->data;
            }
        }
        return nullptr;
    }

    // Mencari data mahasiswa berdasarkan rentang nilai
    vector<Mahasiswa> cariByNilai(int minNilai, int maxNilai) {
        vector<Mahasiswa> hasil;
        for (int i = 0; i < TABLE_SIZE; ++i) {
            for (HashNode* node : table[i]) {
                if (node->data.nilai >= minNilai && node->data.nilai <= maxNilai) {
                    hasil.push_back(node->data);
                }
            }
        }
        return hasil;
    }
};

int main() {
    HashTable hashTable;

    // Menu
    cout << "Menu:\n";
    cout << "1. Tambah Data Mahasiswa\n";
    cout << "2. Hapus Data Mahasiswa\n";
    cout << "3. Cari Data Mahasiswa berdasarkan NIM\n";
    cout << "4. Cari Data Mahasiswa berdasarkan Rentang Nilai\n";
    cout << "0. Keluar\n";

    int pilihan;
    do {
        cout << "\nPilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                string nim;
                int nilai;
                cout << "Masukkan NIM: ";
                cin >> nim;
                cout << "Masukkan Nilai: ";
                cin >> nilai;
                Mahasiswa mahasiswa = {nim, nilai};
                hashTable.tambahData(mahasiswa);
                cout << "Data mahasiswa berhasil ditambahkan.\n";
                break;
            }
            case 2: {
                string nim;
                cout << "Masukkan NIM mahasiswa yang ingin dihapus: ";
                cin >> nim;
                hashTable.hapusData(nim);
                break;
            }
            case 3: {
                string nim;
                cout << "Masukkan NIM mahasiswa yang ingin dicari: ";
                cin >> nim;
                Mahasiswa* hasil = hashTable.cariByNIM(nim);
                if (hasil != nullptr) {
                    cout << "NIM: " << hasil->nim << ", Nilai: " << hasil->nilai << endl;
                } else {
                    cout << "Data mahasiswa tidak ditemukan.\n";
                }
                break;
            }
            case 4: {
                int minNilai, maxNilai;
                cout << "Masukkan rentang nilai (minimal dan maksimal): ";
                cin >> minNilai >> maxNilai;
                vector<Mahasiswa> hasil = hashTable.cariByNilai(minNilai, maxNilai);
                cout << "Hasil pencarian berdasarkan rentang nilai " << minNilai << " - " << maxNilai << ":\n";
                for (const Mahasiswa& mahasiswa : hasil) {
                    cout << "NIM: " << mahasiswa.nim << ", Nilai: " << mahasiswa.nilai << endl;
                }
                break;
            }
            case 0:
                cout << "Program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
                break;
        }
    } while (pilihan != 0);

    return 0;
}
