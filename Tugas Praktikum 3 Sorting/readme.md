<h1 align="center">Laporan Praktikum Modul 3 Sorting</h1>
<p align="center"> Nama: Ika Wida Nuragustin</p>
<p align="center"> NIM: 2311110001</p>
<p align="center"> Kelas: S1SD-04A</p>

## Dasar Teori
Algoritma merupakan suatu prosedur logis dalam pemecahan suatu masalah yang sangat penting  yang  diprioritaskan  bagi  setiap developer.  Algoritma  yang  dirancang  dan  dipilih  secara tidak tepat, dapat mengakibatkan proses eksekusi program dari segi waktu menjadi lama dan dari segi  penggunaan  memori  yang  banyak,  bahkan  tidak  menutup  kemungkinan  menyebabkan kerusakan  pada  baik  pada  sistem  maupun  perangkat.  Akibat  dari  pemilihan  strategi  algoritma yang tidak tidap tersebut dan program yang berjalan menjadi tdiak efisien menyebabkan sistem tidak  bekerja  secara  maksimal  serta  pengguna  sistem  banyak  yang  mengeluh  karena  prosesnya yang lamban [1].
Setiap  program  terutama  berkaitan  dengan  sistem  informasi  akan  berhubungan  erat dengan penggunaan data atau pengolahan data dalam sistem tersebut. Semakin banyak data pada sistem,  bahkan  semakin  banyak  variasi  peruntukan  data  pada  sistem  yang  dibangun,  akan menghasilkan pengolahan  data  menjadi  tidak  mudah  dan  masalahnya  akan menjadi  kompleks. Dalam  proses  tahapan  pengolahan  data  dalam  sistem  yang  umum  digunakan  adalah  algoritma pencarian dan pengurutan. Algoritma pengurutan memerlukan strategi yang tepat agar data lebih mudah  di  baca  dan  di  proses  nantinya.  Sampai  saat  ini,  banyak  strategi  algoritma  dalam pengurutan atau sorting yang umum digunakan oleh para programmer diantaranya adalah bubble, selection, insertion, shell, merge dan quick sort [2].
Pengurutan (sorting) adalah proses penyusunan sekumpulan objek dalam aturan tertentu atau susunan tertentu. Secara umum pengurutan terbagi atas dua jenis yaitu ascending (urut naik) dan descending (urut turun). Pengurutan data sangat berguna karena data yang terurut akan lebih mudah diperiksa dan diperbaiki jika terdapat kesalahan. Ada berbagai macam algoritma pengurutan data di antaranya adalah Bubble Sort, Merge Sort, Shell Sort, Radix Sort, Quick Sort, dan sebagainya. Namun demikian, pemilihan algoritma pengurutan biasanya didasarkan pada kesederhanaan kecepatan pemrosesan selama pengurutan [3].
Secara umum ada dua jenis pengurutan data yaitu [Ramadhani, 2015]: 1) Model urut naik (ascending) yang mengurutkan data dari yang mempunyai nilai terkecil sampai terbesar. 2) Model urut turun(descending) yang mengurutkan data dari yang mempunyai nilai terbesar sampai terkecil. 
Berikut adalah penjelasan mengenai beberapa jenis sorting: 

- Insertion Sort 
Algoritma insertion sort, adalah metode pengurutan dengan cara menyisipkan elemen 
data pada posisi yang tepat. Pencarian posisi yang tepat dilakukan dengan melakukan 
pencarian berurutan didalam barisan elemen, selama pencarian posisi yang tepat dilakukan 
pergeseran elemen. Pengurutan insertion sort sangat mirip dengan konsep permainan kartu, bahwa setiap kartu disisipkan secara berurutan dari kiri ke kanan sesuai dengan besar nilai kartu tersebut, dengan syarat apabila sebuah kartu disisipkan pada posisi tertentu kartu yang lain akan bergeser maju atau mundur sesuai dengan besaran nilai yang dimiliki. 
- Bubble Sort 
Bubble sort adalah algoritma pengurutan yang menggunakan prinsip pengurutan berdasarkan perbandingan elemen di sebelah satu sama lain. Pengurutan dilakukan dengan menyisipkan elemen ke posisi yang sesuai dengan urutan yang diinginkan. Algoritma ini menggunakan looping yang dilakukan sampai semua elemen terurut.  Cara kerja algoritma ini adalah mengulang proses, melakukan perbandingan 
antara setiap elemen array dan melakukan penggantian posisi jika urutannya sudah benar. Perbandingan setiap elemen 
dari array ini berlanjut berjalan sampai kondisi yang ditentukan terpenuhi [4].
- Selection Sort
Selection sort adalah metode pengurutan data yang membandingkan item saat ini dengan item berikutnya dengan item terbaru atau item terakhir. Jika elemen lain ditemukan lebih kecil dari elemen saat ini, ia dihapus dari posisinya dan segera ditukar atau diganti. Metode selection sort adalah memilih nilai minimum, dan kemudian bertukar dengan item 
pertama, Kemudian bandingkan elemen saat ini dengan item berikutnya, dan terus bandingkan sampai tidak ada pertukaran data [5].

## Langkah Praktikum 

### 1. Guided 1
#### Kode Program 

```C++
// bubble sorting
#include <iostream>

using namespace std;

void bubble_sort(double arr[], int length){
    bool not_sorted = true;
    int j=0;
    double tmp;

    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }//end of if
        }//end of for loop
    }//end of while loop
}//end of bubble_sort

void print_array(double a[], int length) {
    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {

    int length = 5;
    double a[] = {22.1, 15.3, 8.2, 33.21, 99.99};

    cout << "Urutan bilangan sebelum sorting: " << endl;
    print_array(a, length);

    bubble_sort(a, length);

    cout << "\nUrutan bilangan setelah sorting: " << endl;
    print_array(a, length);
}
```
#### Output

<img width="960" alt="Screenshot 2024-03-27 084135" src="https://github.com/Ikawida/TUGAS-PRAKTIKUM-ALGORITMA-STRUKDAT/assets/157208863/aa2f232a-2637-447e-8c41-c1ad8c7b37e2">

#### Interpretasi 

Program diatas adalah implementasi algoritma pengurutan gelembung (bubble sort) untuk mengurutkan sebuah array bilangan desimal dalam urutan menaik. Berikut adalah penjelasan setiap bagian dari program:

1. `#include <iostream>`: Ini adalah preprocessor directive yang menyertakan pustaka standar input-output stream (iostream). Pustaka ini digunakan untuk operasi input-output dalam program C++.

2. `using namespace std;`: Ini adalah pernyataan yang mengatakan kepada kompiler bahwa kita akan menggunakan namespace `std`, yang berisi semua fungsi dan objek standar C++ seperti `cout` dan `endl`.

3. `void bubble_sort(double arr[], int length)`: Ini adalah deklarasi fungsi `bubble_sort`. Fungsi ini akan mengurutkan array `arr` yang berisi elemen double dengan panjang `length`.

4. `void print_array(double a[], int length)`: Ini adalah deklarasi fungsi `print_array`. Fungsi ini akan mencetak array `a` yang berisi elemen double dengan panjang `length`.

5. `int main() { ... }`: Ini adalah fungsi utama dari program. Semua kode yang akan dieksekusi dimulai dari sini.

6. `int length = 5;`: Ini mendefinisikan panjang array yang akan diurutkan.

7. `double a[] = {22.1, 15.3, 8.2, 33.21, 99.99};`: Ini adalah inisialisasi array `a` dengan elemen-elemennya.

8. `cout << "Urutan bilangan sebelum sorting: " << endl;`: Ini mencetak pesan untuk menunjukkan bahwa array sebelum diurutkan akan dicetak.

9. `print_array(a, length);`: Memanggil fungsi `print_array` untuk mencetak isi array sebelum diurutkan.

10. `bubble_sort(a, length);`: Memanggil fungsi `bubble_sort` untuk mengurutkan array.

11. `cout << "\nUrutan bilangan setelah sorting: " << endl;`: Ini mencetak pesan untuk menunjukkan bahwa array setelah diurutkan akan dicetak.

12. `print_array(a, length);`: Memanggil fungsi `print_array` untuk mencetak isi array setelah diurutkan.

#### Kompleksitas Waktu

Kompleksitas waktu dari program tersebut terutama ditentukan oleh algoritma pengurutan yang digunakan, yaitu bubble sort. Algoritma bubble sort memiliki kompleksitas waktu rata-rata dan terburuk O(n^2), di mana n adalah jumlah elemen dalam array yang diurutkan.

Dalam konteks program ini, terdapat dua panggilan fungsi utama yang memengaruhi kompleksitas waktu:

1. Panggilan `bubble_sort(a, length)` untuk mengurutkan array `a`. Kompleksitas waktu dari operasi ini adalah O(n^2), karena di dalamnya terdapat dua loop bersarang, di mana masing-masing loop akan melakukan iterasi sebanyak `length` kali. Karena loop dalam pertama akan berjalan sebanyak `length` kali, dan setiap iterasi akan berjalan sebanyak `(length - j)` kali (dimana `j` adalah nomor iterasi luar saat ini), total iterasi adalah `(length-1) + (length-2) + ... + 1`, yang merupakan deret aritmatika dengan jumlah `(n*(n-1))/2`, yang dapat disederhanakan menjadi O(n^2).

2. Panggilan `print_array(a, length)` untuk mencetak array. Kompleksitas waktu operasi ini adalah O(n), karena hanya satu loop yang berjalan sebanyak `length` kali, di mana setiap iterasi hanya melibatkan operasi sederhana untuk mencetak satu elemen.

Karena operasi utama yang mempengaruhi kompleksitas waktu adalah pengurutan array dengan bubble sort, kompleksitas waktu keseluruhan program ini adalah O(n^2). Ini berarti waktu yang dibutuhkan untuk menjalankan program akan meningkat secara kuadrat dengan peningkatan jumlah elemen yang perlu diurutkan. Jadi, semakin besar jumlah elemen dalam array, semakin lama waktu eksekusi program.

### 2. Guided 2
#### Kode Program 
```C++

// insertion sorting

# include <iostream>

using namespace std;

void insertion_sort(char arr[], int length) {
    int i, j;
    char tmp;

    for (i = 1; i < length; i++) {
        j = i;

        while (j > 0 && arr[j - 1] < arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }// end of while loop
    }// end of for loop
}

void print_array(char a[], int length) {

    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}
int main() {

    int length = 6;
    char a[length] = {'c', 'f', 'a', 'z', 'd', 'p'};

    cout << "Urutan karakter sebelum sorting: " << endl;
    print_array(a, length);

    insertion_sort(a, length);

    cout << "nUrutan karakter setelah sorting: " << endl;
    print_array(a, length);
}
```
#### Output 

<img width="960" alt="Screenshot 2024-03-27 084253" src="https://github.com/Ikawida/TUGAS-PRAKTIKUM-ALGORITMA-STRUKDAT/assets/157208863/bcccf9d3-99fb-41cd-a4c6-c63db92574b2">

#### Interpretasi

Program diatas adalah implementasi algoritma pengurutan penyisipan (insertion sort) untuk mengurutkan sebuah array dari karakter dalam urutan menurun. Berikut penjelasan setiap bagian dari program:

1. ```# include <iostream>```: Ini adalah direktif pra-prosesor untuk mengimpor pustaka input-output standar C++ yang memungkinkan penggunaan fungsi-fungsi input-output standar seperti `cout` dan `endl`.

2. ```using namespace std;```: Mendeklarasikan bahwa program akan menggunakan namespace `std`. Hal ini menghindari penulisan `std::` sebelum setiap penggunaan fungsi atau objek dari namespace standar.

3. ```void insertion_sort(char arr[], int length)```: Ini adalah definisi fungsi `insertion_sort` yang menerima dua parameter, yaitu sebuah array karakter (`arr[]`) dan panjang array (`length`). Fungsi ini bertugas untuk mengurutkan array karakter secara menurun menggunakan algoritma pengurutan penyisipan.

4. ```int i, j;```: Deklarasi variabel `i` dan `j` yang akan digunakan sebagai variabel iterasi dalam proses pengurutan.

5. ```char tmp;```: Variabel sementara (`tmp`) bertipe karakter yang akan digunakan untuk pertukaran nilai antara elemen-elemen array saat proses pengurutan.

6. ```for (i = 1; i < length; i++)```: Inisialisasi loop `for` untuk melakukan pengulangan sebanyak `length - 1` kali, dimulai dari indeks kedua array.

7. ```j = i;```: Setiap kali iterasi dimulai, variabel `j` diinisialisasi dengan nilai `i`.

8. ```while (j > 0 && arr[j - 1] < arr[j])```: Ini adalah loop `while` yang bertujuan untuk membandingkan elemen array sebelumnya dengan elemen saat ini dan menukar posisi jika elemen sebelumnya lebih kecil dari elemen saat ini. Loop ini berlanjut selama `j` lebih besar dari 0 dan elemen sebelumnya kurang dari elemen saat ini.

9. ```tmp = arr[j];```, ```arr[j] = arr[j - 1];```, ```arr[j - 1] = tmp;```: Ini adalah langkah-langkah pertukaran nilai antara elemen array yang dilakukan jika kondisi dalam loop `while` terpenuhi.

10. ```void print_array(char a[], int length)```: Ini adalah definisi fungsi `print_array` yang bertugas untuk mencetak elemen-elemen array karakter ke layar.

11. ```for(int i=0; i<length; i++)```: Inisialisasi loop `for` untuk melakukan pengulangan sebanyak `length` kali, dimulai dari indeks pertama array.

12. ```cout << a[i] << "\t";```: Mencetak elemen array pada indeks ke-i diikuti dengan karakter tab (`\t`).

13. ```cout << endl;```: Mencetak karakter baru (`endl`) untuk mengakhiri baris setelah semua elemen array tercetak.

14. `int main() { ... }`: Ini adalah fungsi utama dari program yang akan dieksekusi terlebih dahulu saat program dijalankan.

15. `int length = 6;`: Deklarasi dan inisialisasi variabel `length` dengan nilai 6 yang merupakan panjang array.

16. `char a[length] = {'c', 'f', 'a', 'z', 'd', 'p'};`: Deklarasi dan inisialisasi array `a` dengan elemen-elemen karakter yang sudah diberikan.

17. ```insertion_sort(a, length);```: Memanggil fungsi `insertion_sort` untuk mengurutkan array `a`.

18. ```print_array(a, length);```: Memanggil fungsi `print_array` untuk mencetak array `a` setelah diurutkan.

#### Kompleksitas Waktu

Dalam program tersebut, algoritma yang digunakan untuk mengurutkan array karakter adalah algoritma pengurutan penyisipan (insertion sort). Untuk menganalisis kompleksitas waktu algoritma ini dalam konteks program, kita perlu memperhatikan bagaimana waktu eksekusi algoritma bergantung pada ukuran input, yaitu panjang array yang perlu diurutkan.

Algoritma pengurutan penyisipan (insertion sort) bekerja dengan cara membandingkan setiap elemen dengan elemen-elemen sebelumnya dalam array dan menukarnya jika perlu sehingga elemen tersebut berada pada posisi yang tepat dalam urutan yang diinginkan. Ini dilakukan secara iteratif untuk setiap elemen dalam array.

Dalam program yang diberikan, proses pengurutan dilakukan dalam loop `for` yang mengiterasi melalui setiap elemen dalam array. Di dalam loop tersebut, terdapat loop `while` yang secara efektif menggeser setiap elemen yang lebih kecil ke posisi yang sesuai, sehingga keseluruhan array terurut.

Berikut adalah rincian mengenai kompleksitas waktu dalam program tersebut:

- Loop eksternal (`for` loop) iterasi sebanyak `n - 1` kali, di mana `n` adalah panjang array. Ini karena elemen terakhir tidak perlu dipertimbangkan lagi setelah semua elemen sebelumnya sudah diposisikan dengan benar.
- Di dalam loop eksternal, terdapat loop `while` yang berpotensi berjalan sebanyak `n` kali untuk setiap iterasi loop eksternal. Ini karena pada setiap iterasi, algoritma memindahkan elemen ke posisi yang sesuai, yang pada kasus terburuknya dapat mencapai posisi paling awal dalam array.
- Meskipun loop `while` tampaknya bergantung pada indeks `j`, perlu diingat bahwa itu hanya berjalan untuk elemen saat ini (`arr[i]`) dan elemen sebelumnya, yang pada totalnya maksimal sebanyak `n` kali.

Oleh karena itu, keseluruhan kompleksitas waktu dari algoritma pengurutan penyisipan dalam program ini adalah \(O(n^2)\), di mana \(n\) adalah panjang array yang perlu diurutkan. Ini menunjukkan bahwa waktu eksekusi algoritma akan meningkat secara kuadratik seiring dengan peningkatan ukuran input (panjang array).

## Tugas Praktikum 

### 1. Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerimalembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma Selection Sort! 

#### Kode Program 
```C++

#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk mengurutkan IPS dengan algoritma Selection Sort
void selectionSort(vector<double> &arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        int max_index = i;
        // Mencari indeks nilai maksimum dalam sisa array
        for (int j = i+1; j < n; j++) {
            if (arr[j] > arr[max_index]) {
                max_index = j;
            }
        }
        // Menukar nilai maksimum dengan elemen pertama dalam sisa array
        swap(arr[i], arr[max_index]);
    }
}

int main() {
    // IPS mahasiswa
    vector<double> ips = {3.8, 2.9, 3.3, 4.0, 2.4};

    // Menampilkan IPS sebelum diurutkan
    cout << "IPS sebelum diurutkan:" << endl;
    for (double ip : ips) {
        cout << ip << " ";
    }
    cout << endl;

    // Memanggil fungsi selectionSort untuk mengurutkan IPS
    selectionSort(ips);

    // Menampilkan IPS setelah diurutkan
    cout << "\nIPS setelah diurutkan:" << endl;
    for (double ip : ips) {
        cout << ip << " ";
    }
    cout << endl;

    return 0;
}

```
#### Output

<img width="960" alt="Screenshot 2024-03-27 084425" src="https://github.com/Ikawida/TUGAS-PRAKTIKUM-ALGORITMA-STRUKDAT/assets/157208863/1be85644-1695-46ee-862c-39b74d7e1f0b">

#### Interpretasi

Berikut adalah penjelasan mengenai bagian dari setiap kode program yang digunakan:

1. **Header File**:
   - Baris `#include <iostream>` mengimpor header file iostream yang memberikan akses ke fungsi input/output standar seperti `std::cout` dan `std::endl`.
   - Baris `#include <vector>` mengimpor header file vector yang menyediakan struktur data vektor, yang digunakan untuk menyimpan nilai-nilai IPS mahasiswa.

2. **Namespace**:
   - Pendeklarasian `using namespace std;` memungkinkan penggunaan fungsi dan objek standar C++ dari namespace `std` tanpa menambahkan `std::` sebelumnya. Ini membuat kode lebih mudah dibaca dan ditulis.

3. **Fungsi Selection Sort**:
   - Fungsi `void selectionSort(vector<double> &arr) { ... }` mengimplementasikan algoritma Selection Sort untuk mengurutkan nilai-nilai IPS dalam vektor.
   - Variabel `n` digunakan untuk menyimpan jumlah elemen dalam vektor `arr`.
   - Terdapat loop luar yang iterasi melalui setiap elemen vektor kecuali elemen terakhir. Ini merupakan langkah untuk menentukan posisi elemen terbesar pada setiap iterasi.
   - Di dalam loop luar, terdapat loop dalam yang mencari nilai maksimum dalam sisa vektor yang belum diurutkan.
   - Setelah nilai maksimum ditemukan, dilakukan pertukaran nilai maksimum dengan elemen pertama yang belum diurutkan.

4. **Fungsi Main**:
   - Fungsi `int main() { ... }` merupakan titik masuk utama program.
   - Pertama-tama, sebuah vektor `ips` dibuat untuk menyimpan nilai-nilai IPS mahasiswa.
   - Nilai-nilai IPS sebelum diurutkan kemudian ditampilkan dengan menggunakan loop `for` dan `std::cout`.
   - Fungsi `selectionSort` dipanggil untuk mengurutkan nilai-nilai IPS dalam vektor.
   - Setelah diurutkan, nilai-nilai IPS yang telah diurutkan ditampilkan kembali menggunakan loop `for` dan `std::cout`.
   - Program kemudian mengembalikan nilai 0 untuk menandakan bahwa program telah berjalan dengan sukses.

#### Kompleksitas Waktu

Kompleksitas waktu dari program bergantung pada algoritma pengurutan yang digunakan. Dalam hal ini, program menggunakan algoritma Selection Sort untuk mengurutkan nilai-nilai IPS mahasiswa. Kompleksitas waktu dari Selection Sort adalah ( O(n^2) ), di mana ( n ) adalah jumlah elemen yang akan diurutkan.

Algoritma Selection Sort memiliki dua loop bersarang. Loop luar berjalan ( n ) kali, sedangkan loop dalam berjalan ( n-1 ) kali di setiap iterasi loop luar. Dalam setiap iterasi loop dalam, kita mencari nilai maksimum dalam sisa array yang belum diurutkan, yang memerlukan waktu ( O(n) ). Jumlah total operasi yang dilakukan adalah sekitar ( n^2 ).

Oleh karena itu, kompleksitas waktu dari program ini adalah ( O(n^2)), di mana ( n ) adalah jumlah nilai-nilai IPS mahasiswa yang akan diurutkan. Ini berarti bahwa waktu eksekusi program akan meningkat secara kuadratik seiring dengan peningkatan jumlah mahasiswa. Jika jumlah mahasiswa meningkat, waktu yang dibutuhkan untuk menyelesaikan pengurutan akan meningkat lebih cepat daripada jumlah mahasiswa itu sendiri.

### 2. Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo, dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan namanama tersebut sesuai dengan alfabet. Buatlah program untuk membantu Pak RT dengan menggunakan algoritma Bubble Sort!

#### Kode Program 
```C++
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bubbleSort(vector<string> &names) {
    // Mendefinisikan fungsi bubbleSort yang menerima vector string sebagai parameter
    int n = names.size(); // Mendapatkan panjang vektor
    for (int i = 0; i < n-1; i++) { // Loop untuk iterasi melalui semua elemen kecuali elemen terakhir
        for (int j = 0; j < n-i-1; j++) { // Loop untuk melakukan perbandingan dan pertukaran
            if (names[j] > names[j+1]) { // Membandingkan elemen saat ini dengan elemen berikutnya
                swap(names[j], names[j+1]); // Menukar elemen jika elemen saat ini lebih besar dari elemen berikutnya
            }
        }
    }
}

int main() {
    vector<string> names = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};

    cout << "Nama sebelum diurutkan:" << endl;
    for (const string &name : names) { // Loop untuk menampilkan nama-nama sebelum diurutkan
        cout << name << " ";
    }
    cout << endl;

    bubbleSort(names); // Memanggil fungsi bubbleSort untuk mengurutkan nama-nama

    cout << "\nNama setelah diurutkan:" << endl;
    for (const string &name : names) { // Loop untuk menampilkan nama-nama setelah diurutkan
        cout << name << " ";
    }
    cout << endl;

    return 0;
}

```
#### Output 

<img width="960" alt="Screenshot 2024-03-27 084541" src="https://github.com/Ikawida/TUGAS-PRAKTIKUM-ALGORITMA-STRUKDAT/assets/157208863/d7bdd1e6-9c66-4211-b248-ab1828fa0ed9">

#### Interpretasi 

Berikut adalah penjelasan mengenai setiap bagian dari program diatas:

1. **Header File**:
   - `#include <iostream>`: Ini adalah preprocessor directive untuk memasukkan file header iostream ke dalam program. Header ini menyediakan fungsi input/output standar (seperti `std::cout`, `std::cin`, `std::endl`) yang diperlukan untuk berinteraksi dengan pengguna melalui konsol.
   - `#include <vector>`: Preprocessor directive ini memasukkan file header vector ke dalam program. Header ini menyediakan struktur data vector yang digunakan untuk menyimpan kumpulan nama-nama warga Pak RT.
   - `#include <algorithm>`: Preprocessor directive ini memasukkan file header algorithm ke dalam program. Header ini menyediakan beberapa fungsi standar, termasuk fungsi `swap` yang digunakan dalam algoritma Bubble Sort.

2. **Namespace**:
   - `using namespace std;`: Ini adalah deklarasi menggunakan namespace `std`. Dengan menggunakan `using namespace std;`, kita dapat mengakses fungsi-fungsi standar C++ seperti `cout`, `cin`, dan `swap` tanpa menuliskan `std::` sebelumnya.

3. **Fungsi Bubble Sort**:
   - `void bubbleSort(vector<string> &names)`: Ini adalah implementasi algoritma Bubble Sort untuk mengurutkan vektor `names`. Fungsi ini menerima sebuah vektor string sebagai parameter dan mengurutkannya secara ascending.
   - Algoritma Bubble Sort: Dua loop bersarang digunakan untuk membandingkan dan menukar elemen-elemen vektor hingga vektor terurut sepenuhnya. Jika elemen saat ini lebih besar dari elemen berikutnya, mereka akan ditukar.

4. **Fungsi Main**:
   - `int main()`: Ini adalah fungsi utama dari program C++. Eksekusi program dimulai dari sini.
   - Membuat vektor `names` yang berisi nama-nama warga Pak RT.
   - Menampilkan nama-nama sebelum diurutkan menggunakan loop `for` dan `cout`.
   - Memanggil fungsi `bubbleSort` untuk mengurutkan nama-nama dalam vektor.
   - Menampilkan nama-nama setelah diurutkan menggunakan loop `for` dan `cout`.
   - Mengembalikan nilai 0 pada akhirnya untuk menunjukkan bahwa program telah berjalan dengan sukses.

#### Kompleksitas Waktu

Kompleksitas waktu dari program tersebut didominasi oleh algoritma Bubble Sort yang digunakan untuk mengurutkan nama-nama dalam vektor. Kompleksitas waktu dari algoritma Bubble Sort adalah (O(n^2)), di mana (n) adalah jumlah elemen dalam vektor.

Algoritma Bubble Sort melakukan dua loop bersarang untuk membandingkan dan menukar elemen-elemen secara berurutan sampai vektor terurut sepenuhnya. Dalam kasus terburuk, yaitu jika vektor tidak terurut sama sekali, algoritma Bubble Sort akan melakukan jumlah operasi yang berkembang secara kuadratik dengan jumlah elemen.

Jadi, kompleksitas waktu dari program tersebut adalah (O(n^2)), di mana (n) adalah jumlah nama-nama dalam vektor yang akan diurutkan. Semakin banyak nama dalam vektor, semakin banyak operasi perbandingan dan pertukaran yang diperlukan, sehingga waktu eksekusi program akan meningkat secara kuadratik.

### 3. Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun (descending)!

#### Kode Program 

```C++
#include <iostream>
#include <algorithm> // Untuk penggunaan fungsi sort()

using namespace std;

// Fungsi untuk menampilkan karakter sebelum sorting
void displayCharacters(const char characters[], int n) {
    cout << "Karakter sebelum pengurutan: ";
    for (int i = 0; i < n; ++i) {
        cout << characters[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Masukkan jumlah karakter (n): ";
    cin >> n;

    char characters[n];

    // Meminta pengguna untuk memasukkan karakter sejumlah n
    cout << "Masukkan " << n << " karakter:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Karakter ke-" << i + 1 << ": ";
        cin >> characters[i];
    }

    // Memanggil fungsi untuk menampilkan karakter sebelum pengurutan
    displayCharacters(characters, n);

    // Pengurutan karakter secara menaik (ascending)
    sort(characters, characters + n);

    // Menampilkan hasil pengurutan menaik
    cout << "\nHasil pengurutan menaik (ascending): ";
    for (int i = 0; i < n; ++i) {
        cout << characters[i] << " ";
    }

    // Pengurutan karakter secara menurun (descending)
    sort(characters, characters + n, greater<char>());

    // Menampilkan hasil pengurutan menurun
    cout << "\nHasil pengurutan menurun (descending): ";
    for (int i = 0; i < n; ++i) {
        cout << characters[i] << " ";
    }

    return 0;
}

```
#### Output 

<img width="960" alt="Screenshot 2024-03-27 090406" src="https://github.com/Ikawida/TUGAS-PRAKTIKUM-ALGORITMA-STRUKDAT/assets/157208863/28a31dcf-22c5-4c8d-8940-f8b5444f56d1">

#### Interpretasi

program tersebut meminta user untuk memasukkan sejumlah karakter, kemudian melakukan pengurutan karakter secara menaik dan menurun menggunakan algoritma pengurutan yang disediakan oleh pustaka `<algorithm>`, dan akhirnya menampilkan hasilnya. Berikut adalah penjelasan mengenai setiap bagian dari program tersebut:

1. **Direktif Preprocessor dan Library yang Digunakan**:
   - `#include <iostream>`: Mengimpor pustaka input-output standar C++, yang memungkinkan penggunaan fungsi-fungsi input-output standar seperti `cin` dan `cout`.
   - `#include <algorithm>`: Mengimpor pustaka `<algorithm>` yang berisi fungsi-fungsi algoritma umum, seperti fungsi `sort()` yang digunakan dalam program ini.

2. **Namespace**:
   - `using namespace std;`: Mendeklarasikan bahwa program akan menggunakan namespace `std`, sehingga kita tidak perlu menuliskan `std::` sebelum penggunaan fungsi atau objek dari namespace standar.

3. **Fungsi Utama**:
   - `int main() {`: Fungsi utama dari program yang akan dieksekusi pertama kali saat program dijalankan.

4. **Fungsi displayCharacters**:

    - Fungsi ini digunakan untuk menampilkan karakter sebelum dilakukan pengurutan.
    - Menerima array karakter dan ukuran array sebagai input.
    - Dalam fungsi ini, kita menggunakan loop untuk menampilkan setiap karakter dalam array.

5. **Meminta Jumlah Karakter**:
   - `int n;`: Meminta pengguna untuk memasukkan jumlah karakter (n) yang ingin diurutkan.
   - `cout << "Masukkan jumlah karakter (n): ";`: Menggunakan `cout` untuk menampilkan pesan kepada pengguna.
   - `cin >> n;`: Menggunakan `cin` untuk mengambil input jumlah karakter dari pengguna.

6. **Deklarasi Array Karakter**:
   - `char characters[n];`: Mendeklarasikan array `characters` yang berukuran n, yang akan menyimpan karakter-karakter yang dimasukkan oleh pengguna.

7. **Meminta dan Menyimpan Karakter dari Pengguna**:
   - Menggunakan loop `for` untuk meminta pengguna memasukkan karakter sebanyak n kali dan menyimpannya dalam array `characters`.

8. **Pengurutan Menaik**:
   - `sort(characters, characters + n);`: Menggunakan fungsi `sort()` dari pustaka `<algorithm>` untuk mengurutkan array `characters` secara menaik (ascending).

9. **Menampilkan Hasil Pengurutan Menaik**:
   - Menampilkan hasil pengurutan menaik dari karakter-karakter yang dimasukkan oleh pengguna.

10. **Pengurutan Menurun**:
    - `sort(characters, characters + n, greater<char>());`: Menggunakan fungsi `sort()` dari pustaka `<algorithm>` dengan argumen `greater<char>()` untuk mengurutkan array `characters` secara menurun (descending).

11. **Menampilkan Hasil Pengurutan Menurun**:
    - Menampilkan hasil pengurutan menurun dari karakter-karakter yang dimasukkan oleh pengguna.

#### Kompleksitas Waktu

Kompleksitas waktu dari program tersebut didominasi oleh proses pengurutan karakter, karena operasi pengurutan memiliki kompleksitas waktu yang lebih tinggi daripada operasi lainnya dalam program.

1. **Meminta input dari pengguna**: Operasi ini membutuhkan waktu konstan atau (O(1)), karena hanya melibatkan operasi input/output sederhana.

2. **Deklarasi array**: Deklarasi array `characters` dengan ukuran `n` membutuhkan waktu konstan atau (O(1)), karena ukuran array ditentukan oleh input pengguna.

3. **Loop untuk memasukkan karakter**: Operasi ini memiliki kompleksitas waktu (O(n)), karena loop akan dijalankan sebanyak (n) kali, di mana (n) adalah jumlah karakter yang dimasukkan pengguna.

4. **Pengurutan karakter secara menaik**: Penggunaan fungsi `sort()` dari pustaka `<algorithm>` memiliki kompleksitas waktu (O(n log n)) dalam kasus rata-rata dan kasus terburuk. Dalam implementasi yang biasa digunakan (seperti introsort), kompleksitas waktu (O(n \log n)) terjadi saat mengurutkan (n) elemen. Dalam kasus ini, (n) adalah jumlah karakter yang dimasukkan oleh pengguna.

5. **Menampilkan hasil pengurutan**: Operasi ini memiliki kompleksitas waktu (O(n)), karena loop akan dijalankan sebanyak (n) kali untuk mencetak setiap karakter yang telah diurutkan.

Jadi, kompleksitas waktu keseluruhan dari program ini adalah (O(n log n)), di mana (n) adalah jumlah karakter yang dimasukkan pengguna. Ini karena kompleksitas waktu pengurutan karakter secara menaik yang didominasi oleh kompleksitas waktu (O(n log n)). Sedangkan operasi lainnya memiliki kompleksitas waktu yang lebih rendah.

## Kesimpulan 

Dari hasil praktikum dan tugas yang diberikan tentang algoritma pengurutan (sorting) dan implementasinya menggunakan insertion sort, bubble sort, dan selection sort, dapat ditarik beberapa kesimpulan sebagai berikut:

1. **Pentingnya Pengurutan**: Pengurutan adalah proses penting dalam pemrograman komputer yang memungkinkan data diatur dalam urutan yang diinginkan. Ini memudahkan pencarian, penyaringan, dan analisis data.

2. **Algoritma Pengurutan**: Ada berbagai algoritma pengurutan yang dapat digunakan, masing-masing dengan kelebihan dan kekurangan dalam hal kecepatan, kompleksitas, dan kinerja dalam situasi tertentu.

3. **Insertion Sort**: Insertion sort adalah algoritma sederhana yang secara iteratif membandingkan elemen-elemen array dan memindahkan setiap elemen ke posisi yang tepat dalam urutan yang diinginkan. Meskipun sederhana, insertion sort cenderung lambat untuk array besar karena memiliki kompleksitas waktu (O(n^2)).

4. **Bubble Sort**: Bubble sort adalah algoritma pengurutan sederhana yang secara berulang membandingkan pasangan elemen berturut-turut dalam array dan menukarnya jika diperlukan. Meskipun mudah dipahami, bubble sort tidak efisien untuk array besar karena memiliki kompleksitas waktu (O(n^2)).

5. **Selection Sort**: Selection sort adalah algoritma pengurutan sederhana yang secara iteratif mencari elemen terkecil dalam array dan menukar posisi elemen tersebut dengan elemen pertama, kedua, dan seterusnya. Meskipun memiliki kompleksitas waktu yang sama dengan insertion sort dan bubble sort, selection sort biasanya lebih cepat karena memiliki jumlah pertukaran yang lebih sedikit.

6. **Kompleksitas Waktu**: Algoritma pengurutan berbeda memiliki kompleksitas waktu yang berbeda. Sementara insertion sort, bubble sort, dan selection sort semuanya memiliki kompleksitas waktu (O(n^2)) dalam kasus terburuk, dalam situasi praktis, mereka mungkin cocok untuk jumlah data yang kecil atau jika faktor-faktor lain, seperti kestabilan atau kebutuhan memori, lebih penting daripada kecepatan.

7. **Pemilihan Algoritma**: Pemilihan algoritma pengurutan harus dipertimbangkan berdasarkan jenis data yang diurutkan, ukuran data, kebutuhan kinerja, dan faktor-faktor lainnya. Algoritma yang baik untuk satu situasi mungkin tidak efisien untuk yang lain.

8. **Praktikum dan Penerapan**: Praktikum tentang algoritma pengurutan memberikan pemahaman yang baik tentang bagaimana algoritma-algoritma ini bekerja dan bagaimana mereka diimplementasikan dalam kode. Dengan mencoba dan membandingkan berbagai algoritma, kita dapat memahami kelebihan dan kelemahan masing-masing, serta bagaimana mereka berperilaku dalam berbagai kondisi.

Dengan demikian, pemahaman tentang algoritma pengurutan, seperti insertion sort, bubble sort, dan selection sort, serta penerapan praktisnya, merupakan bagian penting dari keterampilan dasar dalam ilmu komputer dan pemrograman.

## Daftar Pustaka 
[1] E. L. Pratiwi, Konsep Dasar Algoritma dan Pemrograman dengan Bahasa Java. Banjarmasin: Poiban Press, 2020.

[2] E. Sunandar, "Perbandingan Metode Selection Sort dan Insertion Sort Dalam Pengurutan Data Menggunakan Bahasa Program Java," Petir, vol. 12, no. 2, pp. 172–178, 2019. 

[3] Sari, Nila, et al. "Analisis Algoritma Bubble Sort Secara Ascending Dan Descending Serta Implementasinya Dengan Menggunakan Bahasa Pemrograman Java." ADI Bisnis Digital Interdisiplin Jurnal 3.1, pp. 16-23, 2022.

[4] Triansyah, Heru. "Implemetasi Metode Bubble Sort dalam Pengurutan Indeks Prestasi Mahasiswa." JURNAL ILMIAH INFORMATIKA 7.01, pp. 48-53, 2019.

[5] K. Priambodo dan J. S. Wibowo, “Proceeding SENDIU 2021 IMPLEMENTASI ALGORITMA SELECTION SORT UNTUK PERANGKINGAN POIN PADA E-SPORTS TOURNAMENT GARUDA LEAGUE,” no. 2020, hal. 978–979, 2021.