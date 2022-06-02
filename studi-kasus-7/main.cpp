#include <iostream>
using namespace std;

class hewan{
public:
int totalhewan, pilihan;
string hewan[50];
string hewanpilihan;
char karakter;

void input(){
  cout<<"================================="<<endl;
  cout<<"|          STUDI KASUS 7        |"<<endl;
  cout<<"================================="<<endl;
  cout<<"Masukkan Jumlah Hewan :";
  cin>>totalhewan;
  for (int i=0; i<totalhewan; i++){
    cout<<"Input hewan ke-"<<i+1<<"=";
    cin>>hewan[i];
    }
  cout<<endl;
  cout<<" Sebelum urut"<<endl;
  cout<<"-----------Output---------------"<<endl;
  for (int i=0; i<totalhewan; i++){
    cout<<"Hewan ke-"<<i+1<<"="<<hewan[i]<<endl;
  }
  cout<<"--------------------------------"<<endl;
}

void sorting(){
  int i, j;
  string tmp;
  for (i = 0; i < totalhewan; i++){
    for (j = 0; j < totalhewan - i - 1; j++){
      if (hewan[j] > hewan[j + 1]){
        tmp = hewan[j];
        hewan[j] = hewan[j + 1];
        hewan[j + 1]= tmp;    
    }
  }
}
  cout<<endl;
  cout<<"setelah diurutkan "<<endl;
  cout<<"-------------- OUTPUT --------------"<<endl;
  for (int i=0; i<totalhewan; i++) {
    cout<<"Hewan Ke-"<<i+1<<" : "<<hewan[i]<<"|"<<endl;
  }
  cout<<"===================================="<<endl<<endl;
  }

void output(){
  cout<<"Pilih Hewan Di Bawah ini : "<<endl;
  for(int i=0; i<totalhewan; i++){
    cout<<"Hewan ke-"<<i+1<<" : "<<hewan[i]<<"     "<<endl;
  }
  cout<<"------------------------------------"<<endl<<endl;
  cout<<"pilihan : ";cin>>pilihan;
  cout<<"Hewan yang dipilih : "<<hewan[pilihan-1]<<endl;
  hewanpilihan= hewan[pilihan -1];
  cout<<"Mencari Karakter apa : ";
  cin>>karakter;
  for(int i = 0 ;i < hewanpilihan.size(); i++){
    if(hewanpilihan[i] == karakter){
      cout<<"karakter ditemukan pada indeks ke-"<<i<<endl;
    }
    else{
      cout<<"Karakter tidak ditemukan pada indeks ke-"<<i<<endl;
    }
  }
}
};
int main(){
  hewan obj;
  obj.input();
  obj.sorting();
  obj.output();
  return 0;
}