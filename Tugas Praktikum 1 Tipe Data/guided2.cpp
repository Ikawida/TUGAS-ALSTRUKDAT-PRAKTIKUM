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
