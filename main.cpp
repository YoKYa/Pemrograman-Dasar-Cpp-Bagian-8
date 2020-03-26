#include <iostream>

using namespace std;

int main(){
    system("cls"); // Membersihkan Layar
    
    // Deklarasi Variabel
    float a, b, hasil;

    // Pembuka
    cout << "===== Aritmatika =====" << endl << endl;
    cout << "Dalam Aritmatika Pemrograman ada +, -, *, / dan %" << endl << endl;

    // Memasukkan Nilai
    cout << "Masukkan Nilai Pertama : ";
    cin >> a;
    cout << "Masukkan Nilai Kedua   : ";
    cin >> b;

    // Pertambahan
    cout << endl << "// Pertambahan" << endl;
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil;

    // Pengurangan
    cout << endl << endl << "// Pengurangan" << endl;
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil;  

    // Perkalian
    cout << endl << endl << "// Perkalian" << endl;
    hasil = a * b;
    cout << a << " * " << b << " = " << hasil;  

    // Pembagian
    cout << endl << endl << "// Pembagian" << endl;
    hasil = a / b;
    cout << a << " / " << b << " = " << hasil;  
    cout << endl;
    
    // Modulus memakai int
    int c, d, Hasil;
    c = a;
    d = b;
    Hasil = c % d;
    cout << endl << "// Modulus" << endl;
    cout << c << " % " << d << " = " << Hasil; 
    cout << endl << endl;

    cin.get();
    return 0;
}