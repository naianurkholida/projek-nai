#include <iostream>
using namespace std;
int main(){
	int angka1,angka2,pilihan, keluar,pilih;
	hitunglagi:
	cout<< "masukan angka  pertama: ";
	cin >>angka1;
	
	cout<< "pilih menu: "<<endl;
	cout<< "1. tambah "<<endl;
	cout<< "2.  kurang "<<endl;
	cout<< "3. kali "<<endl;
	cout<< "4. bagi "<<endl;
	cout<< "pilihan: ";
	cin>>pilihan;

	cout<< "masukan angka kedua:";
	cin >>angka2;
	
	switch(pilihan){
		case 1:
			cout<< "hasil: "<<angka1+angka2<<endl;
			cout<< "1.keluar"<<endl;
			cout<< "2. hitung lagi"<<endl;
			cin>>pilih;
	
			if(pilih ==2){
				goto hitunglagi;
			}
		break;	
		case 2:
			cout<< "hasil: "<<angka1-angka2<<endl;
			cout<< "1.keluar"<<endl;
			cout<< "2. hitung lagi"<<endl;
			cin>>pilih;
	
			if(pilih ==2){
				goto hitunglagi;
			}
		break;
		case 3:
		cout << "hasil:"<<angka1*angka2<<endl;
		cout<< "1.keluar"<<endl;
		cout<< "2. hitung lagi"<<endl;
		cin>>pilih;
	
		if(pilih ==2){
			goto hitunglagi;
		}
		break;	
		case 4:
			cout<< "hasil: "<<angka1/angka2<<endl;				
			cout<< "1.keluar"<<endl;
			cout<< "2. hitung lagi"<<endl;
			cin>>pilih;
	
			if(pilih ==2){
				goto hitunglagi;
			}
		break;	

	
	}
	
	
}