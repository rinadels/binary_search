#include <iostream>

using namespace std;

int binary (char data [], int panjang, char key)//tipe data char dan integer
{
    int awal, akhir, tengah, posisi; //variabel awal,akhir,tengah, dan posisi
    bool ketemu;

    //pemberian nilai pada variabel
    ketemu = false;
    awal = 0;
    akhir = panjang - 1;
    posisi = -1;

    while (awal <= akhir) //perulangan
    {
        tengah = (awal + akhir)/2; //mencari nilai tengah pada array
        //percabangan
        if (key == data [tengah])//mengecek apakah key memiliki nilai = data tengah
        {
            posisi = tengah;
            break; //berfungsi untuk jika nilai sudah ditemukan maka while akan dibreak
        }
        else if (key < data [tengah])//mengecek apakah key memiliki nilai < data tengah
        {
            akhir = tengah - 1;
        }
        else if (key > data [tengah]) //mengecek apakah key memiliki nilai > data tengah
        {
            awal = tengah + 1;
        }
    }
    return posisi;
}

int main ()
{
    char data []   = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    int panjang    = 7;
    char key       = 'z';

    int posisi = binary (data, panjang, key); //pemanggilan fungsi dari binarynya

    if (posisi  != -1){
        //pemanggilan fungsi key jika ada
        cout << "key " << key << " ditemukan pada posisi indeks ke-" << posisi << endl;
    }
    else
    {
        //pemanggilan key jika tidak ada
        cout << "key " << key << " tidak ditemukan" << endl;
    }
    return 0;
}
