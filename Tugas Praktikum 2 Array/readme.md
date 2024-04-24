# <h1 align="center">Laporan Praktikum Modul Array</h1>

<p align="center">Nama: Ika Wida Nuragustin</p>
<p align="center">NIM: 2311110001</p>
<p align="center">Kelas: SISD-04A</p>

## Dasar Teori

Array atau Larik adalah tipe terstruktur yang terdiri dari sejumlah elemen- elemen yang bertipe sama. Banyaknya elemen dalam suatu larik ditunjukkan oleh suatu indeks yang harus merupakan tipe data yang menyatakan keterurutan, misalnya integer atau karakter (karena ia menyatakan posisi data). Tiap-tiap elemen di larik dapat diakses langsung melalui indeksnya. Suatu larik memiliki jumlah elemen yang jumlahnya tetap, sehingga jumlah elemen larik tidak dapat diubah selama pelaksanaan program [1].

Larik dapat berupa larik satu dimensi ataupun lebih dari satu dimensi. Matriks merupakan contoh larik yang memiliki dimensi lebih dari satu. Struktur penyimpanan matriks di dalam memori utama yang setiap individu elemennya diakses dengan menggunakan dua buah indeks (yang biasanya dikonotasikan dengan baris dan kolom). Karena matriks sebenarnya adalah larik, konsep umum dari larik juga berlaku untuk matriks, yaitu:

- Kumpulan elemen yang bertipe sama, dapat dapat berupa tipe dasar (integer, real, boolean, char, dan string), atau tipe terstruktur seperti record.

- Setiap elemen data dapat diakses secara langsung jika indeksnya (baris dan kolom) diketahui.

- Merupakan struktur data yang statik, artinya jumlah elemennya sudah dideklarasikan terlebih dahulu di dalam bagian DEKLARASI dan tidak bisa diubah selama pelaksanaan program. Elemen matriks diakses melalui indeks baris dan indeks kolomnya. Jika indeks baris dinyatakan dengan i dan indeks kolom dinyatakan dengan j, maka notasi algoritmik untuk mengakses elemen pada baris i dan kolom jadalah nama_matriks[i,j].

### 1. Array 1 Dimensi

Array satu dimensi adalah kumpulan elemen-elemen identik yang tersusun dalam satu baris, tetapi isi dari elemen tersebut boleh berbeda. 

Array satu dimensi adalah struktur data yang terdiri dari sejumlah elemen yang disusun dalam satu baris atau satu dimensi. Setiap elemen dalam array memiliki indeks yang unik, yang digunakan untuk mengakses atau memanipulasi nilai tersebut. Array satu dimensi juga dikenal sebagai vektor [2].

Penting untuk dicatat bahwa dalam array satu dimensi, setiap elemen memiliki tipe data yang sama. Ini berarti bahwa Anda hanya dapat menyimpan nilai dengan tipe data yang sama dalam setiap elemen array.

Cara kerja array satu dimensi adalah dengan menggunakan indeks untuk mengidentifikasi lokasi atau posisi setiap elemen dalam array. Indeks dimulai dari 0 untuk elemen pertama, kemudian 1 untuk elemen kedua, dan seterusnya. Proses mengakses atau memanipulasi nilai dalam array dilakukan dengan merujuk pada indeks elemen yang diinginkan.

#### Contoh Koding

```C++

#include <iostream>
using namespace std;
int main() {
    int arr[5] = {9, 3, 5, 2, 1}; //deklarasi array
    cout<< arr[1] << endl;
    cout<< arr[4];
}

```

#### Output 

<img width="960" alt="Screenshot 2024-03-19 090311" src="https://github.com/Ikawida/TUGAS-2-MODUL-ARRAY-PRAKTIKUM-ALGORITMA-DAN-STRUKTUR-DATA-/assets/157208863/f4c18fd9-86d0-4879-a3df-b4d93060d5d7">

### 2. Array 2 Dimensi

Array dua dimensi yang sering digambarkan sebagai sebuah matriks merupakan perluasan dari sebuah array satu dimensi. Jika array satu dimensi hanya terdiri dari sebuah baris dengan beberapa kolom elemen maka array dua dimensi terdiri dari beberapa baris dan beberapa kolom elemen yang bertipe sama. Pendeklarasian array dua dimensi hampir sama dengan pendeklarasian array satu dimensi, kecuali bahwa array dua dimensi terdapat dua jumlah elemen array yang terdapat di dalam kurung siku dan keduanya boleh tidak sama [3].

Array dua dimensi adalah struktur data yang terdiri dari baris dan kolom, atau bisa dianggap sebagai matriks. Dalam array dua dimensi, elemen-elemennya diatur dalam bentuk grid, dengan setiap elemen memiliki dua indeks: satu untuk baris dan satu untuk kolom.

Cara kerja array dua dimensi mirip dengan koordinat kartesius, di mana ada sumbu X dan Y untuk menentukan lokasi setiap elemen. Indeks baris dan kolom digunakan untuk mengakses atau memanipulasi nilai di dalam array dua dimensi.

#### Contoh Kodingan 

```C++

#include <iostream>
using namespace std;
int main() {
    int arr[2][2] = {{3, 2}, {2, 5}};
    for (int i=0; i<2; i++) { //baris
        for(int j=0; j<2; j++) { //kolom
        cout<< arr[i][j] << ends;
        };
        cout << endl;
    };
}

```

#### Output

<img width="960" alt="Screenshot 2024-03-19 090419" src="https://github.com/Ikawida/TUGAS-2-MODUL-ARRAY-PRAKTIKUM-ALGORITMA-DAN-STRUKTUR-DATA-/assets/157208863/6ead5662-6b78-41e3-9931-decfb6aae9db">

### 3. Array Multidimensi

Array multidimensi memiliki kesamaan dengan array satu dimensi dan dua dimensi, namun memiliki kapasitas memori yang lebih besar. Array ini digunakan untuk merepresentasikan array dengan dimensi lebih dari dua atau array yang memiliki lebih dari dua indeks, seperti array tiga dimensi, array empat dimensi, array lima dimensi, dan seterusnya.

Cara kerja array tiga dimensi adalah dengan menggunakan tiga indeks untuk mengidentifikasi posisi setiap elemen dalam array. Indeks pertama mengidentifikasi "kedalaman" array, indeks kedua mengidentifikasi "baris", dan indeks ketiga mengidentifikasi "kolom". Proses mengakses atau memanipulasi nilai dalam array dilakukan dengan merujuk pada tiga indeks yang sesuai.

#### Contoh kodingan 

```C++

#include <iostream>
using namespace std;
int main() {
    int arr[2][2][3] = {{{2, 8, 7}, {6, 5, 1}}, {{8,
5, 2}, {9, 2 ,7}}};
    for (int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            for(int k=0; k<3; k++) {
                cout<< arr[i][j][k] << ends;
            };
            cout<< endl;
        };
        cout<< endl;
    };
}

```

#### Output

<img width="960" alt="Screenshot 2024-03-19 090524" src="https://github.com/Ikawida/TUGAS-2-MODUL-ARRAY-PRAKTIKUM-ALGORITMA-DAN-STRUKTUR-DATA-/assets/157208863/7bb22710-6f16-4cbe-84c1-130896c358e0">

### 4. Array 4 Dimensi

Array 4 dimensi adalah struktur data dalam pemrograman yang terdiri dari empat tingkat atau dimensi. Ini berarti array tersebut memiliki empat indeks yang digunakan untuk mengakses elemen di dalamnya. Misalnya, dalam konteks pemrograman komputer, array 4 dimensi dapat digunakan untuk merepresentasikan data yang memiliki empat level hierarki, seperti data spasial dalam pengolahan citra atau data cuaca dalam pengolahan data ilmiah.

#### Contoh

int arr [3] [2] [4] [4];

### 5. Array 5 Dimensi

Array 5 dimensi adalah struktur data dalam pemrograman yang terdiri dari lima tingkat atau dimensi. Ini berarti array tersebut memiliki lima indeks yang digunakan untuk mengakses elemen di dalamnya. Contohnya, dalam pengolahan citra medis, array 5 dimensi bisa digunakan untuk merepresentasikan volume gambar dalam tiga dimensi (panjang, lebar, tinggi), serta waktu dan saluran warna.

#### Contoh

int arr [2] [4] [4] [3] [3];

## Langkah Praktikum

### Guided 1

```C++
// Guided 1
#include <iostream>
using namespace std;
// PROGRAM INPUT ARRAY 3 DIMENSI
int main()
{
    // Deklarasi array
    int arr[2][3][3];
    // Input elemen
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" <<
z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // Output Array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z
<< "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilan array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
}

```

#### Output

<img width="960" alt="Screenshot 2024-03-19 090744" src="https://github.com/Ikawida/TUGAS-2-MODUL-ARRAY-PRAKTIKUM-ALGORITMA-DAN-STRUKTUR-DATA-/assets/157208863/41f4b5a6-b127-4032-892b-4ad5c06d8371">

<img width="960" alt="Screenshot 2024-03-19 091345" src="https://github.com/Ikawida/TUGAS-2-MODUL-ARRAY-PRAKTIKUM-ALGORITMA-DAN-STRUKTUR-DATA-/assets/157208863/7e456be8-7bce-4645-a7d9-231ef1da85bf">

#### Interpretasi

Program ini memungkinkan pengguna untuk memasukkan data ke dalam array tiga dimensi dan kemudian menampilkannya kembali dengan cara yang terstruktur dan terorganisir. Berikut adalah penjelasan setiap bagian dari kode program tersebut:

1. *Include Directive*: Baris pertama menggunakan #include <iostream> untuk menyertakan file header <iostream>, yang diperlukan untuk menggunakan objek input-output standar C++ seperti cout dan cin.

2. *Namespace dan Main Function*: Program berada di dalam fungsi main(), yang merupakan titik awal dari eksekusi program. Penggunaan using namespace std; mengarahkan kompiler untuk mencari nama objek dan fungsi dari namespace std, sehingga kita tidak perlu menuliskan std:: sebelum setiap kali menggunakan objek cout dan cin.

3. *Deklarasi Array*: Array tiga dimensi arr dengan ukuran 2x3x3 dideklarasikan. Ini berarti array ini memiliki 2 "layers" atau "slices", dengan masing-masing "layer" memiliki 3 baris dan 3 kolom.

4. *Input Elemen Array*: Program menggunakan nested loop (loop bersarang) untuk mengiterasi melalui setiap elemen dalam array tiga dimensi. Pengguna diminta untuk memasukkan nilai dari setiap elemen array, dan nilai-nilai tersebut disimpan dalam array arr.

5. *Output Array*: Setelah semua elemen array dimasukkan, program menggunakan nested loop lagi untuk menampilkan nilai dari setiap elemen array beserta dengan posisinya (indeks) dalam array. Ini membantu dalam memverifikasi bahwa input pengguna telah dimasukkan dengan benar dan disimpan dengan benar dalam array.

6. *Tampilan Array*: Program kemudian menampilkan array dalam bentuk yang lebih terstruktur, dengan setiap "layer" atau "slice" array dipisahkan dengan baris kosong.

### Guided 2

```C++
// Guided 2
#include <iostream>
using namespace std;
int main()
{
    int maks, a, i = 1, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;
    int array[a];
    cout << "Masukkan " << a << " angka\n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }
    maks = array[0];
    for (i = 0; i < a; i++)
    {
        if (array[i] > maks)
        {
            maks = array[i];
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;
}

```

#### Output

<img width="960" alt="Screenshot 2024-03-19 090925" src="https://github.com/Ikawida/TUGAS-2-MODUL-ARRAY-PRAKTIKUM-ALGORITMA-DAN-STRUKTUR-DATA-/assets/157208863/51a93c2a-6165-423b-8d74-5f0342a5ea45">

#### Interpretasi

Program di atas adalah program dalam bahasa C++ yang bertujuan untuk mencari nilai maksimum dalam sebuah array yang diinputkan oleh pengguna. Berikut adalah penjelasan setiap bagian dari kode program tersebut:

1. *Include Directive*: Baris pertama menggunakan #include <iostream> untuk menyertakan file header <iostream>, yang diperlukan untuk menggunakan objek input-output standar C++ seperti cout dan cin.

2. *Namespace dan Main Function*: Program berada di dalam fungsi main(), yang merupakan titik awal dari eksekusi program. Penggunaan using namespace std; mengarahkan kompiler untuk mencari nama objek dan fungsi dari namespace std, sehingga kita tidak perlu menuliskan std:: sebelum setiap kali menggunakan objek cout dan cin.

3. *Deklarasi Variabel*: Program mendeklarasikan variabel maks untuk menyimpan nilai maksimum dalam array, a untuk menyimpan panjang array yang diinputkan oleh pengguna, i sebagai variabel untuk iterasi, dan lokasi untuk menyimpan indeks dari nilai maksimum dalam array.

4. *Input Panjang Array*: Pengguna diminta untuk memasukkan panjang array, yang kemudian disimpan dalam variabel a.

5. *Deklarasi dan Inisialisasi Array*: Array array dideklarasikan dengan ukuran sebesar panjang yang diinputkan oleh pengguna, yaitu a.

6. *Input Elemen Array*: Program menggunakan loop for untuk meminta pengguna memasukkan nilai dari setiap elemen array. Nilai-nilai tersebut disimpan dalam array array.

7. *Mencari Nilai Maksimum*: Setelah semua nilai dimasukkan, program menggunakan loop for lagi untuk mencari nilai maksimum dalam array. Variabel maks diinisialisasi dengan nilai dari elemen pertama array (array[0]), dan kemudian setiap elemen array diperiksa. Jika nilai dari suatu elemen array lebih besar dari nilai maks, maka nilai maks diupdate dengan nilai elemen tersebut, dan lokasi diupdate dengan indeks elemen tersebut.

8. *Output Nilai Maksimum*: Setelah loop selesai, program mencetak nilai maksimum beserta dengan indeksnya dalam array.

## Tugas Praktikum

### 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!

#### Kodingan

```C++

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    // Meminta pengguna untuk memasukkan data array
    string data_array;
    cout << "Masukkan data array (pisahkan angka dengan spasi): ";
    getline(cin, data_array);

    // Menggunakan stringstream untuk memisahkan string menjadi angka
    stringstream ss(data_array);
    int angka;
    vector<int> data_list;
    while (ss >> angka) {
        data_list.push_back(angka);
    }

    // Membuat vector untuk menyimpan angka genap dan ganjil
    vector<int> genap;
    vector<int> ganjil;

    // Memisahkan angka genap dan ganjil
    for (int angka : data_list) {
        if (angka % 2 == 0) {
            genap.push_back(angka);
        } else {
            ganjil.push_back(angka);
        }
    }

    // Menampilkan output
    cout << "Data Array: ";
    for (int angka : data_list) {
        cout << angka << " ";
    }
    cout << endl;

    cout << "Nomor Genap: ";
    for (int angka : genap) {
        cout << angka << " ";
    }
    cout << endl;

    cout << "Nomor Ganjil: ";
    for (int angka : ganjil) {
        cout << angka << " ";
    }
    cout << endl;

    return 0;
}

```

#### Output

<img width="960" alt="Screenshot 2024-03-19 091117" src="https://github.com/Ikawida/TUGAS-2-MODUL-ARRAY-PRAKTIKUM-ALGORITMA-DAN-STRUKTUR-DATA-/assets/157208863/7c214fa8-0498-4ccc-95e7-d46c3bbdb5f3">

#### Interpretasi 

Kode program di atas digunakan untuk meminta pengguna memasukkan data array, setelah itu program akan memisahkan angka-angka tersebut menjadi dua kelompok: angka genap dan angka ganjil. Kemudian, program akan menampilkan kembali data array yang dimasukkan oleh pengguna, diikuti dengan daftar angka genap dan angka ganjil yang dipisahkan dari data array tersebut.

Dengan menggunakan struktur loop dan pengecekan kondisi, program dapat memisahkan angka genap dan ganjil dengan tepat. Selanjutnya, hasil pemisahan tersebut ditampilkan dengan menggunakan output stream (cout) untuk ditampilkan ke layar pengguna. Berikut adalah penjelasan setiap bagian dari kode program yang digunakan:

1. *Include Direktif*: Kode dimulai dengan beberapa #include direktif. Direktif ini mengimpor definisi dari perpustakaan standar C++ yang kita butuhkan untuk menggunakan fitur-fitur seperti input-output (iostream), struktur data vektor (vector), dan stream string (sstream). Ini memungkinkan kita menggunakan fungsi-fungsi yang didefinisikan di dalamnya dalam program kita.

2. *Namespace*: Kita menggunakan using namespace std; agar tidak perlu menuliskan std:: di depan objek atau fungsi dari namespace std seperti cin, cout, dan lainnya. Hal ini membuat kode lebih ringkas, tetapi dihindari dalam kode yang lebih besar karena dapat menyebabkan konflik nama.

3. *Fungsi Main*: Fungsi main adalah titik awal dari eksekusi program. Semua kode yang akan dieksekusi harus berada di dalam fungsi main.

4. *Variabel dan Input Pengguna*: Kita mendeklarasikan variabel data_array untuk menyimpan input pengguna, yaitu data array. Kemudian, menggunakan getline(cin, data_array);, kita membaca input dari pengguna dan menyimpannya dalam variabel data_array.

5. *Stringstream untuk Parsing*: Kita menggunakan stringstream untuk memproses string data_array. Ini memungkinkan kita untuk membagi string menjadi angka-angka yang terpisah sehingga dapat diolah lebih lanjut.

6. *Loop untuk Memisahkan Angka*: Kita menggunakan loop while untuk membaca angka-angka dari stringstream satu per satu dan menyimpannya dalam vektor data_list. Ini memungkinkan kita untuk memproses input pengguna yang berupa deretan angka yang dipisahkan oleh spasi.

7. *Memisahkan Angka Genap dan Ganjil*: Kita menggunakan loop for untuk memisahkan angka-angka dari data_list menjadi angka genap dan ganjil. Setiap angka dicek apakah genap atau ganjil menggunakan operasi modulus (%). Angka genap dimasukkan ke dalam vektor genap, sementara angka ganjil dimasukkan ke dalam vektor ganjil.

8. *Menampilkan Output*: Terakhir, kita menggunakan cout untuk menampilkan pesan dan hasil pemisahan angka genap dan ganjil ke layar.

9. *Return 0*: Ini adalah standar dalam fungsi main untuk mengembalikan nilai 0 kepada sistem operasi sebagai tanda bahwa program berakhir dengan sukses. Ini juga menandakan bahwa tidak ada kesalahan yang terjadi selama eksekusi program.

### 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!

#### Kodingan

```C++

#include <iostream>
using namespace std;

int main() {
    int x_size, y_size, z_size;

    // Meminta pengguna untuk memasukkan ukuran array
    cout << "Masukkan ukuran array tiga dimensi (x y z): ";
    cin >> x_size >> y_size >> z_size;

    // Deklarasi array tiga dimensi sesuai dengan ukuran yang dimasukkan pengguna
    int arr[x_size][y_size][z_size];

    // Input elemen
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }

    // Output Array
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;

    // Tampilan array
    for (int x = 0; x < x_size; x++) {
        for (int y = 0; y < y_size; y++) {
            for (int z = 0; z < z_size; z++) {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}

```

#### Output

<img width="960" alt="Screenshot 2024-03-19 091324" src="https://github.com/Ikawida/TUGAS-2-MODUL-ARRAY-PRAKTIKUM-ALGORITMA-DAN-STRUKTUR-DATA-/assets/157208863/e5a52818-9bc3-4fad-9b9f-7dcaa62fe979">

<img width="960" alt="Screenshot 2024-03-19 091345" src="https://github.com/Ikawida/TUGAS-2-MODUL-ARRAY-PRAKTIKUM-ALGORITMA-DAN-STRUKTUR-DATA-/assets/157208863/1b93833a-e114-4ea3-b38f-0c75bf56e35f">

#### Interpretasi

Program tersebut berfungsi untuk memungkinkan pengguna untuk memasukkan ukuran array tiga dimensi (panjang, lebar, dan tinggi) serta nilai-nilai elemen-elemen dari array tersebut. 

Dengan menggunakan ukuran yang dimasukkan oleh pengguna, program akan membuat array tiga dimensi dengan ukuran yang sesuai. Selanjutnya, program akan meminta pengguna untuk memasukkan nilai-nilai elemen array tersebut satu per satu.

Setelah semua nilai dimasukkan, program akan menampilkan kembali nilai-nilai elemen array beserta dengan posisinya dalam array. Selain itu, program juga akan menampilkan array secara langsung dalam bentuk yang terstruktur.

Dengan demikian, program ini memberikan fleksibilitas kepada pengguna untuk membuat dan mengisi array tiga dimensi sesuai dengan kebutuhan mereka, serta melihat hasilnya dengan jelas dalam bentuk yang terorganisir.
Berikut adalah penjelasan setiap bagian dari kode program yang digunakan:

1. *Preprocessor Directives*: Baris pertama menggunakan preprocessor directive #include <iostream> untuk menyertakan file header iostream, yang memberikan akses ke input-output stream standar C++.

2. *Namespace dan Main Function*: Program dimulai dengan deklarasi namespace std; yang memungkinkan penggunaan objek cin dan cout tanpa menambahkan std:: sebelumnya. Fungsi main() merupakan titik awal eksekusi program.

3. *Deklarasi Variabel Ukuran*: Variabel x_size, y_size, dan z_size dideklarasikan untuk menyimpan ukuran array tiga dimensi yang dimasukkan oleh pengguna.

4. *Meminta Input Pengguna*: Pesan "Masukkan ukuran array tiga dimensi (x y z): " ditampilkan menggunakan cout, dan nilai-nilai yang dimasukkan oleh pengguna disimpan dalam variabel x_size, y_size, dan z_size menggunakan cin.

5. *Deklarasi Array*: Array tiga dimensi arr dideklarasikan menggunakan ukuran yang dimasukkan oleh pengguna.

6. *Input Elemen*: Dengan menggunakan tiga loop bersarang, program meminta pengguna untuk memasukkan setiap elemen array dan menyimpannya di dalam array arr.

7. *Output Array*: Program kemudian menggunakan tiga loop bersarang lagi untuk menampilkan setiap elemen array beserta posisinya.

8. *Tampilan Array*: Setelah itu, program menampilkan array secara langsung dengan menggabungkan nilai-nilai elemen di setiap baris dengan menggunakan loop bersarang.

9. *Return 0*: Fungsi main() mengembalikan nilai 0 yang menandakan bahwa program telah berhasil dieksekusi dengan benar.

### 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!

#### Kodingan 

```c++

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    // Memastikan n tidak negatif
    if (n <= 0) {
        cout << "Jumlah elemen harus lebih besar dari 0." << endl;
        return 1; // Menghentikan program dengan kode kesalahan
    }

    // Deklarasi array dengan ukuran yang dimasukkan oleh pengguna
    int arr[n];

    // Meminta pengguna untuk memasukkan elemen-elemen array
    cout << "Masukkan elemen-elemen array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    // Mencari nilai maksimum dan minimum dari array
    int maksimum = INT_MIN;
    int minimum = INT_MAX;
    int total = 0;
    for (int i = 0; i < n; ++i) {
        maksimum = max(maksimum, arr[i]);
        minimum = min(minimum, arr[i]);
        total += arr[i];
    }

    // Menghitung rata-rata
    double rata_rata = (double)total / n;

    // Menampilkan hasil
    cout << "Nilai Maksimum: " << maksimum << endl;
    cout << "Nilai Minimum: " << minimum << endl;
    cout << "Nilai Rata-rata: " << rata_rata << endl;

    return 0;
}

```

#### Output 

<img width="960" alt="Screenshot 2024-03-19 091608" src="https://github.com/Ikawida/TUGAS-2-MODUL-ARRAY-PRAKTIKUM-ALGORITMA-DAN-STRUKTUR-DATA-/assets/157208863/2ff24099-c2ad-491f-8e94-e0b09531e03f">

#### Interpretasi

Program tersebut berfungsi untuk memungkinkan pengguna untuk:

1. Memasukkan jumlah elemen array yang diinginkan.
2. Memasukkan elemen-elemen array satu per satu.
3. Program kemudian akan mencari nilai maksimum dan minimum dari elemen-elemen array yang dimasukkan.
4. Program juga akan menghitung rata-rata dari semua elemen dalam array.
5. Hasil dari perhitungan tersebut kemudian ditampilkan kepada pengguna.

Dengan kata lain, program ini memberikan utilitas kepada pengguna untuk melakukan analisis sederhana terhadap sekumpulan data dalam bentuk array. Ini dapat digunakan untuk mengidentifikasi nilai maksimum, minimum, dan rata-rata dari sejumlah elemen data yang dimasukkan. 
Berikut adalah penjelasan setiap bagian dari kode program yang digunakan:

1. *Include Direktif*: Program dimulai dengan dua preprocessor directives: #include <iostream> dan #include <climits>. Direktif pertama adalah untuk menyertakan file header iostream, yang diperlukan untuk input-output dalam C++, dan yang kedua adalah untuk climits, yang menyediakan konstanta-konstanta untuk batasan nilai dari tipe data integer.

2. *Namespace dan Main Function*: Kode program berada di dalam fungsi main(), yang merupakan titik awal dari eksekusi program. Namespace std digunakan agar tidak perlu menuliskan std:: di depan objek cin dan cout.

3. *Deklarasi Variabel Jumlah Elemen*: Variabel n dideklarasikan untuk menyimpan jumlah elemen array yang akan dimasukkan oleh pengguna.

4. *Validasi Jumlah Elemen*: Program memastikan bahwa jumlah elemen yang dimasukkan oleh pengguna tidak negatif. Jika n kurang dari atau sama dengan 0, program akan memberikan pesan kesalahan dan menghentikan eksekusi dengan mengembalikan nilai 1.

5. *Deklarasi dan Inisialisasi Array*: Setelah validasi, array arr dengan ukuran n dideklarasikan. Array ini akan digunakan untuk menyimpan elemen-elemen yang dimasukkan oleh pengguna.

6. *Input Elemen Array*: Program meminta pengguna untuk memasukkan elemen-elemen array satu per satu menggunakan loop for. Setiap elemen dimasukkan ke dalam array arr.

7. *Mencari Nilai Maksimum, Minimum, dan Total*: Program menggunakan loop for untuk menelusuri setiap elemen array dan mencari nilai maksimum, minimum, dan total dari elemen-elemen tersebut. Variabel maksimum dan minimum diinisialisasi dengan nilai yang memungkinkan untuk memastikan bahwa nilai awal dari array akan menjadi nilai maksimum dan minimum yang ditemukan.

8. *Menghitung Nilai Rata-rata*: Setelah menghitung total dari semua elemen array, program menghitung nilai rata-rata dengan membagi total tersebut dengan jumlah elemen array.

9. *Output Hasil*: Setelah semua perhitungan selesai, program menampilkan nilai maksimum, minimum, dan rata-rata kepada pengguna menggunakan objek cout.

10. *Return 0*: Fungsi main() mengembalikan nilai 0 sebagai tanda bahwa program berakhir dengan sukses. Hal ini menandakan bahwa tidak ada kesalahan yang terjadi selama eksekusi program.

## Kesimpulan 

Array adalah suatu struktur yang terdiri dari sejumlah elemen yang memiliki tipe data yang sama. Elemen-elemen array tersusun secara sekuensial dalam memori komputer. Semua elemem array bertipe sama. Array cocok untuk organisasi kumpulan data homogen yang ukuran atau jumlah elemen maksimumnya telah diketahui dari awal. Homogen adalah bahwa setiap elemen dari sebuah array tertentu haruslah mempunyai tipe data yang sama. Array memiliki beberapa jenis yaitu:
-  array 1 dimensi
Yaitu kumpulan elemen-elemen identik yang tersusun dalam satu baris.
-  array 2 dimensi 
Digambarkan sebagai sebuah matrik dan merupakan perluasan dari sebuah array satu dimensi.
- array multidimensi
Merupakan array yang mempunyai ukuran lebih dari dua.  
Setiap elemen dalam array dapat diakses menggunakan indeks numerik. Indeks dimulai dari 0 (nol) untuk elemen pertama, dan berlanjut hingga n-1, di mana n adalah ukuran array. Dengan indeks ini, kita dapat dengan mudah mengakses atau memanipulasi nilai dalam array.
Array digunakan dalam berbagai konteks pemrograman, termasuk pemrosesan data, pengaturan data, grafika komputer, dan banyak lagi. Mereka adalah alat yang sangat fleksibel dan sering kali menjadi dasar untuk struktur data yang lebih kompleks. Array juga sering digunakan dalam implementasi algoritma untuk memfasilitasi penyimpanan dan manipulasi data. Misalnya, dalam algoritma pencarian atau pengurutan, array digunakan untuk menyimpan kumpulan data yang akan diproses.

## Daftar Pustaka

[1] Firliana Rina dan Patmi Kasih, "Algoritma dan Pemrograman C++," Adjie Media Nusantara, Nganjuk, 2020, pp. 1-82.

[2] Thompson Susabda Ngoen, "Pengantar Algoritma dengan Bahasa C," Salemba Teknika, Jakarta, 2020.

[3] Deitel, "C: How to Program," 3rd ed. Prentice Hall, New Jersey, 2021.

