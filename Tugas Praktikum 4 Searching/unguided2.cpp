// membuat program untuk menghitung huruf vokal 

#include <iostream> // Library untuk input-output standar
#include <string>   // Library untuk penggunaan tipe data string
#include <unordered_map> // Library untuk menggunakan struktur data unordered_map

using namespace std;

// Fungsi untuk menghitung jumlah huruf vokal dalam kalimat
unordered_map<char, int> count_vowels(string sentence) {
    unordered_map<char, int> vowel_count; // Inisialisasi jumlah huruf vokal
    int total_vowels = 0; // Inisialisasi jumlah total huruf vokal
    // Loop untuk setiap karakter dalam kalimat
    for (char& c : sentence) {
        // Mengecek apakah karakter adalah huruf vokal
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowel_count[c]++; // Jika huruf vokal, tambahkan satu ke jumlah vokal
            total_vowels++; // Tambahkan satu ke jumlah total huruf vokal
        }
    }
    // Simpan jumlah total huruf vokal ke dalam unordered_map dengan kunci '_'
    vowel_count['_'] = total_vowels;
    return vowel_count; // Mengembalikan jumlah huruf vokal
}

int main() {
    string kalimat; // Variabel untuk menyimpan kalimat yang dimasukkan pengguna
    // Meminta pengguna untuk memasukkan kalimat
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat); // Menggunakan getline untuk memasukkan kalimat dengan spasi

    // Memanggil fungsi count_vowels untuk menghitung jumlah huruf vokal dalam kalimat
    unordered_map<char, int> jumlah_vokal = count_vowels(kalimat);

    // Menampilkan jumlah huruf vokal yang telah dihitung
    cout << "Rincian jumlah huruf vokal dalam kalimat tersebut adalah:" << endl;
    for (const auto& pair : jumlah_vokal) {
        // Jika kunci adalah '_', cetak jumlah total huruf vokal
        if (pair.first == '_') {
            cout << "Total: " << pair.second << endl;
        } else {
            cout << "Huruf " << pair.first << " ada " << pair.second << endl;
        }
    }

    return 0;
}
