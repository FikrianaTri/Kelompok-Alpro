#include <iostream>
using namespace std;

class sk8{
  public:
    void input();
    void proses();
  private: 
    string a[12][2];
    string nama[4];
    
};

void sk8::input(){
 for(int i = 0; i < 4; i++){
   cout << "Masukan jenis : " ;
   cin >> nama[i];
 
   	for (int k = 0; k < 3; k++){
   cout << "Masukan kode buku : ";
   cin >> a[k][0];
   cout << "Masukan nama buku : ";
   cin >> a[k][1];
    }
  }
  cout<<endl<<endl;
}

void sk8::proses(){
  cout<<"DAFTAR BUKU"<<endl;
  for(int i = 0; i < 4; i++){
   cout << "jenis : "  << nama[i] << "\n\n";
   	for (int k = 0; k < 3; k++){
   cout << a[k][0] << "\t";
   
   cout << a[k][1] << endl;
      }
 }
}

int main() {
  sk8 x;
  x.input();
  x.proses();
 
  return 0;
}