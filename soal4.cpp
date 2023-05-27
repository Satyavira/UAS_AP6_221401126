/* Tugas
Nama    : Satyavira Prathama
NIM     : 221401126
KOM     : C */

#include <iostream>

using namespace std;

int tambah(int a, int b);

int main() {
    
    cout << "Hello, world!" << endl;

   
    if (true) {
        cout << "Ini blok if" << endl;
    }
    else {
        cout << "Ini blok else" << endl;
    }

   
    int x = 5;
    cout << "Nilai x: " << x << endl;

    
    int hasil = tambah(3, 4);
    cout << "Hasil penjumlahan: " << hasil << endl;

    
    switch (x) {
        case 5: 
            cout << "Nilai x adalah 5" << endl;
            break;
        default:
            cout << "Nilai x bukan 5" << endl;
    }

    return 0;

    int* ptr;
    *ptr = 10;  

    x = 5;
    int* nullPtr = nullptr;
    nullPtr = &x;  

    delete nullPtr;  

    int* dynamicPtr = new int;
    *dynamicPtr = 7;
    delete dynamicPtr;
    *dynamicPtr = 20;  

    int arr[5];
    int* arrptr = arr;
    arrptr[5] = 10;  

    return 0;
}


int tambah(int a, int b) {
    return a + b;
}

//hehheheheh semangat