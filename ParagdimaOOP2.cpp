#include <iostream>
using namespace std;

class Barang {
public :
       string nama;
        int jumlah;
        string kategori;
        char tanggalProduksi;

    void SpesifikasiBarang() {
             cout << "NAMA : " << nama << endl;
             cout << "jumlah: " << jumlah << endl;
             cout << "kategori : " << kategori << endl;
             cout << "tanggalProduksi : " << tanggalProduksi << endl;

  }
};
        

int main(){
    Barang Elektronik;
    Elektronik.nama = "Laptop";
    Elektronik.jumlah = 2;
    Elektronik.kategori = "Elektronik";
    Elektronik.SpesifikasiBarang();

   

  