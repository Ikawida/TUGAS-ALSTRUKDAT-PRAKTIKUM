# <h1 align="center">Laporan Praktikum Modul 5 Struct</h1>

<p align="center">Nama: Ika Wida Nuragustin</p>
<p align="center">NIM: 2311110001</p>
<p align="center">Kelas: SISD-04A</p>

## Dasar Teori 

Suatu struktur (structure) adalah pengelompokkan dari variabel-variabel yang berada dalam satu nama 
yang sama. Suatu struktur dapat terdiri dari kumpulan variabel-variabel yang berbeda tipenya dalam satu nama tetapi berkaitan [1]. Misalnya data mengenai nama, nopeg, jabatan, gaji seorang pegawai. Keempat data tersebut mempunyai tipe data yang berbeda tetapi masih berhubungan yaitu data pegawai. Variabel-variabel yang membentuk suatu struktur ini selanjutnya disebut dengan elemen atau anggota struktur. Dengan demikian suatu struktur dimungkinkan dapat berisi dengan elemen-elemen data bertipe int, float, char dan lainnya [2]. Dengan menggunakan struktur maka data ini dapat diolah per elemen (field) atau secara keseluruha (per struktur, per-record). 

Struktur dapat dideklarasikan secara bertingkat, maksudnya salah satu elemen suatu struktur 
merupakan sebuah struktur juga. Manipulasi elemen seperti ini memerlukan dua buah operator titik. Pengaksesan elemen suatu struktur melalui pointer yang mengacu ke struktur ini dapat dilakukan dengan menggunakan indirection operator * dan inderect membership operator -> [3]. 

Struktur dapat dikirim ke fungsi sebagai parameter. Bila struktur ini hanya merupakan data masukan 
maka dapat dikirim dengan pendekatan pengiriman parameter secara nilai (call by value). Apabila struktur yang dikirim ke fungsi akan mengalami perubahan nilai maka pengiriman parameter harus secara acuan (call by reference) dengan mengirimkan pointer ke struktur (menggunakan pointer to structure) [4]. Struktur juga dapat menjadi tipe data untuk nilai balik dari sebuah fungsi. 

## Guided 

### Guided 1 

#### Kode Program 
```C++
#include <iostream>

using namespace std;

// Mendefinisikan struktur buku
struct buku {
    string judulBuku;
    string pengarang;
    string penerbit;
    int tebalHalaman;
    int hargaBuku;
};

int main() {
    // Mendeklarasikan variabel favorit dengan tipe buku
    buku favorit;

    // Mengisi data ke dalam variabel favorit
    favorit.judulBuku = "The Alpha Girl's Guide";
    favorit.pengarang = "Henry Manampiring";
    favorit.penerbit = "Gagas Media";
    favorit.tebalHalaman = 253;
    favorit.hargaBuku = 79000;

    // Menampilkan informasi buku favorit
    cout << "\tBuku Favorit Saya" << endl;
    cout << "\tJudul Buku : " << favorit.judulBuku << endl;
    cout << "\tPengarang : " << favorit.pengarang << endl;
    cout << "\tPenerbit : " << favorit.penerbit << endl;
    cout << "\tTebal Halaman: " << favorit.tebalHalaman << " halaman" << endl;
    cout << "\tHarga Buku : Rp " << favorit.hargaBuku << endl;
 
    return 0;
}
```

#### Interpretasi
Program tersebut digunakan untuk merepresentasikan dan mengelola informasi tentang buku favorit seseorang. Dengan menggunakan struktur data, program tersebut memungkinkan pengguna untuk menyimpan atribut-atribut yang terkait dengan buku, seperti judul buku, pengarang, penerbit, jumlah halaman, dan harga buku, secara terstruktur dan terorganisir.
Dengan implementasi tersebut, program dapat digunakan untuk berbagai tujuan, contohnya:
Pencatatan Buku Favorit: 
1. Seseorang dapat menggunakan program ini untuk mencatat buku-buku favorit mereka bersama dengan informasi terkait, sehingga mereka dapat dengan mudah mengingat dan mengakses daftar buku-buku yang disukai.
2. Manajemen Koleksi Buku: Program ini dapat digunakan sebagai alat untuk mengatur dan mengelola koleksi buku seseorang, baik itu dalam bentuk digital maupun fisik. Ini memudahkan seseorang untuk melacak buku-buku yang mereka miliki atau ingin dimiliki.
3. Rekomendasi Buku: Dengan mencatat informasi tentang buku-buku favorit, program ini dapat membantu seseorang dalam memberikan rekomendasi buku kepada orang lain berdasarkan preferensi pribadi mereka.
4. Analisis Pembelian Buku: Jika digunakan dalam konteks bisnis atau industri penjualan buku, program ini dapat membantu dalam menganalisis pola pembelian buku, tren penjualan, dan preferensi pelanggan berdasarkan informasi yang tersedia.

Berikut adalah penjelasan mengenai kode program yang digunakan: 

1. **Definisi Struktur Data `buku`:**
   - Program memulai dengan mendefinisikan sebuah struktur data bernama `buku`, yang memiliki beberapa atribut seperti judul buku, pengarang, penerbit, jumlah halaman, dan harga buku. Ini memberikan format atau kerangka untuk menyimpan informasi tentang sebuah buku.

2. **Fungsi Utama `main()`:**
   - Setelah definisi struktur data, program memasuki fungsi utama `main()`, yang merupakan titik awal dari eksekusi program.

3. **Deklarasi Variabel `favorit`:**
   - Di dalam fungsi `main()`, program mendeklarasikan sebuah variabel bernama `favorit` dengan tipe data `buku`. Variabel ini akan digunakan untuk menyimpan informasi tentang buku favorit.

4. **Pengisian Informasi tentang Buku Favorit:**
   - Setiap atribut dari variabel `favorit` diisi dengan nilai yang sesuai menggunakan operator dot (`.`). Informasi tentang buku favorit, seperti judul buku, nama pengarang, nama penerbit, jumlah halaman, dan harga buku, dimasukkan ke dalam variabel `favorit`.

5. **Pencetakan Informasi Buku Favorit:**
   - Setelah informasi buku favorit diisi, program menggunakan objek `cout` untuk mencetak informasi tersebut ke layar.
   - Informasi seperti judul buku, pengarang, penerbit, jumlah halaman, dan harga buku dicetak dalam format yang terstruktur, membuatnya mudah dibaca oleh pengguna.

6. **Pengakhiran Program:**
   - Setelah mencetak informasi buku favorit, program mengakhiri eksekusi dengan `return 0;`, yang menandakan bahwa program telah berjalan dengan sukses dan mengembalikan nilai 0 ke sistem operasi.

#### Output

<img width="960" alt="Screenshot 2024-04-20 134339" src="https://github.com/Ikawida/TUGAS-PRAKTIKUM-ALSTRUKDAT/assets/157208863/6664fd79-0d62-47ba-a554-2555c2e11c0e">

### Guided 2

#### Kode Program 
```C++
#include <iostream>
using namespace std;

struct hewan {
    string namaHewan;
    string jenisKelamin;
    string caraBerkembangbiak;
    string alatPernafasan;
    string tempatHidup;
    bool Karnivora;
};

struct hewanDarat {
    int jumlahKaki;
    bool menyusui;
    string suara;
};

struct hewanLaut {
    string bentukSirip;
    string bentukPertahananDiri;
};

int main() {
    hewanDarat kelinci; // Menggunakan tipe data hewanDarat untuk kelinci
    kelinci.jumlahKaki = 4;
    kelinci.menyusui = true;
    kelinci.suara = "Citcit";

    hewanLaut ikan; // Menggunakan tipe data hewanLaut untuk ikan
    ikan.bentukSirip = "Sirip ekor";
    ikan.bentukPertahananDiri = "Sisik";

    hewan serigala; // Tetap menggunakan tipe data hewan untuk serigala
    serigala.namaHewan = "Serigala";
    serigala.jenisKelamin = "Jantan";
    serigala.caraBerkembangbiak = "Melahirkan";
    serigala.alatPernafasan = "Paru-paru";
    serigala.tempatHidup = "Hutan terbuka";
    serigala.Karnivora = true;

    cout << "\t\tHewan" << endl;
    cout << "\t" << serigala.namaHewan << endl;
    cout << "\tJenis kelamin : " << serigala.jenisKelamin << endl;
    cout << "\tCara berkembangbiak : " << serigala.caraBerkembangbiak << endl;
    cout << "\tAlat pernafasan : " << serigala.alatPernafasan << endl;
    cout << "\tTempat hidup : " << serigala.tempatHidup << endl;
    cout << "\tKarnivora : " << (serigala.Karnivora ? "Yes" : "No") << endl << endl;

    cout << "\t\tHewan Darat" << endl;
    cout << "\tKelinci" << endl;
    cout << "\tJumlah kaki : " << kelinci.jumlahKaki << endl;
    cout << "\tMenyusui : " << (kelinci.menyusui ? "Yes" : "No") << endl;
    cout << "\tSuara : " << kelinci.suara << endl << endl;

    cout << "\t\tHewan Laut" << endl;
    cout << "\tIkan" << endl;
    cout << "\tBentuk sirip : " << ikan.bentukSirip << endl;
    cout << "\tBentuk pertahanan diri: " << ikan.bentukPertahananDiri << endl;

    return 0;
}
```

#### Interpretasi 

Program tersebut digunakan untuk menyimpan dan mengelola informasi tentang berbagai jenis hewan, baik hewan darat maupun hewan laut. Dengan menggunakan struktur data, program dapat mengatur informasi-informasi yang terkait dengan setiap jenis hewan secara terorganisir.

Terdapat tiga definisi struktur dalam program tersebut: `hewan`, `hewanDarat`, dan `hewanLaut`.

1. `hewan` adalah struktur yang mendefinisikan atribut-atribut umum yang dimiliki oleh hewan, seperti nama, jenis kelamin, cara berkembangbiak, alat pernafasan, tempat hidup, dan apakah hewan tersebut karnivora atau bukan.

2. `hewanDarat` adalah struktur yang mendefinisikan atribut-atribut khusus yang dimiliki oleh hewan darat, seperti jumlah kaki, apakah hewan tersebut menyusui atau tidak, dan suara yang dihasilkan.

3. `hewanLaut` adalah struktur yang mendefinisikan atribut-atribut khusus yang dimiliki oleh hewan laut, seperti bentuk sirip dan bentuk pertahanan diri.

Di dalam fungsi `main()`, tiga variabel digunakan untuk menyimpan data hewan: `kelinci` (berjenis `hewanDarat`), `ikan` (berjenis `hewanLaut`), dan `serigala` (berjenis `hewan`).

Setelah data hewan disimpan dalam variabel, program mencetak informasi masing-masing hewan ke layar menggunakan perintah `cout`. Misalnya, untuk `serigala`, program mencetak nama, jenis kelamin, cara berkembangbiak, alat pernafasan, tempat hidup, dan apakah hewan tersebut karnivora atau bukan.

Berikut adalah penjelasan mengenai setiap kode program yang digunakan: 

1. `#include <iostream>`: Ini adalah direktif preprosesor yang menyertakan header file `<iostream>`, yang diperlukan untuk operasi input-output (I/O) dalam C++.

2. `using namespace std;`: Ini adalah deklarasi menggunakan namespace `std`, yang memungkinkan penggunaan objek dan fungsi standar dari C++ tanpa menyertakan prefix `std::`.

3. `struct hewan { ... };`: Ini adalah definisi struktur `hewan` yang menyimpan beberapa atribut umum tentang hewan seperti nama, jenis kelamin, dll.

4. `struct hewanDarat { ... };`: Ini adalah definisi struktur `hewanDarat` yang berisi atribut khusus untuk hewan darat, seperti jumlah kaki, kemampuan menyusui, dan suara yang dihasilkan.

5. `struct hewanLaut { ... };`: Ini adalah definisi struktur `hewanLaut` yang berisi atribut khusus untuk hewan laut, seperti bentuk sirip dan bentuk pertahanan diri.

6. `int main() { ... }`: Ini adalah fungsi utama program C++, di mana eksekusi program dimulai.

7. `hewanDarat kelinci;`: Ini mendeklarasikan variabel `kelinci` yang merupakan objek dari struktur `hewanDarat`.

8. `kelinci.jumlahKaki = 4;`, `kelinci.menyusui = true;`, `kelinci.suara = "Citcit";`: Ini adalah contoh pengisian nilai atribut dari objek `kelinci`.

9. `hewanLaut ikan;`: Ini mendeklarasikan variabel `ikan` yang merupakan objek dari struktur `hewanLaut`.

10. `ikan.bentukSirip = "Sirip ekor";`, `ikan.bentukPertahananDiri = "Sisik";`: Ini adalah contoh pengisian nilai atribut dari objek `ikan`.

11. `hewan serigala;`: Ini mendeklarasikan variabel `serigala` yang merupakan objek dari struktur `hewan`.

12. `serigala.namaHewan = "Serigala";`, ... : Ini adalah contoh pengisian nilai atribut dari objek `serigala`.

13. `cout << ...;`: Ini adalah perintah untuk mencetak output ke layar menggunakan objek `cout`.

14. `return 0;`: Ini adalah pernyataan yang mengembalikan nilai 0 ke sistem operasi, menandakan bahwa program telah berakhir dengan sukses.

Dengan menggunakan struktur data dan variabel-variabel tersebut, program mengelola dan mencetak informasi tentang hewan-hewan yang diwakili oleh objek-objek tersebut.

#### Output

<img width="960" alt="Screenshot 2024-04-20 134311" src="https://github.com/Ikawida/TUGAS-PRAKTIKUM-ALSTRUKDAT/assets/157208863/d94799d8-799d-4b7b-ab2e-a709fc0d2052">

## Unguided 

### Unguided 1
#### 1. Modifikasi tugas gided pertama, sehingga setiap item yang terdapat pada sruct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan. 
##### Jawab:
###### Kode Program 
```C++
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
```
###### Interpretasi

Diatas merupakan program yang sudah dimodifikasi dari kodingan guided 1. Dan berikut adalah modifikasi yang dilakukan dalam program tersebut: 

1. **Struktur Data `Buku`:**
   - Sebelumnya, struktur data `buku` hanya memiliki satu item untuk setiap atribut, seperti `judulBuku`, `pengarang`, `penerbit`, `tebalHalaman`, dan `hargaBuku`.
   - Dalam modifikasi ini, setiap item diubah menjadi array dengan ukuran 5. Ini berarti sekarang kita memiliki lima slot untuk menyimpan informasi tentang lima buku.

2. **Loop untuk Memasukkan dan Menampilkan Data:**
   - Sebelumnya, hanya ada satu blok kode untuk mengisi data buku favorit.
   - Dalam modifikasi ini, kita menggunakan loop `for` untuk mengulangi proses pengisian data buku sebanyak lima kali.
   - Setiap iterasi loop meminta pengguna untuk memasukkan informasi tentang satu buku, yang kemudian disimpan dalam array atribut `Buku`.
   - Setelah semua data dimasukkan, program menggunakan loop `for` lagi untuk menampilkan informasi tentang setiap buku favorit.

Dengan modifikasi ini, program dapat mengelola dan menampilkan informasi tentang lima buku favorit secara terstruktur, menggunakan array untuk menyimpan informasi tentang setiap buku.

Berikut adalah interpretasi dari kode program yang digunakan:

1. **Pendefinisian Struktur Data `Buku`:**
   - Kode tersebut mulai dengan mendefinisikan struktur data `Buku`.
   - Struktur data ini memiliki lima array, masing-masing untuk judul buku, pengarang, penerbit, tebal halaman, dan harga buku.

2. **Fungsi Utama (`main`):**
   - Program kemudian masuk ke fungsi utama (`main`).
   - Di dalam fungsi utama, sebuah variabel `favorit` dari tipe `Buku` dideklarasikan untuk menyimpan data buku favorit.

3. **Memasukkan Informasi Buku:**
   - Program meminta pengguna untuk memasukkan informasi tentang lima buku favorit.
   - Untuk setiap buku, program mengulangi proses meminta pengguna untuk memasukkan judul, pengarang, penerbit, tebal halaman, dan harga buku.
   - Data yang dimasukkan oleh pengguna disimpan dalam array atribut `favorit`.

4. **Menampilkan Informasi Buku:**
   - Setelah semua data buku dimasukkan, program menggunakan loop untuk menampilkan informasi tentang setiap buku favorit.
   - Untuk setiap buku, program mencetak judul, pengarang, penerbit, tebal halaman, dan harga buku ke layar.

Program tersebut berfungsi dengan memungkinkan pengguna untuk memasukkan informasi tentang lima buku favorit mereka, seperti judul, pengarang, penerbit, tebal halaman, dan harga buku. Data yang dimasukkan disimpan dalam struktur data yang sesuai, dan setelah semua data dimasukkan, program menampilkan informasi buku tersebut kembali ke pengguna. Ini memudahkan pengguna untuk mengelola dan melihat informasi buku favorit mereka dengan terstruktur.

###### Output

<img width="960" alt="Screenshot 2024-04-20 133904" src="https://github.com/Ikawida/TUGAS-PRAKTIKUM-ALSTRUKDAT/assets/157208863/cbc762e7-0b9f-43d2-a638-a1a781c4904b">

<img width="960" alt="Screenshot 2024-04-20 133948" src="https://github.com/Ikawida/TUGAS-PRAKTIKUM-ALSTRUKDAT/assets/157208863/b7c74621-6adf-4833-b779-409ee6bd90b8">

<img width="960" alt="Screenshot 2024-04-20 134023" src="https://github.com/Ikawida/TUGAS-PRAKTIKUM-ALSTRUKDAT/assets/157208863/26cc55c7-6bc1-4227-a6f5-758a40dcff3b">

### Unguided 2
#### 2. Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided 1, berjenis array. Bagaimana cara mengisi dan menampilkannya.
##### Jawab:
Jika variabel `favorit` dideklarasikan sebagai array dari struktur `buku`, maka setiap elemen array akan menyimpan satu buku. Untuk mengisi dan menampilkannya, kita perlu menggunakan loop. Saat mengisi data, kita akan mengakses setiap elemen array untuk memasukkan informasi buku ke dalamnya. Setelah semua data dimasukkan, kita akan menggunakan loop lagi untuk menampilkan informasi tentang setiap buku favorit yang disimpan dalam array tersebut.

Untuk mengisi dan menampilkan data dari array dari struktur `buku`, kita perlu melakukan langkah-langkah berikut:

### Mengisi Data:
1. Deklarasikan array dari struktur `buku` dengan jumlah elemen yang diinginkan.
2. Gunakan loop untuk mengakses setiap elemen array.
3. Untuk setiap elemen array, minta pengguna memasukkan informasi tentang buku, seperti judul, pengarang, penerbit, tebal halaman, dan harga buku.
4. Simpan informasi yang dimasukkan oleh pengguna ke dalam atribut-atribut yang sesuai dalam struktur `buku`.

### Menampilkan Data:
1. Gunakan loop untuk mengakses setiap elemen array.
2. Untuk setiap elemen array, tampilkan informasi tentang buku, seperti judul, pengarang, penerbit, tebal halaman, dan harga buku.

Berikut adalah contoh kode yang mengilustrasikan cara mengisi dan menampilkan data dari array dari struktur `buku`:

```cpp
#include <iostream>
#include <string>

using namespace std;

// Mendefinisikan struktur buku
struct buku {
    string judulBuku;
    string pengarang;
    string penerbit;
    int tebalHalaman;
    int hargaBuku;
};

int main() {
    const int JUMLAH_BUKU = 3; // Jumlah buku favorit

    // Mendeklarasikan array favorit dengan tipe buku dan ukuran JUMLAH_BUKU
    buku favorit[JUMLAH_BUKU];

    // Mengisi data ke dalam array favorit
    for (int i = 0; i < JUMLAH_BUKU; ++i) {
        cout << "Masukkan informasi buku ke-" << i+1 << ":" << endl;
        cout << "Judul Buku: ";
        getline(cin, favorit[i].judulBuku);
        cout << "Pengarang: ";
        getline(cin, favorit[i].pengarang);
        cout << "Penerbit: ";
        getline(cin, favorit[i].penerbit);
        cout << "Tebal Halaman: ";
        cin >> favorit[i].tebalHalaman;
        cout << "Harga Buku: Rp ";
        cin >> favorit[i].hargaBuku;
        cin.ignore(); // Membersihkan newline character dari buffer input
    }

    // Menampilkan informasi buku favorit
    cout << "\nInformasi buku favorit:" << endl;
    for (int i = 0; i < JUMLAH_BUKU; ++i) {
        cout << "Buku ke-" << i+1 << ":" << endl;
        cout << "Judul Buku : " << favorit[i].judulBuku << endl;
        cout << "Pengarang : " << favorit[i].pengarang << endl;
        cout << "Penerbit : " << favorit[i].penerbit << endl;
        cout << "Tebal Halaman: " << favorit[i].tebalHalaman << " halaman" << endl;
        cout << "Harga Buku : Rp " << favorit[i].hargaBuku << endl << endl;
    }

    return 0;
}
```

###### Interpretasi

1. Program dimulai dengan mendefinisikan struktur data `buku` yang memiliki atribut-atribut seperti judul buku, pengarang, penerbit, tebal halaman, dan harga buku.
2. Sebuah konstanta `JUMLAH_BUKU` didefinisikan untuk menentukan jumlah buku favorit yang akan dimasukkan.
3. Program mendeklarasikan array `favorit` dari tipe `buku` dengan ukuran sejumlah `JUMLAH_BUKU`.
4. Menggunakan loop `for`, program meminta pengguna untuk memasukkan informasi tentang setiap buku favorit. Informasi yang diminta meliputi judul buku, pengarang, penerbit, tebal halaman, dan harga buku.
5. Setelah pengguna memasukkan informasi untuk setiap buku, program menggunakan loop `for` lagi untuk menampilkan informasi tersebut ke layar.
6. Setelah semua informasi ditampilkan, program selesai dieksekusi.

Berikut adalah penjelasan mengenai kode program yang digunakan: 
1. **Pendefinisian Struktur Data `buku`:**
   - Struktur data `buku` didefinisikan dengan lima atribut: `judulBuku`, `pengarang`, `penerbit`, `tebalHalaman`, dan `hargaBuku`. Ini memungkinkan program untuk menyimpan informasi tentang buku dalam struktur yang terorganisir.

2. **Fungsi Utama (`main()`):**
   - Fungsi utama program dimulai di sini.
  
3. **Deklarasi Konstanta `JUMLAH_BUKU`:**
   - Sebuah konstanta `JUMLAH_BUKU` didefinisikan dengan nilai 3, menunjukkan bahwa program akan meminta informasi untuk tiga buku favorit.

4. **Deklarasi Array `favorit` dari Tipe `buku`:**
   - Array `favorit` dideklarasikan sebagai array dari tipe `buku` dengan ukuran sesuai dengan `JUMLAH_BUKU`. Ini akan digunakan untuk menyimpan informasi tentang buku-buku favorit yang dimasukkan oleh pengguna.

5. **Mengisi Data Buku Favorit:**
   - Program menggunakan loop `for` untuk mengulangi proses meminta pengguna untuk memasukkan informasi tentang setiap buku favorit.
   - Setiap atribut dari setiap buku favorit dimasukkan menggunakan `getline()` untuk judul, pengarang, dan penerbit, serta `cin` untuk tebal halaman dan harga buku.

6. **Menampilkan Informasi Buku Favorit:**
   - Setelah pengguna memasukkan informasi untuk setiap buku, program menggunakan loop `for` lagi untuk menampilkan informasi tentang setiap buku favorit.
   - Informasi seperti judul buku, pengarang, penerbit, tebal halaman, dan harga buku ditampilkan ke layar menggunakan `cout`.

7. **Penanganan `cin.ignore()`:**
   - Setelah mengambil input untuk harga buku, `cin.ignore()` digunakan untuk membersihkan newline character (\n) dari buffer input, sehingga tidak mempengaruhi input berikutnya.

8. **Mengembalikan Nilai 0:**
   - Fungsi `main()` mengembalikan nilai 0, menandakan bahwa program telah berjalan dengan sukses.

###### Output

<img width="960" alt="Screenshot 2024-04-20 132823" src="https://github.com/Ikawida/TUGAS-PRAKTIKUM-ALSTRUKDAT/assets/157208863/27baba55-75bb-4492-bcbb-70f71f993320">

<img width="960" alt="Screenshot 2024-04-20 132906" src="https://github.com/Ikawida/TUGAS-PRAKTIKUM-ALSTRUKDAT/assets/157208863/11809d5e-a311-4b5d-8faf-085f0e04e796">

## Kesimpulan 

berikut adalah kesimpulan mengenai materi struct yang sudah diberikan:

Dalam bahasa pemrograman C++, `struct` adalah fitur yang memungkinkan pengguna untuk membuat tipe data baru yang terdiri dari beberapa tipe data yang berbeda. Dengan `struct`, kita dapat membuat struktur data yang terorganisir untuk merepresentasikan entitas yang kompleks seperti buku, mahasiswa, atau produk. `struct` memungkinkan pengelompokan data yang terkait menjadi satu kesatuan yang dapat diakses dan dimanipulasi bersama. Selain itu, `struct` juga mempermudah pembuatan program dengan membuat kode lebih terstruktur dan mudah dibaca. Dengan fleksibilitasnya, `struct` adalah salah satu fitur yang paling sering digunakan dalam C++ dan bahasa pemrograman lainnya, membantu pengembang dalam membangun program yang lebih efisien dan terstruktur.

## Daftar Pustaka 

[1] R. Firliana, R. Rina, dan P. Kasih, "Struktur Data yang Terorganisir," dalam Algoritma dan Pemrograman C++, Adjie Media Nusantara, Hal.1-82, 2018.

[2] E. L. Pratiwi, Konsep Dasar Algoritma dan Pemrograman dengan Bahasa C++. Banjarmasin: Poiban Press, 2020.

[3] Thompson Susabda Ngoen, "Pengantar Algoritma dengan Bahasa C," Salemba Teknika, Jakarta, 2020.

[4] Hubbard, J. R., Schaum’s outline of theory and problems of data structures with C++. New York: McGraw-Hil; 2020. 