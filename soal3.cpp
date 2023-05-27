// Buat lah Sebuah Program struct

/* Tugas
Nama    : Satyavira Prathama
NIM     : 221401126
KOM     : C */

#include <iostream> //dipakai untuk input dan output (cin dan cout)
#include <windows.h> //dipakai untuk mengganti font text

using namespace std; //dipakai untuk pada saat memanggil suatu fungsi tidak perlu std::fungsi

struct node {
    int nilai;
    node *next = nullptr;
    node(int value) {
        nilai = value;
    }
};

struct linkedList
{
    node *head = nullptr;
    node *now  = nullptr;
    void insertHead(int value) {
        if (head == nullptr)
        {
            node* newNode = new node(value);
            head = newNode;
            now = head;
        } else {
            node* newNode = new node(value);
            newNode->next = head;
            head = newNode;
        }
    }
    void insertTail(int value) {
        if (head == nullptr)
        {
            insertHead(value);
        } else {
            node* newNode = new node(value);
            newNode->next = nullptr;
            now->next = newNode;
            now = newNode;
        }
    }
};

void read(node* head) {
    int i = 0;
    while (head != nullptr)
    {
        cout << "Index " << i << " = " << head->nilai << endl;
        head = head->next;
        i++;
    }
    if (i == 0)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
        cout << "Tidak ada nilai didalam Linked List" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
    }
    
}

void menu() {
    system("CLS");
    cout << "==============Linked List===============\n";
    cout << "Terdapat 3 pilihan yang bisa dilakukan:\n";
    cout << "1.Insert at Head\n";
    cout << "2.Insert at Tail\n";
    cout << "3.Read\n";
    cout << "Untuk memilih silahkan untuk mengetik salah satu dari 1/2/3: ";
}

using namespace std;

int main() {
    char pilihan;
    int nilai;
    linkedList head;
    do
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
        menu();
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
        cin >> pilihan;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
        switch (pilihan)
        {
        case '1':
            cout << "Nilai yang ingin dimasukkan: ";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            cin >> nilai;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
            cin.get();
            head.insertHead(nilai);
            break;
        case '2':
            cout << "Nilai yang ingin dimasukkan: ";
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
            cin >> nilai;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
            cin.get();
            head.insertTail(nilai);
            break;
        case '3':
            read(head.head);
            break;
        default:
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
            cout << "Anda menginputkan pilihan yang tidak masuk ke range!" << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
            break;
        }
        cout << "Apakah anda ingin kembali ke menu utama? (Y/N): ";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
        cin >> pilihan;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
    } while (toupper(pilihan) == 'Y');
    system("CLS");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
    cout << "\n\n\n\t\tTerimakasih telah menggunakan program ini!!!\n\n\n\n";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
}