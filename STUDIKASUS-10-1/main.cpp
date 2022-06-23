#include <iostream>
using namespace std;
class SK{
  private:
    int *nim;
    int nimMhs[5];
    string *nama;
    string namaMhs[5];
    
  public:
  void input(){
    cout << "\tMasukkan Data Mahasiswa Berhasil Masuk \n";
cout << "\t  Babak Final Lomba Parmatika"<<endl<<endl;
    for (int i=0; i<5; i++){
      cout << "Masukkan NIM Finalis : ";
      cin >> nimMhs[i];
      cout << "Masukkan Nama Finalis : ";
      cin >> namaMhs[i];
      cout<<"=============================="<<endl;
    }
  }
  void proses(){
  	cout << "\n=============================";
  	cout << "\nMenyimpan data ke alamat \n";
  	cout << "=============================\n";
    nim = new int[5];
    nama = new string[5];
    for(int i=0; i<5; i++){
      *nim = nimMhs[i];
      nim += 1;
      *nama = namaMhs[i];
      nama+= 1;
    }
  }
  void output(){
    nim -=5 ;
    nama -= 5;
    for (int i=0; i<5; i++) {
      cout << "\nNama ke-" << i+1 << " : ";
      cout << *nama ;
      nama += 1;
      cout << "\nNim : " ;
      cout << *nim ;
      nim += 1;
    }
  }

};
int main(){
  SK studi;
  studi.input();
  studi.proses();
  studi.output();
  
}