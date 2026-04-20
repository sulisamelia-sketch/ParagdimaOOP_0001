#include <iostream>
using namespace std;

class Mahasiswa {

public :
    int nim;
    string nama;
    float nilai;

    void printData(){
        cout << "NIM : " << nim << endl;
        cout << "NAMA : " << nama << endl;
        cout << "NILAI : " << nilai << endl;
    }

}; // batas akhir kelas

int main(){
    Mahasiswa mhs1;
    mhs1.nim = 0001;
    mhs1.nama = "Sulis Amelia";
    mhs1.nilai = 90;

    mhs1.printData ();
}  