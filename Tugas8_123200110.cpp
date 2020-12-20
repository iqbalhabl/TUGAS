#include <iostream>
#include <iomanip>
#define phi 3.14
using namespace std;

struct isi{
	int r;
	short pilihan;
	char ulangi;
};
isi data; 

void macampilihan(){
	cout<<"Hitung Lingkaran ==========\n";
	cout<<"1. Luas Lingkaran\n";
	cout<<"2. Keliling Lingkaran\n";
	cout<<"3. Volume Tabung\n";
}

void luas(){
	float ls;
	cout<<"Jari - jari      : ";
	cin>>data.r;
	ls = phi*data.r*data.r;
	cout<<"Luas Lingkaran adalah "<<setprecision(4)<<ls<<endl;
	cout<<"Ulangi program? (y/n) ";
	cin>>data.ulangi;
	cout<<endl;
}

void keliling(){
	float kel;
	cout<<"Jari - jari      : ";
	cin>>data.r;
	kel = 2*phi*data.r;
	cout<<"Keliling Lingkaran adalah "<<setprecision(4)<<kel<<endl;
	cout<<"Ulangi program? (y/n) ";
	cin>>data.ulangi;
	cout<<endl;
}

void volume(){
	int t;
	float vol;
	cout<<"Jari - jari      : ";
	cin>>data.r;
	cout<<"Tinggi           : ";
	cin>>t;
	vol = (phi*data.r*data.r)*t;
	cout<<"Volume Tabung adalah "<<setprecision(4)<<vol<<endl;
	cout<<"Ulangi program? (y/n) ";
	cin>>data.ulangi;
	cout<<endl;
}
	
void salah(){
	cout<<"Input Salah :)\n";
	cout<<"Ulangi program? (y/n) ";
	cin>>data.ulangi;
	cout<<endl;
}
	
void switchh(){
	cout<<"Pilih: ";
	cin>>data.pilihan;
	
	switch(data.pilihan){
		case 1 :
			luas();
			break;
		case 2 :
			keliling();
			break;
		case 3 :
			volume();
			break;
		default :
			salah();
	}
}

int main(){
	do{
		macampilihan();
		switchh();
	}
	while(data.ulangi == 'y' || data.ulangi == 'Y');
	
	cout<<"Program selesai, Terima kasih :)\n";
	
		
	return 0;
}
