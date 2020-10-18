#include <iostream>
#include <string>
using namespace std;
main()
{
	string nama;
	int nim;
	float uts,uas,total;
	cout<<" Nama      : ";
	getline(cin,nama);
	cout<<" NIM       : ";
	cin>>nim;
	cout<<" Nilai UTS : ";
	cin>>uts;
	cout<<" Nilai UAS : ";
	cin>>uas;
	
	total = (uts+uas)/2;
	
	cout<<"\n Hai, nama saya "<<(cin,nama);
	cout<<", NIM "<<nim<<endl;
	cout<<" Nilai akhir saya "<<total;
	
	return 0;	
}
