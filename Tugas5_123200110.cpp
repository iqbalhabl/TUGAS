#include <iostream>
using namespace std;
main()
{
int pilih;	

cout<<"Gambar Bangun Datar ===========\n";
cout<<"1. Kotak Bolong\n";
cout<<"2. Segitiga\n";
cout<<"Pilih : ";
cin>>pilih;
cout<<"\n";

switch (pilih)
	{
	case 1 : int panjang,lebar;
			 cout<<"Panjang : ";
			 cin>>panjang;
			 cout<<"Lebar   : ";
			 cin>>lebar;
			for (int a=1; a<=panjang; a++){
				cout<<" ";
				for (int b=1; b<=lebar; b++){
					if   ((a==1)||(a==panjang)||(b==1)||(b==lebar)){
						 cout<<"* ";}
					else {
						 cout<<"  ";
						 }
				}
			cout<<endl;
			}
	break;
	
	case 2 : int tinggi;
			 cout<<"Tinggi : ";
			 cin>>tinggi;
			 for (int a=1; a<=tinggi; a++){
				  int x=1;
				  int y=a;
				  for (int b=1; b<=a; b++){
					   cout<<y<< " ";
					   y = y+(tinggi - x); 
					   x++;
				  }
			 cout<<endl;	  
			}
	break;  
	}

return 0;
}
