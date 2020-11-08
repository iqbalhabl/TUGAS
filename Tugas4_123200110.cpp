#include <iostream>
using namespace std;

int kali (int angkaa, int angkab)
{
	int hasilkali = angkab;
	for (int a = 1; a<angkaa; a++){
		hasilkali = hasilkali + angkab;
	}
	return hasilkali;
}
int pangkat (int angkaa, int angkab)
{
	int hasilpangkat = angkaa;
	for (int b = 1; b<angkab; b++){
		hasilpangkat = hasilpangkat * angkaa;
	}
	return hasilpangkat;
}

int main ()

{
	int pilihan,angkaa,angkab;
	int a = 1;
	int b = 1;
	
	cout<<"Menghitung Perkalian dan Perpangkatan\n";
	cout<<"--------------------------------------\n";
	cout<<"1. Perkalian\n";
	cout<<"2. Perpangkatan\n\n";
	cout<<"Pilih : ";
	cin>>pilihan;
	
	switch (pilihan)
	{
	case 1  : cout<<"Input angka A = ";
			  cin>>angkaa;
			  cout<<"Input angka B = ";
			  cin>>angkab;
			  
			  cout<<"\nHasil Perkalian ";
			  cout<< angkaa; 
			  cout<<" x ";
			  cout<< angkab;
			  cout<<" adalah : \n";
			  
			  do{
				  cout<<angkab;
				  a++;
					if (a<=angkaa){
						cout<<" + ";}
				  else {
						cout<<" = ";
						cout<< kali (angkaa,angkab)<<endl;}
				  }
			while (a<=angkaa); break;
	  
	case 2  : cout<<"Input angka A = ";
			  cin>>angkaa;
			  cout<<"Input angka B = ";
			  cin>>angkab;
			  
			  cout<<"\nHasil Perpangkatan ";
			  cout<< angkaa; 
			  cout<<" ^ ";
			  cout<< angkab;
			  cout<<" adalah : \n";
			  
			  do{
				  cout<<angkaa;
				  b++;
					if (b<=angkab){
						cout<<" * ";}
				  else {
						cout<<" = ";
						cout<< pangkat (angkaa,angkab)<<endl;}
				  }
			while (b<=angkab); break;
	default : cout<<"\nPilihan yang anda masukkan salah!!";
	}
	cout<<"\n\n-------TERIMAKASIH-------";
	return 0;
}
