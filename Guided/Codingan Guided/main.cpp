#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{

    int angka = 10;
    float desimal = 10.5;
    string kalimat = "Gabriel";
    double tinggi = 10.4;
    char jenis_kelamin = 'L';

    cout << "Angka = " << angka << endl;


    cout << "Masukkan angka: ";
    cin >> angka; // Input value for angka
    cout << "Angka: " << angka << endl;

    getch();

    // Operator Aritmatika )

    int angka1 = 10;
    int angka2 = 2;
    int hasil = angka1 % angka2;
    cout << "Hasilnya adalah " << hasil << endl;


    // Operasi Perbandingan
    int angkaa1 = 5;
    int angkaa2 = 5;
    bool hasill = (angkaa1 == angkaa2);
    cout << "Hasil adalah " << hasill << endl;

    // Operator Logika
    bool kondisi1 = true;
    bool kondisi2 = true;
    bool hasil_logika = (kondisi1 || kondisi2);
    cout << "Hasilnya adalah " << boolalpha << hasil_logika << endl;

    // Percabangan
    string kata;
    cout << "Masukkan kata: Halo " << endl;
    cin >> kata;

    if (kata == "Halo") {
        cout << "Kata sesuai" << endl;
    } else {
        cout << "Kata tidak sesuai" << endl;
    }

    // Switch Case
    int tv;
    cout << "Daftar Channel TV: " << endl;
    cout << "1. RCTI" << endl;
    cout << "2. Indosiar" << endl;

    cout << "Masukkan Channel Pilihan: " << endl;
    cin >> tv;

    switch (tv) {
        case 1:
            cout << "Channel yang anda pilih RCTI" << endl;
            break;
        case 2:
            cout << "Channel yang anda pilih Indosiar" << endl;
            break;
        default:
            cout << "Channel Tidak Tersedia" << endl;
    }

    // Perulangan
    for (int i = 0; i < 5; i++) {
        cout << i << " Hello World" << endl; 
    }

    return 0; 
}
