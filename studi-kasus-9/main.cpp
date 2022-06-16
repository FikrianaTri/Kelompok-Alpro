#include <iostream>
using namespace std;

class sk{
	public:
		void input();
		void proses();
		void output();
		
	private:
		string array [45];
		string kwr[10][3];
		int banyak,n,t;
};

void sk :: input(){
   cout<<"\t\t\t+-------------------------------------------------+"<<endl;
      cout<<"\t\t\t|\t\tData karyawan pelatihan softskill         |"<<endl;
      cout<<"\t\t\t+-------------------------------------------------+"<<endl;
	cout << "masukan banyak jumlah data : ";
	cin >> banyak;
	t = banyak * 3;
	for(int i=0; i < t; i++){
		cout << "dari departemen mana : ";
		cin >> array[i];
		i++;
		cout << "masukan id : ";
		cin >> array[i];
		i++;
		cout << "masukan nama : ";
		cin >> array[i];
		cout << endl;
	}
}

void sk :: proses(){
	n = 0;
	for(int i=0; i <banyak; i++){
		for (int j=0; j < 3; j++){
			kwr[i][j] = array[n];
			n++;
		}
	}
}

void sk :: output(){
	cout << "departemen " << "   id  " << "     nama \n";
	for(int i =0 ;i <banyak;i++){
		for(int j =0; j < 3; j++){
			cout << kwr[i][j] << "        ";
			
		}
		cout << endl;
	}
}

int main(){
	sk c;
	c.input();
	c.proses();
	c.output();
}