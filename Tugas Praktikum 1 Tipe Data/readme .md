# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>

<p align="center">Nama: Ika Wida Nuragustin</p>
<p align="center">NIM: 2311110001</p>
<p align="center">Kelas: S1SD-04A</p>

## Dasar Teori

Tipe data adalah adalah sebuah pengklasifikasian data berdasarkan jenis data tersebut. Tipe data dibutuhkan agar kompiler dapat mengetahui bagaimana sebuah data akan digunakan. Adapun tipe data yang akan dipelajari, sebagai berikut :

### 1. Tipe Data Primitif 

Tipe data primitif merupakan tipe data dasar yang digunakan untuk menyimpan nilai sederhana dan tidak kompleks. Dalam pemrograman, tipe data primitif memiliki peran penting karena mereka membentuk dasar dari operasi dan manipulasi data [1]. Contoh tipe data primitif adalah:

#### - Integer 

Integer merupakan tipe data numerik yang digunakan apabila tidak berurusan dengan pecahan atau bilangan desimal.

#### - Float

Float digunakan untuk menangani bilangan decimal atau perhitungan yang lebih detail dibanding integer.

#### - Char

Char adalah karakter tunggal yang didefinisikan dengan diawali dan diakhiri dengan tanda ' ' (petik tunggal). Char berbeda dengan String, karena String bukan merupakan tipe data primitif, tetapi sudah merupakan sebuah objek. Tipe char mengikuti aturan unicode, sehingga dapat menggunakan kode /u kemudian diikuti bilangan dari 0 sampai 65535, tetapi yang biasa digunakan adalah bilangan heksadesimal dari 0000 sampai FFFF. Misalnya : \ u123‟ [2]. 

#### - Boolean 

Tipe data boolean pada C++ dideklarasikan dengan kata kunci "bool" dan hanya dapat mengambil nilai true atau false. Ketika nilai dikembalikan, true = 1 dan false = 0. Tipe data ini digunakan untuk memori yang dapat mewakili satu nilai dari dua pilihan, yaitu 1 (True) atau 0 (False). 

### 2. Tipe Data Abstract

tipe data abstrak merupakan Tipe data sebuah variabel adalah kumpulan nilai yang dapat dimuat oleh variabel ini. Misalnya sebuah tipe boolean hanya bernilai TRUE atau FALSE, tidak boleh nilai yang lain. TDA adalah suatu model matematika, disertai sekumpulan operasi terhadap model itu [3]. Pada tipe data abstrak bisa berisi banyak tipe data, jadi nilainya bisa lebih dari satu dan beragam tipe data. Fitur Class adalah fitur Object Oriented Program(OPP) pada bahasa C++ yang mirip dengan fitur data structures Struct pada bahasa C. Keduanya berfungsi untuk membungkus tipe data di dalamnya sebagai anggota.

### 3. Tipe Data Koleksi

Tipe data Koleksi Tipe data koleksi (Collection Data Type) adalah tipe data yang digunakan untuk mengelompokkan dan menyimpan beberapa nilai atau objek secara bersamaan. Tipe data koleksi memungkinkan Anda menyimpan, mengelola, dan mengakses sejumlah besar data dengan cara yang terstruktur. Ada beberapa tipe data koleksi yang umum digunakan dalam pemrograman, dan di antaranya adalah: 

#### - Array

Array adalah struktur data yang digunakan untuk menyimpan sekumpulan data dalam satu tempat. Setiap data dalam array memiliki indeks, sehingga kita dapat dengan mudah memprosesnya. Indeks array selalu dimulai dari angka nol (0). Array sangat berguna ketika kita perlu menyimpan banyak data dengan tipe yang sama, seperti daftar nama teman dalam program kontak [4]. 

#### - Vector

Vector adalah Standard Template Library (STL) jika di dalam C/C++ memiliki bentuk std::vector . Umumnya, vector mirip seperti array yang memiliki kemampuan untuk menyimpan data dalam bentuk elemen-elemen yang alokasi memorinya dilakukan otomatis dan bersebelahan. Kemampuan vector bukan hanya pada jumlah elemen yang dinamis, vector pada C/C++ juga dilengkapi dengan fitur-fitur pelengkap seperti element access, iterators, capacity, modifiers.

#### - Map

Map terasa mirip dengan array namun dengan index yang memungkinkan untuk berupa tipe data selain integer. Pada map, indeks tersebut diberi nama “key”. Pada std::map digunakan Self-Balancing Tree khususnya Red-Black Tree. 

## Langkah Praktikum

### 1. Tipe Data Primitif 

```C++

// tipe data primitif 
#include <iostream>
using namespace std;
// Main Program 
main()
{
    char op;
    float num1, num2;
    // it allows user to enter operator i.e. +, -, *,/
    cin >> op;
    // it allow user to enter the operands
    cin >> num1 >> num2;
    // switch statement begins
    switch (op)
    { 
    // if user enter 
    case '+':
        cout << num1 + num2;
        break;
    // if user enter -
    case '-':
        cout << num1 - num2;
        break;
    // if user enter *
    case '*':
        cout << num1 * num2;
        break;
    // if user enter /
    case '/':
        cout << num1 / num2;
        break;
    // if the operator is other than +, -, * or /,
    // error message will display
    default:
        cout << "Error! operator is not correct";
    } // switch statement ends
    return 0;
}
```

#### Output 


<img width="960" alt="Screenshot 2024-03-09 221623" src="https://github.com/Ikawida/Tugas-Praktikum-1-Algoritma-dan-Struktur-Data/assets/157208863/c349f2d3-ae12-417a-adca-ac1be470dc72">


#### Interpretasi

Kode tersebut adalah program sederhana dalam bahasa C++ untuk melakukan operasi aritmetika dasar menggunakan tipe data primitif. Berikut penjelasan fungsi setiap bagian dari program tersebut: 
1. `#include `: Mengimpor library iostream yang digunakan untuk input dan output standar dalam program C++. 
2. `using namespace std;`: Mendeklarasikan penggunaan namespace std untuk mempermudah penggunaan elemen-elemen dari library standar C++. 
3. `main()`: Fungsi utama program yang akan dijalankan ketika program dimulai. 
4. `char op;`: Mendeklarasikan variabel `op` dengan tipe data `char` untuk menyimpan operator aritmetika yang akan dimasukkan oleh pengguna.
5. `float num1, num2;`: Mendeklarasikan dua variabel `num1` dan `num2` dengan tipe data `float` untuk menyimpan operand yang akan dimasukkan oleh pengguna. 
6. `cin >> op;`: Menggunakan `cin` untuk menerima input dari pengguna dan menyimpannya ke dalam variabel `op`. 
7. `cin >> num1 >> num2;`: Menggunakan `cin` untuk menerima input dua operan dari pengguna dan menyimpannya ke dalam variabel `num1` dan `num2`. 
8. `switch (op) {...}`: Menggunakan struktur switch untuk mengevaluasi nilai dari variabel `op` dan menjalankan blok kode yang sesuai dengan nilai tersebut. 
9. `case '+': cout << num1 + num2; break;`: Jika operator yang dimasukkan adalah '+', maka program akan menampilkan hasil penjumlahan dari `num1` dan `num2`. 
10. `case '-': cout << num1 - num2; break;`: Jika operator yang dimasukkan adalah '-', maka program akan menampilkan hasil pengurangan antara `num1` dan `num2`. 
11. `case '*': cout << num1 * num2; break;`: Jika operator yang dimasukkan adalah '*', maka program akan menampilkan hasil perkalian antara `num1` dan `num2`. 
12. `case '/': cout << num1 / num2; break;`: Jika operator yang dimasukkan adalah '/', maka program akan menampilkan hasil pembagian antara `num1` dan `num2`
13. `default: cout << "Error! operator is not correct";`: Jika operator yang dimasukkan tidak sesuai dengan '+', '-', '*', atau '/', maka program akan menampilkan pesan error. 
14. `return 0;`: Mengakhiri fungsi `main()` dan mengembalikan nilai 0, menandakan bahwa program telah berakhir dengan sukses. 


### 2. Tipe Data Abstrak

```C++

// tipe data abstrak
#include <stdio.h>

// Struct
struct mahasiswa
{
    const char *name;
    const char *address; // Corrected the spelling of "address"
    int age;
};

int main()
{
    // Using struct
    struct mahasiswa mhs1, mhs2;

    // Assigning values to the struct
    mhs1.name = "Dian";
    mhs1.address = "Mataram";
    mhs1.age = 22;

    mhs2.name = "Bambang";
    mhs2.address = "Surabaya";
    mhs2.age = 23;

    // Printing the contents of the struct
    printf("## Mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: %s\n", mhs1.address);
    printf("Age: %d\n", mhs1.age);

    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: %s\n", mhs2.address);
    printf("Age: %d\n", mhs2.age);

    return 0;
}
```

#### Output

<img width="960" alt="Screenshot 2024-03-09 221724" src="https://github.com/Ikawida/Tugas-Praktikum-1-Algoritma-dan-Struktur-Data/assets/157208863/00552d4a-58f1-4241-939b-818353564010">

#### Interpretasi

Program ini membantu mengilustrasikan penggunaan tipe data abstrak (struct) untuk menyimpan dan mengorganisir informasi tentang mahasiswa. Setiap variabel bertipe `mahasiswa` dapat menyimpan sejumlah atribut yang terkait dengan mahasiswa, dan struktur ini memberikan cara yang jelas untuk mengelola data terkait mahasiswa secara terstruktur. Berikut adalah penjelasan fungsi setiap bagian dari program tersebut:
1. `#include `: Mengimpor library stdio yang digunakan untuk fungsi input dan output standar dalam program C. 
2. `struct mahasiswa {...};`: Membuat sebuah tipe data abstrak (struct) yang disebut `mahasiswa`. Struktur ini memiliki tiga anggota, yaitu `name` (nama mahasiswa), `address` (alamat mahasiswa), dan `age` (usia mahasiswa). 
3. `int main() {...}`: Fungsi utama program yang akan dijalankan ketika program dimulai. 
4. `struct mahasiswa mhs1, mhs2;`: Mendeklarasikan dua variabel dengan tipe data struct `mahasiswa` yang disebut `mhs1` dan `mhs2`. Variabel ini akan digunakan untuk menyimpan informasi tentang dua mahasiswa. 
5. Mengisi nilai ke dalam struktur: - `mhs1.name = "Dian";`: Memberikan nilai "Dian" ke dalam anggota `name` dari `mhs1`. - `mhs1.address = "Mataram";`: Memberikan nilai "Mataram" ke dalam anggota `address` dari `mhs1`. - `mhs1.age = 22;`: Memberikan nilai 22 ke dalam anggota `age` dari `mhs1`. - Sama seperti langkah-langkah di atas, nilai juga diberikan ke dalam variabel `mhs2`. 
6. Mencetak isi dari struktur: - Menampilkan informasi mahasiswa pertama (`mhs1`) menggunakan `printf` dengan format tertentu. - Menampilkan informasi mahasiswa kedua (`mhs2`) dengan cara yang sama. 
7. `return 0;`: Mengakhiri fungsi `main()` dan mengembalikan nilai 0, menandakan bahwa program telah berakhir dengan sukses.

### 3. Tipe Data Koleksi
```C++

// tipe data koleksi
#include <iostream>

int main()
{
    // Declaration and initialization of the array
    int nilai[5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;

    // Printing the array
    std::cout << "Isi array pertama: " << nilai[0] << std::endl;
    std::cout << "Isi array kedua: " << nilai[1] << std::endl;
    std::cout << "Isi array ketiga: " << nilai[2] << std::endl;
    std::cout << "Isi array keempat: " << nilai[3] << std::endl;
    std::cout << "Isi array kelima: " << nilai[4] << std::endl;

    return 0;
}
```

#### Output


<img width="960" alt="Screenshot 2024-03-09 221757" src="https://github.com/Ikawida/Tugas-Praktikum-1-Algoritma-dan-Struktur-Data/assets/157208863/cd05956a-0b6f-42ad-8d98-bc2f50bdd7dd">


#### Interpretasi

Program di atas menggunakan array sebagai tipe data koleksi untuk menyimpan beberapa nilai bulat, dan kemudian mencetak nilai-nilai tersebut ke layar. Ini merupakan contoh sederhana dari penggunaan tipe data koleksi untuk mengelola data yang memiliki hubungan atau kesamaan.Berikut adalah penjelasan setiap fungsi dari kode program tersebut: 
1. `#include `: Mengimpor library iostream yang digunakan untuk input dan output standar dalam program C++. 
2. `int main() {...}`: Fungsi utama program yang akan dijalankan ketika program dimulai. 
3. `int nilai[5];`: Mendeklarasikan array dengan nama `nilai` dan panjang 5. Array ini akan digunakan untuk menyimpan 5 nilai bulat. 
4. Menginisialisasi array: - `nilai[0] = 23;`: Menetapkan nilai 23 ke elemen pertama dari array `nilai`. - `nilai[1] = 50;`: Menetapkan nilai 50 ke elemen kedua dari array `nilai`. - `nilai[2] = 34;`: Menetapkan nilai 34 ke elemen ketiga dari array `nilai`. - `nilai[3] = 78;`: Menetapkan nilai 78 ke elemen keempat dari array `nilai`. - `nilai[4] = 90;`: Menetapkan nilai 90 ke elemen kelima dari array `nilai`. 
5. Mencetak isi dari array: - `std::cout << "Isi array pertama: " << nilai[0] << std::endl;`: Menampilkan nilai dari elemen pertama array `nilai`. - `std::cout << "Isi array kedua: " << nilai[1] << std::endl;`: Menampilkan nilai dari elemen kedua array `nilai`. - `std::cout << "Isi array ketiga: " << nilai[2] << std::endl;`: Menampilkan nilai dari elemen ketiga array `nilai`. - `std::cout << "Isi array keempat: " << nilai[3] << std::endl;`: Menampilkan nilai dari elemen keempat array `nilai`. - `std::cout << "Isi array kelima: " << nilai[4] << std::endl;`: Menampilkan nilai dari elemen kelima array `nilai`. 
6. `return 0;`: Mengakhiri fungsi `main()` dan mengembalikan nilai 0, menandakan bahwa program telah berakhir dengan sukses.

## Tugas Praktikum

### 1.Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas.Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!

#### Kode Program

```C++

// 1. Program menggunakan tipe data primitif minimal dua fungsi dan bebas.
#include <iostream>
using namespace std;

// Fungsi untuk menjumlahkan dua angka
int tambah(int a, int b) {
    return a + b;
}

// Fungsi untuk mengalikan dua angka
int kali(int a, int b) {
    return a * b;
}

int main() {
    // Variabel dengan tipe data primitif int
    int angka1 = 5;
    int angka2 = 3;

    // Memanggil fungsi tambah dan mencetak hasil
    cout << "Hasil penjumlahan: " << tambah(angka1, angka2) << endl;

    // Memanggil fungsi kali dan mencetak hasil
    cout << "Hasil perkalian: " << kali(angka1, angka2) << endl;

    return 0;
}
```

### Output

<img width="960" alt="Screenshot 2024-03-09 221913" src="https://github.com/Ikawida/Tugas-Praktikum-1-Algoritma-dan-Struktur-Data/assets/157208863/b1d3a79c-a17f-4d54-9350-a23ca165e03f">

### Interpretasi

Program di atas menggunakan tipe data primitif, khususnya tipe data `int` (integer), dan memanfaatkan dua fungsi yang melakukan operasi sederhana, yaitu penjumlahan dan perkalian. Berikut adalah penjelasan setiap bagian dari program tersebut: 
1. **Deklarasi dan Penggunaan Fungsi:** 
- `int tambah(int a, int b)`: Fungsi ini menerima dua parameter bertipe `int` (a dan b) dan mengembalikan hasil penjumlahan keduanya. 
- `int kali(int a, int b)`: Fungsi ini menerima dua parameter bertipe `int` (a dan b) dan mengembalikan hasil perkalian keduanya. 
2. **Fungsi Utama (`main`):** 
- `int angka1 = 5;` dan `int angka2 = 3;`: Mendeklarasikan dan menginisialisasi dua variabel bertipe data primitif `int`. 
- Memanggil fungsi `tambah(angka1, angka2)` dan mencetak hasil penjumlahan menggunakan `cout`. 
- Memanggil fungsi `kali(angka1, angka2)` dan mencetak hasil perkalian menggunakan `cout`. 

#### Kesimpulan Data Primitif
- Tipe data primitif `int` digunakan untuk menyimpan nilai bilangan bulat. 
- Fungsi-fungsi yang didefinisikan (`tambah` dan `kali`) menggunakan tipe data primitif sebagai parameter dan kembalian. 
- Program ini memperlihatkan penggunaan tipe data primitif untuk melakukan operasi sederhana seperti penjumlahan dan perkalian. 
- Kesimpulannya, tipe data primitif menyediakan dasar untuk memanipulasi data dengan operasi dasar, dan fungsi membantu mengorganisir dan mengabstraksi logika program secara modular. Program tersebut memberikan contoh sederhana tentang cara tipe data primitif dan fungsi dapat digunakan dalam pemrograman untuk melakukan tugas-tugas dasar. 

### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya Penjelasan mengenai fungsi class dan struct: 

#### Penjelasan Fungsi dari Struct dan Struktur

- Class adalah salah satu dari konsep OOP yang digunakan untuk membungkus data abstraksi procedural sebagai deskripsi tergeneralisir atau rancangan dari sebuah object untuk mendefinisikan atau menggambarkan isi dan tingkah laku sebagai entitas dari object. Untuk mendirikan Class kita membutuhkan keyword class yang dilanjutkan dengan pemberian nama dari deklarasi class tersebut. lalu dilanjutkan dengan meletakan tanda { dan } untuk mengapit definisi dari class.Class termasuk sebuah pernyataan maka dari itu akhir dari deklarasi class diwajibkan untuk mengakhiri class menggunakan tanda titik-koma ;. Class digunakan untuk menciptakan tipe data abstrak yang memiliki data dan perilaku terkait. Dapat memiliki hak akses private, protected, dan public. Mendukung enkapsulasi, inheritance, dan polymorphism. 
- Struct merupakan salah satu jenis dari tipe data bentukan dalam bahasa pemrograman C++. Dikatakan sebagai tipe data bentukan karena struct dapat menampung satu atau lebih variabel dengan tipe data yang sama ataupun berbeda. Kita dapat mendesain struktur data elemen sedemikian rupa di dalamnya. Dengan kemampuan tersebut, tipe data bentukan tersebut dapat digunakan untuk mengelompokkan beberapa variabel. Kelompok variabel tersebut kemudian dibentuk sebagai sebuah “cetakan”. Cetakan tersebut digunakan untuk mencetak objek (variabel) dengan karakteristik seperti struct yang dibentuk tadi. Struct Digunakan untuk menyimpan sekumpulan data yang berhubungan. Anggota defaultnya bersifat public. Cocok untuk kasus sederhana di mana hanya perlu menyimpan data. 

#### Contoh Kode Program: 

##### - Fungsi Class 
```C++

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
```

##### Output

<img width="960" alt="Screenshot 2024-03-09 222037" src="https://github.com/Ikawida/Tugas-Praktikum-1-Algoritma-dan-Struktur-Data/assets/157208863/65371ddf-f969-47c2-88e3-6732cbd96a75">

##### Interpretasi

Program di atas merupakan contoh sederhana dari penggunaan class dalam C++. Class `Kendaraan` digunakan untuk menggabungkan data (jenis kendaraan dan jumlah roda) dengan perilaku (metode `info()` untuk menampilkan informasi). Objek `mobil` kemudian dibuat dari class tersebut dan digunakan untuk menyimpan dan menampilkan informasi kendaraan. Berikut adalah penjelasan setiap fungsi dari program tersebut: 
1. `class Kendaraan {...}`: Mendefinisikan sebuah class yang disebut `Kendaraan`. Class ini memiliki properti atau data anggota berupa `jenis` (string) dan `roda` (int), serta metode atau fungsi anggota `info()`. 
2. `public:`: Mendefinisikan hak akses anggota class. Dalam contoh ini, semua anggota class (`jenis`, `roda`, dan `info()`) dapat diakses dari luar class. 
3. `string jenis; int roda;`: Mendeklarasikan dua properti atau data anggota dari class `Kendaraan`. Properti ini akan menyimpan informasi tentang jenis kendaraan (string) dan jumlah roda (integer). 
4. `void info() {...}`: Mendefinisikan sebuah metode atau fungsi anggota dari class `Kendaraan` yang disebut `info()`. Fungsi ini bertujuan untuk menampilkan informasi tentang jenis kendaraan dan jumlah roda ke layar. 
5. `cout << "Jenis kendaraan: " << jenis << ", Jumlah roda: " << roda << endl;`: Pernyataan dalam fungsi `info()` yang mencetak informasi jenis kendaraan dan jumlah roda ke layar menggunakan objek `cout`. 
6. `int main() {...}`: Fungsi utama dari program yang akan dijalankan saat program dimulai. 
7. `Kendaraan mobil;`: Mendeklarasikan objek `mobil` dari class `Kendaraan`. Objek ini dapat digunakan untuk menyimpan data tentang kendaraan dan memanggil metode `info()`. 
8. `mobil.jenis = "Mobil"; mobil.roda = 4;`: Mengisi nilai properti objek `mobil` dengan informasi jenis "Mobil" dan jumlah roda 4. 
9. `mobil.info();`: Memanggil metode `info()` dari objek `mobil` untuk menampilkan informasi kendaraan ke layar. 
10. `return 0;`: Mengakhiri fungsi `main()` dan mengembalikan nilai 0, menandakan bahwa program telah berakhir dengan sukses.

##### - Fungsi Struct

##### Kode Program

```C++

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
```

##### Output

<img width="960" alt="Screenshot 2024-03-09 222138" src="https://github.com/Ikawida/Tugas-Praktikum-1-Algoritma-dan-Struktur-Data/assets/157208863/98c7f247-ebd9-473d-855b-08c952ddc41c">

##### Interpretasi

Program ini menggunakan struct `Mahasiswa` untuk menyimpan informasi tentang mahasiswa. Struct ini bertindak sebagai wadah untuk mengelompokkan data yang berhubungan. Objek `mahasiswa1` kemudian dibuat dari struct tersebut dan digunakan untuk menyimpan serta menampilkan informasi mahasiswa. Program ini mengilustrasikan cara struct dapat digunakan untuk merepresentasikan entitas dengan propertinya masing-masing.Berikut adalah penjelasan setiap fungsi dari kode program tersebut: 
1. `struct Mahasiswa {...}`: Mendefinisikan sebuah struct yang disebut `Mahasiswa`. Struct ini memiliki tiga anggota, yaitu `nama`, `nim`, dan `jurusan`. 
2. `string nama; string nim; string jurusan;`: Mendeklarasikan tiga anggota dari struct `Mahasiswa` yang bertipe data string. Anggota-anggota ini akan menyimpan informasi tentang nama mahasiswa, NIM, dan jurusan. 
3. `int main() {...}`: Fungsi utama dari program yang akan dijalankan saat program dimulai. 
4. `Mahasiswa mahasiswa1 = {"Ika Wida", "2311110001", "Sains Data"};`: Membuat objek `mahasiswa1` dari struct `Mahasiswa` dan menginisialisasinya dengan nilai awal. Dalam hal ini, nama mahasiswa adalah "Ika Wida", NIM adalah "2311110001", dan jurusan adalah "Sains Data". 
5. `cout << "Nama: " << mahasiswa1.nama << ", NIM: " << mahasiswa1.nim << ", Jurusan: " << mahasiswa1.jurusan << endl;`: Menampilkan informasi mahasiswa menggunakan objek `mahasiswa1` dan mengakses anggota-anggotanya. Pernyataan ini mencetak nama, NIM, dan jurusan mahasiswa ke layar. 
6. `return 0;`: Mengakhiri fungsi `main()` dan mengembalikan nilai 0, menandakan bahwa program telah berakhir dengan sukses.

### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map.

#### - Kode Program

```C++

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
```

#### - Output

<img width="960" alt="Screenshot 2024-03-09 222349" src="https://github.com/Ikawida/Tugas-Praktikum-1-Algoritma-dan-Struktur-Data/assets/157208863/e9c7f57b-b2ec-423a-9643-8de1eed97956">

#### - Interpretasi

Program ini menggunakan map untuk menyimpan informasi mahasiswa dengan NIM sebagai kunci dan nama sebagai nilai. Setiap NIM terkait dengan nama mahasiswa tertentu, dan program mencetak informasi tersebut ke layar. Map sangat berguna untuk menyusun data dengan cara yang terstruktur, memungkinkan pencarian efisien berdasarkan kunci tertentu. Dalam contoh ini, data mahasiswa disimpan dengan NIM dan nama masing-masing mahasiswa. Program tersebut adalah contoh penggunaan struktur data `std::map` dalam C++. Berikut adalah penjelasan setiap bagian dari kode tersebut: 
- Pendeklarasian dan Penginisialisasian Map: std::map mahasiswa; 
- Mendeklarasikan map dengan kunci bertipe `int` dan nilai bertipe `std::string`. - `mahasiswa` adalah nama objek dari map. 
- Menambahkan Elemen ke dalam Map: mahasiswa[101] = "Joni"; mahasiswa[102] = "Ayu"; mahasiswa[103] = "Budi"; 
- Menggunakan operator `[]` untuk menambahkan elemen ke dalam map. Kunci 101 terkait dengan nama "Joni", kunci 102 dengan "Ayu", dan kunci 103 dengan "Budi". 
- Menampilkan Informasi Mahasiswa: std::cout << "Informasi Mahasiswa:\n"; for (const auto& pair : mahasiswa) { std::cout << "NIM: " << pair.first << ", Nama: " << pair.second << std::endl; } 
- Loop menggunakan for-range (`for (const auto& pair : mahasiswa)`) untuk meloop melalui setiap pasangan kunci-nilai dalam map. 
- `pair.first` mengakses kunci (NIM), dan `pair.second` mengakses nilai (nama mahasiswa). 
- Mencetak informasi mahasiswa ke layar dengan menggunakan `std::cout`. 
- Mengakhiri Program: return 0; - Mengakhiri program dan mengembalikan nilai 0 sebagai tanda bahwa program berakhir dengan sukses.

#### - Perbedaan Map dan Array

perbedaan utama antara array dan map adalah pada struktur dan cara akses elemennya. Array menyimpan elemen-elemen dengan tipe data yang sama dan diakses berdasarkan indeks, sedangkan map menyimpan pasangan kunci-nilai dengan tipe data yang berbeda dan diakses menggunakan kunci. Selain itu, ukuran array bersifat tetap, sedangkan ukuran map bersifat dinamis.

## Kesimpulan 

Berikut adalah hasil ringkasan dan interpretasi umum tentang materi tipe data dalam bahasa C++ berdasarkan kegiatan praktikum dan juga setelah saya mengerjakan tugas: 
1. **Tipe Data Primitif:** 
- C++ memiliki sejumlah tipe data primitif seperti `int`, `float`, `char`, dan `bool`. 
- Tipe data primitif digunakan untuk menyimpan nilai sederhana, seperti bilangan bulat, pecahan, karakter, atau kebenaran. 
2. **Tipe Data Abstrak:** 
- C++ juga mendukung struktur data yang lebih kompleks seperti array, struct, dan class. 
- Struct dan class memungkinkan pembuatan tipe data kustom dengan properti dan metode yang dapat diakses. 
3. **Tipe Data Koleksi:** 
- Array dan vektor adalah contoh tipe data koleksi yang memungkinkan penyimpanan sejumlah nilai dalam satu variabel. 
- Vektor di C++ lebih dinamis dibandingkan array karena dapat mengubah ukurannya saat runtime. 
4. **Pemahaman Fungsi:** 
- Fungsi adalah blok kode yang dapat dipanggil dengan suatu nama. Dalam C++, fungsi dapat mengembalikan nilai atau tidak mengembalikan nilai (void). 
- Parameter digunakan untuk mengirim nilai ke fungsi, dan fungsi dapat mengembalikan nilai menggunakan `return`. 
5. **Penggunaan `map` dan `struct`/`class`:** 
- `std::map` digunakan untuk menyimpan pasangan kunci-nilai, memberikan cara efisien untuk pencarian berbasis kunci. 
- Struct dan class memungkinkan pembuatan tipe data kustom dengan struktur yang lebih kompleks, mengelompokkan data dan fungsi bersama-sama. 
6. **Pentingnya Tipe Data:** 
- Pemilihan tipe data yang tepat penting untuk efisiensi dan kejelasan kode. - Pemahaman tentang tipe data memungkinkan pemrogram membuat keputusan yang tepat dalam penyimpanan dan manipulasi data. 

## Daftar Pustaka

[1] Hubbard, J. R., Schaum’s outline of theory and problems of data structures with C++. New York: McGraw-Hil; 2020. 

[2] Savitch, W. J, Absolute C++. Boston: Addison-Wesley. 2022. 

[3] A. S. Putra, Artikel Struktur Data, Audit Dan Jaringan Komputer,2020. 

[4] Felix Andreas Sutanto, Panduan Praktis Pemrograman Visual Berbasis C++, Yogyakarta;2021.


