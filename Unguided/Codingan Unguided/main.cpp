
#include <iostream>
using namespace std;

int main() {
    
    // Soal no 1
    float bilangan1, bilangan2;

    // Meminta input dari pengguna
    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;

    // Melakukan operasi aritmatika
    float penjumlahan = bilangan1 + bilangan2;
    float pengurangan = bilangan1 - bilangan2;
    float perkalian = bilangan1 * bilangan2;
    float pembagian = bilangan1 / bilangan2;
    
    

    // Menampilkan hasil
    cout << "Hasil penjumlahan: " << penjumlahan << endl;
    cout << "Hasil pengurangan: " << pengurangan << endl;
    cout << "Hasil perkalian: " << perkalian << endl;
    cout << "Hasil pembagian: " << pembagian << endl;

    return 0;

    // Soal no 2
    int angka;
    cout << "Masukkan bilangan bulat positif (0 - 100): ";
    cin >> angka;

    // Memeriksa validitas input
    if (angka < 0 || angka > 100) {
        cout << "Input tidak valid." << endl;
        return 1; // Keluar dari program jika input tidak valid
    }

    // Menampilkan hasil dalam bentuk tulisan
    if (angka == 0) cout << "nol";
    else if (angka == 1) cout << "satu";
    else if (angka == 2) cout << "dua";
    else if (angka == 3) cout << "tiga";
    else if (angka == 4) cout << "empat";
    else if (angka == 5) cout << "lima";
    else if (angka == 6) cout << "enam";
    else if (angka == 7) cout << "tujuh";
    else if (angka == 8) cout << "delapan";
    else if (angka == 9) cout << "sembilan";
    else if (angka == 10) cout << "sepuluh";
    else if (angka == 11) cout << "sebelas";
    else if (angka == 12) cout << "dua belas";
    else if (angka == 13) cout << "tiga belas";
    else if (angka == 14) cout << "empat belas";
    else if (angka == 15) cout << "lima belas";
    else if (angka == 16) cout << "enam belas";
    else if (angka == 17) cout << "tujuh belas";
    else if (angka == 18) cout << "delapan belas";
    else if (angka == 19) cout << "sembilan belas";
    else if (angka == 20) cout << "dua puluh";
    else if (angka == 100) cout << "seratus";
    else {
        // Menangani angka dari 21 hingga 99
        cout << (angka / 10 == 2 ? "dua puluh" :
                  angka / 10 == 3 ? "tiga puluh" :
                  angka / 10 == 4 ? "empat puluh" :
                  angka / 10 == 5 ? "lima puluh" :
                  angka / 10 == 6 ? "enam puluh" :
                  angka / 10 == 7 ? "tujuh puluh" :
                  angka / 10 == 8 ? "delapan puluh" :
                  "sembilan puluh"); // puluhan
        
        // Menambahkan satuan jika ada
        if (angka % 10 != 0) {
            cout << " " << (angka % 10 == 1 ? "satu" :
                            angka % 10 == 2 ? "dua" :
                            angka % 10 == 3 ? "tiga" :
                            angka % 10 == 4 ? "empat" :
                            angka % 10 == 5 ? "lima" :
                            angka % 10 == 6 ? "enam" :
                            angka % 10 == 7 ? "tujuh" :
                            angka % 10 == 8 ? "delapan" :
                            "sembilan"); // satuan
        }
    }

    cout << endl; // Untuk membuat baris baru
    return 0;

    // Soal No 3
   
    int n;
    cout << "Input: ";
    cin >> n;

    // Bagian atas pola
    for (int i = n; i >= 1; i--) {
        // Bagian kiri (angka menurun)
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        // Bintang
        cout << "*";
        // Bagian kanan (angka naik)
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }

    // Bagian bawah pola (hanya bintang)
    cout << "*" << endl;

    return 0;
}
    








