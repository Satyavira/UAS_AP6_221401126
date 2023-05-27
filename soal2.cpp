// Buatlah Program menampung data yang bisa melakukan CREATE READ UPDATE DELETE(CRUD) dan gunakan Fungsi

/* Tugas
Nama    : Satyavira Prathama
NIM     : 221401126
KOM     : C */

#include <iostream> //dipakai untuk input dan output (cin dan cout)
#include <vector> //untuk bisa memakai tipe data vector
#include <string> //untuk bisa memakai tipe data string

using namespace std; //dipakai untuk pada saat memanggil suatu fungsi tidak perlu std::fungsi

struct data
{
    string nama;
    string nim;
    string kom;
};

vector<data> database;

void create()
{
    data input;
    cout << "Input nama: ";
    cin.get();
    getline(cin, input.nama);
    cout << "Input NIM: ";
    cin >> input.nim;
    cout << "Input Kom: ";
    cin >> input.kom;
    database.push_back(input);
}

void read()
{
    int i = 0;
    if (!database.empty())
    {
        for (auto &output : database)
        {
            cout << "Index " << i << ":" << endl;
            cout << "Nama: " << output.nama << endl;
            cout << "NIM: " << output.nim << endl;
            cout << "Kom: " << output.kom << endl;
            i++;
        }
    }
    else
    {
        cout << "Tidak ada data didalam." << endl;
    }
}

void updateData(int id)
{
    int i = 0;
    bool TF = false;
    for (vector<data>::iterator it = database.begin(); it != database.end(); ++it)
    {
        if (i == id)
        {
            TF = true;
            cout << "Input nama: ";
            getline(cin, it->nama);
            cout << "Input NIM: ";
            cin >> it->nim;
            cout << "Input Kom: ";
            cin >> it->kom;
            cout << "Data dengan index " << id << "telah diupdate." << endl;
            break;
        }
        i++;
    }
    if (!TF)
    {
        cout << "Data dengan index " << id << " tidak ditemukan." << endl;
    }
}

void deleteData(int id)
{
    int i = 0;
    bool TF = false;
    for (vector<data>::iterator it = database.begin(); it != database.end(); ++it)
    {
        if (i == id)
        {
            TF = true;
            database.erase(it);
            break;
        }
        i++;
    }
    if (!TF)
    {
        cout << "Data dengan index " << id << " tidak ditemukan." << endl;
    }
}

void menu()
{
    system("CLS");
    cout << "Menu:" << endl;
    cout << "1.Create\n";
    cout << "2.Read\n";
    cout << "3.Update\n";
    cout << "4.Delete\n";
    cout << "Untuk memilih silahkan untuk mengetik salah satu dari 1/2/3/4: ";
}

int main()
{
    char pilihan;
    int nilai;
    do
    {
        menu();
        cin >> pilihan;
        switch (pilihan)
        {
        case '1':
            create();
            break;
        case '2':
            read();
            break;
        case '3':
            cout << "Index yang ingin diupdate: ";
            cin >> nilai;
            cin.get();
            updateData(nilai);
            break;
        case '4':
            cout << "Index yang ingin didelete: ";
            cin >> nilai;
            cin.get();
            deleteData(nilai);
            break;
        default:
            cout << "Anda menginputkan pilihan yang tidak masuk ke range!" << endl;
            break;
        }
        cout << "Apakah anda ingin kembali ke menu utama? (Y/N): ";
        cin >> pilihan;
    } while (toupper(pilihan) == 'Y');
    system("CLS");
    cout << "\n\n\n\t\tTerimakasih telah menggunakan program ini!!!\n\n\n\n";
}