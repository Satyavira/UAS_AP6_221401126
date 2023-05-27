// Buatlah Sebuah Program yang menggunakan Fungsi untuk menghitung nilai total Element Sebuah Array.

/* Tugas
Nama    : Satyavira Prathama
NIM     : 221401126
KOM     : C */

#include <iostream> //dipakai untuk input dan output (cin dan cout)

using namespace std; //dipakai untuk pada saat memanggil suatu fungsi tidak perlu std::fungsi

int hitung(int A[], int b) {
    int i = 0;
    int sum = 0;
    while (i < b)
    {
        sum += A[i];
        i++;
    }
    return sum;
}

int main() {
    int a;
    cout << "Berapa banyak data yang akan dimasukkan: ";
    cin >> a;
    int B[a];
    for (int i = 0; i < a; i++)
    {
        cout << "[" << i << "]: ";
        cin >> B[i];
    }
    cout << "Nilai total Element sebuah Array: " << hitung(B, a);
}