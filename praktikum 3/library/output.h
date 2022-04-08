using namespace std;

class Output{
	public : 
		void cetak(){
			cout << "Struk pembelian Makanan" << endl;
			cout << "Makanan Yang dibeli : ";
			cout << " Ayam Goreng -> " << data_file[3] << endl;
			cout << " Ayam Bakar -> " << data_file[4] << endl;
			cout << "Harga total Rp" << data_file[0] << endl;
			cout << "Diskon      Rp" << data_file[1] << endl;
			cout << "Harga bayar Rp" << data_file[2] << endl; 
		}

		void getData(){
			ambil_data.open("api_data.txt");
			string t;
			while(!ambil_data.eof()){
				ambil_data >> data_file[index]; 
				
			}
			ambil_data.close();
		}

		private :
		ifstream ambil_data;
		string data_file[30];
		int index = 0;
};