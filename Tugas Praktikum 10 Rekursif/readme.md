# <h1 align="center">Laporan Praktikum Modul 10 Rekursif</h1>

<p align="center">Nama: Ika Wida Nuragustin</p>
<p align="center">NIM: 2311110001</p>
<p align="center">Kelas: SISD-04A</p>

## Dasar Teori

Rekursif adalah suatu proses atau prosedur dari fungsi yang memanggil dirinya sendiri secara berulang-ulang. Karena proses dalam Rekursif ini terjadi secara berulang-ulang maka harus ada kondisi yang membatasi pengulangan persebut, jika tidak maka proses tidak akan pernah berhenti sampai memori yang digunakan untuk menampung proses tersebut tidak dapat menampung lagi/penuh. Kelebihan Fungsi Rekursif adalah program menjadi lebih singkat. Pada beberapa kasus, lebih mudah menggunakan fungsi rekursif, contohnya: pangkat, factorial, dan fibonacci, dan beberapa proses deret lainnya [1]. Fungsi rekursif lebih efisien dan cepat dibandingkan proses secara iteratif. Kekurangan Fungsi Rekursif adalah memakan memori lebih besar, karena setiap bagian dari dirinya dipanggil, akan membutuhkan sejumlah ruang memori untuk penyimpanan. Rekursif sering kali tidak bisa berhenti sehingga memori akan terpakai habis dan program bisa hang. 

Rekursif berarti bahwa suatu proses bisa memanggil dirinya sendiri. Rekursif adalah kemampuan suatu rutin untuk memanggil dirinya sendiri. Dalam Rekursif sebenarnya terkandung pengertian prosedur dan fungsi. Perbedaannya adalah bahwa rekursif bisa memanggil ke dirinya sendiri, tetapi prosedur dan fungsi harus dipanggil lewat pemanggil prosedur dan fungsi [2].

Rekursif dibedakan menjadi dua jenis, yaitu Rekursif Langsung dan Rekursif Tidak Langsung. Rekursif Langsung terjadi ketika suatu fungsi memanggil dirinya sendiri secara langsung, tanpa memanggil fungsi lain. Rekursif Tidak Langsung terjadi ketika suatu fungsi memanggil fungsi lain yang kemudian memanggil fungsi asli [3].

- Rekursif Langsung:

Rekursif langsung terjadi ketika suatu fungsi memanggil dirinya sendiri secara langsung, tanpa memanggil fungsi lain. Dalam Rekursif langsung, fungsi memanggil dirinya sendiri dengan parameter yang berbeda, sehingga memungkinkan fungsi untuk memecahkan masalah yang kompleks dengan cara membaginya menjadi bagian yang lebih kecil dan lebih mudah dipahami.

Kelebihan Rekursif Langsung adalah program menjadi lebih singkat dan lebih mudah dipahami. Pada beberapa kasus, lebih mudah menggunakan fungsi rekursif langsung, seperti dalam contoh fungsi pangkat, faktorial, dan deret Fibbonacci [4].

Namun, Rekursif Langsung juga memiliki kekurangan. Kekurangan utama adalah memakan memori lebih besar, karena setiap bagian dari dirinya dipanggil, akan membutuhkan sejumlah ruang memori untuk penyimpanan. Rekursif Langsung sering kali tidak bisa berhenti sehingga memori akan terpakai habis dan program bisa hang.

- Rekursif Tidak Langsung

Dasar Teori Rekursif Tidak Langsung:

Rekursif tidak langsung terjadi ketika suatu fungsi memanggil fungsi lain yang kemudian memanggil fungsi asli. Dalam Rekursif tidak langsung, fungsi memanggil fungsi lain yang memiliki fungsi rekursif sendiri, sehingga memungkinkan fungsi untuk memecahkan masalah yang kompleks dengan cara membaginya menjadi bagian yang lebih kecil dan lebih mudah dipahami.

Kelebihan Rekursif Tidak Langsung adalah program menjadi lebih singkat dan lebih mudah dipahami. Pada beberapa kasus, lebih mudah menggunakan fungsi rekursif tidak langsung, seperti dalam contoh fungsi pangkat, faktorial, dan deret Fibbonacci [5].

Namun, Rekursif Tidak Langsung juga memiliki kekurangan. Kekurangan utama adalah memakan memori lebih besar, karena setiap bagian dari dirinya dipanggil, akan membutuhkan sejumlah ruang memori untuk penyimpanan. Rekursif Tidak Langsung sering kali tidak bisa berhenti sehingga memori akan terpakai habis dan program bisa hang.

## Langkah Praktikum 

### Guided 1

#### Kode Program
```C++
// Guided 1 Rekursif Langsung 

#include <iostream>

using namespace std;

void countdown(int n) {
    if (n == 0) {
        return;
    }

    cout << n << " ";
    countdown(n - 1);
}

int main( ) {
    cout << " Rekursif Langsung: ";
    countdown(5);
    cout << endl;
    return 0;
}
```
#### Output 

![Screenshot 2024-05-22 043124](https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/1e4b85b4-88d1-405a-8ab3-1127c4a23ee5)

#### Interpretasi

Berikut merupakan interpretasi dari kode program yang digunakan dalam program dan juga alur dari eksekusi program tersebut:

Interpretasi Kode Program:

1. **Pustaka dan Namespace**:
    - Program menggunakan pustaka standar untuk input/output (`iostream`) dan namespace `std` untuk menghindari penulisan `std::` sebelum objek-objek standar seperti `cout`.

2. **Fungsi Rekursif `countdown`**:
    - **Parameter dan Tipe Pengembalian**: Fungsi ini menerima satu parameter integer (`n`) dan tidak mengembalikan nilai (`void`).
    - **Kondisi Basis**: Jika `n` sama dengan 0, fungsi akan berhenti menjalankan dirinya sendiri (kembali).
    - **Proses Rekursif**: Jika `n` tidak sama dengan 0, fungsi mencetak nilai `n` diikuti dengan spasi, kemudian memanggil dirinya sendiri dengan nilai `n` yang dikurangi 1. Ini membuat fungsi terus memanggil dirinya sendiri dengan nilai yang berkurang hingga mencapai 0.

3. **Fungsi `main`**:
    - **Mencetak Teks Awal**: Mencetak teks " Rekursif Langsung: " ke layar.
    - **Memanggil Fungsi `countdown`**: Memulai proses rekursif dengan memanggil `countdown(5)`, yang akan mencetak hitungan mundur dari 5 hingga 1.
    - **Baris Baru**: Setelah hitungan mundur selesai, mencetak karakter newline untuk membuat baris baru.
    - **Pengakhiran Program**: Mengembalikan nilai 0 untuk menandakan bahwa program telah selesai dengan sukses.

Fungsi utama dari program ini adalah `countdown`, yang menerima satu parameter integer `n` dan tidak mengembalikan nilai. Fungsi ini bekerja secara rekursif untuk mencetak angka dari `n` hingga 1. Ketika `n` mencapai 0, fungsi berhenti memanggil dirinya sendiri, yang merupakan kondisi dasar untuk menghentikan rekursi. Jika `n` tidak sama dengan 0, fungsi mencetak nilai `n` diikuti spasi, kemudian memanggil dirinya sendiri dengan nilai `n` yang dikurangi 1.

Fungsi `main` adalah titik awal eksekusi program. Pertama, ia mencetak teks " Rekursif Langsung: " ke layar. Setelah itu, ia memanggil fungsi `countdown` dengan argumen 5, yang memulai proses rekursif untuk mencetak angka dari 5 hingga 1. Setelah pemanggilan rekursif selesai, `main` mencetak karakter newline untuk membuat baris baru, kemudian mengembalikan nilai 0 untuk menandakan bahwa program telah selesai dengan sukses. Hasil akhir dari eksekusi program ini adalah teks " Rekursif Langsung: " diikuti oleh angka 5, 4, 3, 2, dan 1 yang dicetak berurutan, masing-masing dipisahkan oleh spasi.

Alur Eksekusi Program:

1. Program dimulai dari fungsi `main`.
2. Mencetak " Rekursif Langsung: " ke layar.
3. Memanggil fungsi `countdown` dengan nilai `5`.
4. Di dalam fungsi `countdown`:
   - Jika `n` adalah 5, cetak `5 ` dan panggil `countdown(4)`.
   - Jika `n` adalah 4, cetak `4 ` dan panggil `countdown(3)`.
   - Jika `n` adalah 3, cetak `3 ` dan panggil `countdown(2)`.
   - Jika `n` adalah 2, cetak `2 ` dan panggil `countdown(1)`.
   - Jika `n` adalah 1, cetak `1 ` dan panggil `countdown(0)`.
   - Jika `n` adalah 0, fungsi berhenti memanggil dirinya sendiri (basis kasus) dan kembali ke pemanggil sebelumnya.
5. Setelah semua pemanggilan selesai, cetak baris baru dan program selesai.

### Guided 2

#### Kode Program
```C++
// Guided 2 Rekursif Tidak Langsung

#include <iostream>

using namespace std;

void functionB(int n);

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        functionB(n-1);
    }
}

void functionB(int n) {
    if (n > 0) {
        cout << n<< " ";
        functionB(n/2);
    }
}

int main( ) {
    int num= 5;
    cout << "Rekursif Tidak Langsung:";
    functionA(num);
    return 0;
}
```

#### Output 

![Screenshot 2024-05-22 043227](https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/d7e5e6d6-e462-4f3b-93b5-ee37c79ce1b3)

#### Interpretasi

Berikut merupakan interpretasi dari kode program yang digunakan dalam program dan juga alur dari eksekusi program tersebut:

Interpretasi Kode Program:

##### Header dan Namespace
- **#include <iostream>**: Menyertakan pustaka input/output standar C++.
- **using namespace std**: Agar bisa menggunakan fitur-fitur standar C++ seperti `cout` tanpa harus menambahkan `std::`.

##### Deklarasi Fungsi
- Mendeklarasikan `functionB` agar dapat digunakan dalam `functionA`.

##### Definisi Fungsi `functionA`
- **if (n > 0)**: Mengecek apakah `n` lebih besar dari 0.
- **cout << n << " ";**: Mencetak nilai `n` diikuti dengan spasi.
- **functionB(n-1)**: Memanggil `functionB` dengan nilai `n-1`.

##### Definisi Fungsi `functionB`
- **if (n > 0)**: Mengecek apakah `n` lebih besar dari 0.
- **cout << n << " ";**: Mencetak nilai `n` diikuti dengan spasi.
- **functionA(n/2)**: Memanggil `functionA` dengan nilai `n` dibagi 2.

##### Fungsi `main`
- **int num = 5;**: Mendeklarasikan dan menginisialisasi variabel `num` dengan nilai 5.
- **cout << "Rekursif Tidak Langsung:";**: Mencetak teks "Rekursif Tidak Langsung:".
- **functionA(num);**: Memanggil `functionA` dengan argumen `num` (nilai 5).

Alur Eksekusi Program:

1. Program mulai dari fungsi `main` dan mencetak "Rekursif Tidak Langsung:".
2. `functionA` dipanggil dengan nilai `n = 5`.
3. Di dalam `functionA`:
   - Karena `n > 0`, mencetak `5` diikuti spasi.
   - Memanggil `functionB` dengan nilai `n - 1 = 4`.
4. Di dalam `functionB`:
   - Karena `n > 0`, mencetak `4` diikuti spasi.
   - Memanggil `functionA` dengan nilai `n / 2 = 2`.
5. Di dalam `functionA`:
   - Karena `n > 0`, mencetak `2` diikuti spasi.
   - Memanggil `functionB` dengan nilai `n - 1 = 1`.
6. Di dalam `functionB`:
   - Karena `n > 0`, mencetak `1` diikuti spasi.
   - Memanggil `functionA` dengan nilai `n / 2 = 0`.
7. Di dalam `functionA`:
   - Karena `n` tidak lebih besar dari 0, fungsi berhenti dan tidak melakukan apa-apa.
8. Rekursi selesai dan kembali ke `main`, program berakhir.

Dalam program ini, terdapat dua fungsi, `functionA` dan `functionB`, yang saling memanggil secara bergantian. Fungsi `functionA` menerima satu parameter integer `n` dan mencetak nilai `n` jika lebih besar dari 0, kemudian memanggil `functionB` dengan parameter `n-1`. Sebaliknya, fungsi `functionB` juga menerima satu parameter integer `n`, mencetak nilai `n` jika lebih besar dari 0, kemudian memanggil `functionA` dengan parameter `n/2`.

Program dimulai dengan fungsi `main` yang menginisialisasi variabel `num` dengan nilai 5 dan mencetak teks "Rekursif Tidak Langsung:". Kemudian, `functionA` dipanggil dengan nilai `num` (5). Dalam `functionA`, karena `n` lebih besar dari 0, nilai 5 dicetak dan `functionB` dipanggil dengan nilai 4. Di dalam `functionB`, nilai 4 dicetak dan `functionA` dipanggil dengan nilai 2. Proses ini berlanjut dengan `functionA` mencetak 2 dan memanggil `functionB` dengan nilai 1, kemudian `functionB` mencetak 1 dan memanggil `functionA` dengan nilai 0. Karena `n` tidak lebih besar dari 0, pemanggilan rekursif berhenti.

Output dari program ini adalah "Rekursif Tidak Langsung: 5 4 2 1", di mana angka-angka tersebut dicetak secara bergantian oleh `functionA` dan `functionB` sesuai dengan logika rekursi tidak langsung yang telah diuraikan.

## Tugas Praktikum 

### Unguided 1

### Soal 
1. Buatlah sebuah program Rekursif Langsung (Direct Recursion) yang menghitung nilai faktorial dari sebuah inputan bilangan bulat positif!

```
Contoh Output:

Masukkan bilangan bulat positif: 5

Faktorial dari 5 adalah: 120
```

#### Kode Program
```C++
#include <iostream>

using namespace std;

// Fungsi rekursif untuk menghitung faktorial
int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int num;
    
    // Meminta pengguna untuk memasukkan bilangan bulat positif
    cout << "Masukkan bilangan bulat positif: ";
    cin >> num;
    
    // Mengecek apakah input adalah bilangan bulat positif
    if (num < 0) {
        cout << "Input tidak valid. Silakan masukkan bilangan bulat positif." << endl;
    } else {
        // Menghitung dan mencetak hasil faktorial
        int hasil = faktorial(num);
        cout << "Faktorial dari " << num << " adalah: " << hasil << endl;
    }

    return 0;
}
```

#### Output 

![Screenshot 2024-05-22 043405](https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/ba663cad-6e43-433f-8f02-fd84a3326acd)

#### Interpretasi
Berikut adalah interpretasi dari kode program tersebut:

1. **Deklarasi Fungsi `faktorial`**:
   - Fungsi `faktorial` merupakan sebuah fungsi rekursif yang bertujuan untuk menghitung nilai faktorial dari sebuah bilangan bulat positif.
   - Jika `n` sama dengan 0 atau 1, maka fungsi akan mengembalikan nilai 1 (kondisi dasar).
   - Jika `n` lebih besar dari 1, maka fungsi akan mengembalikan hasil perkalian dari `n` dengan nilai faktorial dari `n - 1`.

2. **Fungsi `main`**:
   - Program dimulai dengan fungsi `main`.
   - Pengguna diminta untuk memasukkan sebuah bilangan bulat positif.
   - Input yang dimasukkan oleh pengguna disimpan dalam variabel `num`.
   - Program memeriksa apakah input yang dimasukkan adalah bilangan bulat positif.
   - Jika input adalah bilangan bulat positif, program memanggil fungsi `faktorial` dengan parameter `num` untuk menghitung faktorialnya.
   - Hasil faktorial kemudian dicetak ke layar bersama dengan pesan yang menyertakan bilangan asli yang diinputkan.

3. **Contoh Output**:
   Jika pengguna memasukkan bilangan bulat positif 5, maka outputnya akan menjadi:
   ```
   Masukkan bilangan bulat positif: 5
   Faktorial dari 5 adalah: 120
   ```

Alur Kerja Program:

Pertama, program mendeklarasikan sebuah fungsi rekursif bernama `faktorial` yang mengambil satu parameter integer `n` dan mengembalikan nilai faktorial dari `n`. Dalam fungsi ini, terdapat kondisi dasar (base case) yang mengembalikan nilai 1 jika `n` sama dengan 0 atau 1. Jika `n` lebih besar dari 1, fungsi akan memanggil dirinya sendiri dengan parameter `n - 1` dan mengalikan hasilnya dengan `n`.

Selanjutnya, fungsi `main` adalah titik awal eksekusi program. Program meminta pengguna untuk memasukkan sebuah bilangan bulat positif. Input yang dimasukkan oleh pengguna disimpan dalam variabel `num`. Program memeriksa apakah input yang dimasukkan adalah bilangan bulat positif. Jika iya, program memanggil fungsi `faktorial` dengan parameter `num` untuk menghitung faktorialnya. Hasil faktorial kemudian dicetak ke layar bersama dengan pesan yang menyertakan bilangan asli yang diinputkan. Jika input tidak valid, program mencetak pesan error.

Penjelasan Output:

Output dari program ini terjadi karena proses rekursi yang terjadi di dalam fungsi `faktorial`. Ketika pengguna memasukkan sebuah bilangan bulat positif, program memanggil fungsi `faktorial` dengan nilai tersebut. Berikut adalah penjelasan mengapa output yang dihasilkan sesuai dengan faktorial dari bilangan yang dimasukkan:

1. Ketika fungsi `faktorial` dipanggil dengan nilai `n`, terjadi dua kemungkinan:
   - Jika `n` sama dengan 0 atau 1, maka kondisi dasar (base case) tercapai. Pada kondisi ini, fungsi mengembalikan nilai 1 sebagai hasil faktorial dari `n`.
   - Jika `n` lebih besar dari 1, maka fungsi akan melakukan pemanggilan rekursif dengan memanggil dirinya sendiri dengan parameter `n - 1`. Hasil rekursi ini akan dikalikan dengan `n` dan kemudian dikembalikan.

2. Proses rekursi terus berlangsung hingga mencapai kondisi dasar ketika `n` sama dengan 0 atau 1. Setiap kali fungsi `faktorial` dipanggil dengan nilai `n`, nilai `n` akan dikalikan dengan hasil rekursi dari `faktorial(n - 1)`.

3. Misalkan pengguna memasukkan nilai 5. Maka proses rekursi akan berjalan sebagai berikut:
   - `faktorial(5)` akan memanggil `faktorial(4)`.
   - `faktorial(4)` akan memanggil `faktorial(3)`.
   - `faktorial(3)` akan memanggil `faktorial(2)`.
   - `faktorial(2)` akan memanggil `faktorial(1)`.
   - Pada panggilan `faktorial(1)`, kondisi dasar tercapai dan fungsi mengembalikan nilai 1.
   - Hasil dari `faktorial(2)` adalah 2 dikalikan dengan hasil dari `faktorial(1)`, yang juga 1, sehingga menghasilkan nilai 2.
   - Hasil dari `faktorial(3)` adalah 3 dikalikan dengan hasil dari `faktorial(2)`, yang adalah 2, sehingga menghasilkan nilai 6.
   - Begitu seterusnya, hingga mencapai `faktorial(5)` yang menghasilkan nilai 120.

Maka output yang dihasilkan adalah "Faktorial dari 5 adalah: 120", sesuai dengan nilai faktorial dari bilangan bulat positif yang dimasukkan pengguna.

### Unguided 2

#### Soal

2. Buatlah versi program Rekursif Tidak Langsung (Indirect Recursion) dari soal nomor 1 diatas!

#### Kode Program
```C++
#include <iostream>

using namespace std;

// Deklarasi fungsi
int functionA(int n);
int functionB(int n);

int main() {
    int num;
    
    // Meminta pengguna untuk memasukkan bilangan bulat positif
    cout << "Masukkan bilangan bulat positif: ";
    cin >> num;
    
    // Mengecek apakah input adalah bilangan bulat positif
    if (num < 0) {
        cout << "Input tidak valid. Silakan masukkan bilangan bulat positif." << endl;
    } else {
        // Menghitung dan mencetak hasil faktorial menggunakan rekursi tidak langsung
        int hasil = functionA(num);
        cout << "Faktorial dari " << num << " adalah: " << hasil << endl;
    }

    return 0;
}

// Fungsi A untuk rekursi tidak langsung
int functionA(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * functionB(n - 1);
    }
}

// Fungsi B untuk rekursi tidak langsung
int functionB(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * functionA(n - 1);
    }
}
```

#### Output 

![Screenshot 2024-05-22 043447](https://github.com/Ikawida/TUGAS-ALSTRUKDAT-PRAKTIKUM/assets/157208863/cd8d5e1f-6722-4b83-be96-1924f3b8ad82)

#### Interpretasi

Berikut adalah penjelasan dari kode program yang digunakan:

Pada program ini, terdapat dua fungsi yaitu `functionA` dan `functionB`, yang saling memanggil satu sama lain untuk menghitung faktorial dari sebuah bilangan bulat positif. Berikut adalah interpretasi dari kode program tersebut:

1. **Fungsi `functionA`**:
    - Fungsi ini menerima satu parameter integer `n` yang merupakan bilangan untuk dihitung faktorialnya.
    - Jika `n` adalah 0 atau 1, fungsi mengembalikan nilai 1 sebagai kondisi dasar.
    - Jika `n` lebih besar dari 1, fungsi memanggil fungsi `functionB(n - 1)` dan mengalikan nilai `n` dengan hasil rekursi dari `functionB(n - 1)`.

2. **Fungsi `functionB`**:
    - Fungsi ini memiliki logika yang serupa dengan `functionA`, namun memanggil `functionA` dalam rekursi.
    - Jika `n` adalah 0 atau 1, fungsi mengembalikan nilai 1 sebagai kondisi dasar.
    - Jika `n` lebih besar dari 1, fungsi memanggil fungsi `functionA(n - 1)` dan mengalikan nilai `n` dengan hasil rekursi dari `functionA(n - 1)`.

3. **Fungsi `main`**:
    - Fungsi `main` merupakan titik awal program.
    - Program meminta pengguna untuk memasukkan sebuah bilangan bulat positif.
    - Jika bilangan yang dimasukkan oleh pengguna tidak positif, program memberikan pesan kesalahan.
    - Jika bilangan yang dimasukkan positif, program memanggil `functionA` dengan bilangan tersebut untuk menghitung faktorialnya.
    - Hasil faktorial kemudian dicetak ke layar.

Cara Kerja dari Program tersebut:

Dalam program ini, terdapat dua fungsi, yaitu `functionA` dan `functionB`, yang saling memanggil satu sama lain untuk menghitung nilai faktorial dari sebuah bilangan bulat positif yang dimasukkan oleh pengguna.

Fungsi `functionA` dan `functionB` memiliki logika yang serupa. Ketika dipanggil dengan sebuah bilangan bulat `n`, keduanya akan memeriksa apakah `n` adalah 0 atau 1. Jika iya, keduanya akan mengembalikan 1 sebagai nilai faktorial dari 0 atau 1 (kondisi dasar). Namun jika `n` lebih besar dari 1, keduanya akan melakukan pemanggilan rekursif. `functionA` akan memanggil `functionB` dengan parameter `n - 1`, sementara `functionB` akan memanggil `functionA` dengan parameter `n - 1`.

Dalam fungsi `main`, program meminta pengguna untuk memasukkan sebuah bilangan bulat positif. Setelah memeriksa apakah input yang dimasukkan adalah bilangan bulat positif, program akan memanggil `functionA` dengan bilangan tersebut untuk menghitung nilai faktorialnya. Hasil faktorial kemudian dicetak ke layar.

Program ini menggunakan rekursi tidak langsung untuk menghitung nilai faktorial dari bilangan bulat positif yang dimasukkan oleh pengguna.

Penjelasan Output: 

Output dari program tersebut terjadi karena proses rekursi tidak langsung yang terjadi antara dua fungsi, yaitu `functionA` dan `functionB`. Ketika pengguna memasukkan sebuah bilangan bulat positif, program akan memanggil `functionA` dengan nilai tersebut. Berikut adalah penjelasan mengapa output yang dihasilkan sesuai dengan faktorial dari bilangan yang dimasukkan:

1. Ketika fungsi `functionA` dipanggil dengan nilai `n`, terjadi dua kemungkinan:
   - Jika `n` sama dengan 0 atau 1, maka kondisi dasar (base case) tercapai. Pada kondisi ini, fungsi mengembalikan nilai 1 sebagai hasil faktorial dari `n`.
   - Jika `n` lebih besar dari 1, maka fungsi akan melakukan pemanggilan rekursif dengan memanggil `functionB(n - 1)`. Hasil rekursi ini akan dikalikan dengan `n` dan kemudian dikembalikan.

2. Ketika fungsi `functionB` dipanggil dengan nilai `n`, proses yang sama terjadi seperti pada `functionA`, namun kali ini fungsi `functionB` memanggil `functionA(n - 1)`.

3. Kedua fungsi ini saling memanggil satu sama lain secara bergantian, membentuk rekursi tidak langsung. Setiap kali fungsi `functionA` atau `functionB` dipanggil dengan nilai `n`, nilai `n` akan dikalikan dengan hasil rekursi dari pemanggilan fungsi yang lainnya.

4. Misalkan pengguna memasukkan nilai 5. Maka proses rekursi akan berjalan sebagai berikut:
   - Pertama, `functionA(5)` akan memanggil `functionB(4)`.
   - Kemudian, `functionB(4)` akan memanggil `functionA(3)`.
   - Proses ini berlanjut bergantian hingga mencapai kondisi dasar ketika `n` sama dengan 0 atau 1.
   - Hasil dari seluruh proses rekursi akan menghasilkan faktorial dari bilangan yang dimasukkan.

Maka output yang dihasilkan adalah "Faktorial dari 5 adalah: 120", sesuai dengan nilai faktorial dari bilangan bulat positif yang dimasukkan pengguna.

## Kesimpulan 

Berikut adalah kesimpulan mengenai materi rekursif:
- Rekursi adalah teknik yang kuat dalam pemrograman yang memungkinkan penyelesaian masalah kompleks dengan cara yang sederhana. Dengan memecah masalah menjadi submasalah yang lebih kecil, rekursi memungkinkan penulisan kode yang elegan dan mudah dimengerti.
- Setiap fungsi rekursif harus memiliki kondisi dasar atau base case yang membatasi rekursi agar tidak berlangsung tanpa batas. Kondisi dasar ini penting untuk mencegah terjadinya stack overflow dan memastikan bahwa rekursi berhenti saat masalah selesai dipecahkan.
- Rekursi sangat berguna untuk menangani struktur data rekursif seperti pohon dan daftar terkait. Penggunaan rekursi membuat operasi pada struktur data tersebut menjadi lebih sederhana dan mudah dipahami.
- Rekursi langsung adalah bentuk rekursi di mana sebuah fungsi memanggil dirinya sendiri secara langsung. Dalam rekursi langsung, fungsi yang dipanggil dan fungsi pemanggil berada dalam satu fungsi. Konsep ini memungkinkan penyelesaian masalah dengan memecahnya menjadi submasalah yang lebih kecil sampai mencapai kondisi dasar atau base case.
- Rekursi tidak langsung adalah bentuk rekursi di mana dua atau lebih fungsi saling memanggil satu sama lain secara bergantian untuk menyelesaikan sebuah masalah. Dalam rekursi tidak langsung, pemanggilan rekursif tidak terjadi secara langsung dari fungsi yang sama, melainkan terjadi melalui fungsi-fungsi yang berbeda.

## Daftar Pustaka

[1] F. Fitria and Y. Yunaini, "Penyelesaian Relasi Rekursif", *Jurnal Cakrawala Pendidikan*, vol. 26, no. 2, pp. 73-84, 2022.

[2] F. A. Twince Tobing, P. Prayogo, and A. Chandra, "Analisis Perbandingan Fibonacci dengan Iterasi dan Rekursi Terhadap Efektifitas Waktu", *Jurnal Sains dan Teknologi Widya*, vol. 1, no. 2, pp. 188-195, Jul. 2022.

[3] M. Musafa' and N. Meli, "Studi Pendugaan Rekursif dan Nilai Dugaan Proses Observasi Model Hidden Markov", *Imajiner: Jurnal Matematika dan Pendidikan Matematika* , vol. 2, no. 6, pp. 540-548, Nov. 2020. 

[4] R. Firliana, R. Rina, dan P. Kasih, "Struktur Data yang Terorganisir," dalam Algoritma dan Pemrograman C++, *Adjie Media Nusantara*, Hal.1-82, 2019.

[5] E. Lutfina, N. Inayati, and G. W. Saraswati, "Analisis Perbandingan Kinerja Metode Rekursif dan Metode Iteratif dalam Algoritma Linear Search", *Komputika: Jaringan Sistem Komputer*, vol. 11, no. 2, pp. 143-150, Oct. 2022. 
