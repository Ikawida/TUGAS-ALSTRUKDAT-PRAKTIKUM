// Soal Unguided 2

#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Fungsi untuk membalikkan kalimat menggunakan stack
string reverseSentence(string sentence) {
    stack<char> charStack; // Membuat objek stack untuk menyimpan karakter

    // Memasukkan setiap karakter ke dalam stack
    for (char c : sentence) {
        charStack.push(c);
    }

    // Membangun ulang kalimat terbalik dari stack
    string reversedSentence = "";
    while (!charStack.empty()) {
        reversedSentence += charStack.top(); // Mengambil karakter dari atas stack
        charStack.pop(); // Menghapus karakter dari stack
    }

    return reversedSentence;
}

// Fungsi utama
int main() {
    string inputSentence;
    cout << "Masukkan kalimat: ";
    getline(cin, inputSentence); // Menggunakan getline untuk membaca seluruh kalimat

    // Memanggil fungsi reverseSentence untuk membalikkan kalimat
    string reversed = reverseSentence(inputSentence);

    // Menampilkan hasil pembalikan
    cout << "Hasil pembalikan: " << reversed << endl;

    return 0;
}
