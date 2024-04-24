// 3. Program menggunakan fungsi map
#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> mahasiswa;

    mahasiswa[101] = "Joni";
    mahasiswa[102] = "Ayu";
    mahasiswa[103] = "Budi";

    std::cout << "Informasi Mahasiswa:\n";
    for (const auto& pair : mahasiswa) {
        std::cout << "NIM: " << pair.first << ", Nama: " << pair.second << std::endl;
    }

    return 0;
}