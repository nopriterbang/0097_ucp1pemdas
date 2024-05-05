// 1. a.int nPeserta;
//	  b. char nPelanggan[20];
//	  c. float nPengguna;
// 
// 
// 
// 2. int main()
// {
//	 
//	 char nama[20];
//	 string alamat
//   
//	 cout << "Masukan nama: " << endl;
//	 cin >> nama;
//	 cout << "Masukan alamat: "<< endl;
//	 cin >> alamat;
// }
//
// 
// 
//  3. do {
//  cout << "Berangkat mengambil takjil" << endl;
//  cout << "Antri Takjil" << endl;
//  cout << "Ambil Takji" << endl;
//  cout << "Apakah mau antri kembali ?" << endl;
//  cin >> pilihan;
// } while (pilihan == 'y' || pilihan == 'Y');
// 
// 4.int main(){
//      string status;
//      int nMTK, nFISIKA, nRerata;
//
//      cout << "Masukan nilai Matematika = ";
//      cin >> nMTK;
//
//      cout << "Masukan nilai Fisika = ";
//      cin >> nFISIKA;
//      nRerata = (nMTK + nFISIKA) / 2;
//
//      if (nRerata >= 60) {
//        status = "Lulus";
//      }
//      else if (nMTK >= 70) {
//        status = "Lulus";
//      }
//      else {
//    status = "Tidak Lulus";
//      }
//      cout << "Tampilkan Status = " << status << endl;
//      }
// 
// 5. struct sekolah{
//	string pengurus
//	string guru
//	string siswa
// 
// }



// 6.

#include <iostream>
using namespace std;

string nama;
int nTanggerang, nBekasi;


int main()
{
	struct status;
	string nIndeksudara, nNilaiudara;

    cout << "Masukan Indeks Udara = ";
    cin >> nIndeksudara;

    cout << "Masukan Nilai udara = ";
    cin >> nNilaiudara;

    if(nIndeksudara < 75){
        status = "Tidak sehat";
    }
    else if (nNilaiudara =< 45) {
        status = "Tidak sehat";
    }
    else {
        status = "Sehat";
    }
    cout << "Tampilkan Status = " << status << endl;
    


   
}








