#include <iostream>
#include <string.h>
using namespace std;


class Perpus{
  public:
  void input();
  void proses();
  void output();

  string jenis[4];
  string kodeJudul[12][2];
};

void Perpus::proses(){
  cout<<"====== SELAMAT DATANG DI PERPUSTAKAAN UAD ======"<<endl;
  
  //judul buku
  for(int i=0;i<4;i++){
    cout << "Silahkan Masukkan jenis buku : ";
    cin >> jenis[i];
    cout <<  endl;
  }

  cout << endl;
  //kode buku dan judul buku
  for (int i=0;i<12;i++){
    for(int j=0;j<2;j++){
    cout << "Masukkan kode buku : ";
    cin >> kodeJudul[i][j];
    cout << "Masukkan judul buku : ";
    cin.ignore();
    getline(cin, kodeJudul[i][j]);
    cout << endl;
    }  
  }
}

void Perpus::output(){

  for(int i=0;i<4;i++){
    cout << "Jenis Buku = \n";
    cout << jenis[i] << " ";
  }

  for (int i=0; i<12; i++){
    for (int j=0;j<2;j++){
      cout << kodeJudul[i][j];
      cout << kodeJudul[i][j];
    }
  }
}

int main(){
  Perpus x;
  x.proses();
  x.output();

  return 0;
}