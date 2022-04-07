#include <iostream>
using namespace std;

class WM {

		
	public:
		WM(){};
		void sedia();
		void pilihan();
		void jauh();
		
	private:
		int pilih, harga, total, banyak, jarak;
		float diskon;
	
};

void WM :: sedia(){
	
	cout << "\t\tWARUNG MAKAN GEMBIRA\n";
    cout << "\t=================================\n"; 
    cout << "\nMenu Makanan dan Harga : \n"; 
    cout << "1. Ayam Geprek    : Rp21.000\n";
    cout << "2. Ayam Goreng    : Rp17.000\n";
    cout << "3. Udang Goreng   : Rp19.000\n";
    cout << "4. Cumi Goreng    : Rp20.000\n";
    cout << "5. Ayam Bakar     : Rp25.000\n";
    
   
}
void WM :: pilihan(){
	cout << "\nBanyak pesanan : ";
    cin >> banyak;
	for(int i = 1; i <= banyak; ++i){
	cout << "\nSilahkan Pilih Makanan Anda : ";
    cin >> pilih;
  
  if (pilih == 1){
    cout << "1. Ayam Geprek : Rp21.000" << endl;
    harga = harga+21000;
    
  }
  else if (pilih == 2){
    cout << "2. Ayam Goreng : Rp17.000" << endl;
    harga=harga+17000;
    
  }
  else if (pilih == 3){
    cout << "3. Udang Goreng : Rp19.000" << endl;
    harga = harga+19000;
  }
  else if (pilih == 4){
    cout << "4. Cumi Goreng : Rp20.000" << endl;
    harga = harga + 20000;
   
  }
  else if(pilih == 5){
    cout << "5. Ayam Bakar : Rp25.000" << endl;
    harga = harga+25000;
   
  }
}
}

void WM :: jauh(){
	int bayar, kembalian;
	cout << "Berapa km jarak rumah kamu dari restoran : ";
    cin >> jarak;
    cout << "\nJarak dari Restoran ke Rumah Anda adalah " << jarak << " Kilometer.";
   
  if (jarak <= 3){

    if (harga <= 25000){

      total = harga + 15000;
  }
    else  if (harga > 25000){

      cout << "\n\nAnda mendapatkan potongan ongkir sebesar Rp3.000";
      total = harga + 12000;
    }
    else if (harga > 50000){

      cout << "\nAnda mendapatkan potongan diskon sebesar 15% dan ongkir sebesar Rp5.000";
      diskon = harga * 0.15;
      total = harga - diskon + 10000;
    }

    else if ((harga > 150000)){

      cout << "\n\nAnda mendapatkan potongan diskon sebesar 35% dan ongkir sebesar Rp8.000";
      diskon = harga * 0.35;
      total = harga - diskon + 7000;
      
    }
  }

  else if (jarak > 3){

    if (harga <= 25000){

    total = harga + 25000;
    
  }

    if ((harga > 25000) && (harga <= 50000)){

      cout << "\n\nAnda mendapatkan potongan ongkir sebesar Rp3.000";
      total = harga + 22000;
     
    }
    else if ((harga > 50000) && (harga <= 150000)){

      cout << "\n\nAnda mendapatkan potongan diskon sebesar 15% dan ongkir sebesar Rp5.000";
      diskon = harga * 0.15;
      total = harga - diskon + 20000;
     
  
  }

    else if ((harga > 150000)){

      cout << "\n\nAnda mendapatkan potongan diskon sebesar 35% dan ongkir sebesar Rp8.000";
      diskon = harga * 0.35;
      total = harga - diskon + 17000;
      
    }
  }
  
    cout <<"\nTotal Harga : " << total;
    cout << "\nMasukkan Uang Anda : ";
    cin >> bayar;
    cout << "Kembalian : " << bayar - total;	
}
	



int main(){
	WM x;
	x.sedia();
	x.pilihan();
	x.jauh();
	return 0;
}
