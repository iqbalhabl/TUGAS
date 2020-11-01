#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
main ()
{
	string user,pass;
	float harian,uts,uas,rerata;
	int pilih;
	
	cout<<"Login akun ====================\n";
	cout<<"Username         : "; 
	getline(cin,user);
	cout<<"Password         : "; 
	getline (cin,pass);
	cout<<"===============================\n\n";

	if ((user=="iqbal_habil") && (pass=="321y"))
	{
		cout<<"Login berhasil!\n\n";
		cout<<"Input nilai mata kuliah\n";
		cout<<"1. Algoritma dan Pemrogaman\n";
		cout<<"2. Kalkulus\n";
		cout<<"Pilih : ";
		cin>>pilih;
		
		switch (pilih)
		{
			case 1 : cout<<"Nilai Harian : ";
					 cin>>harian;
					 cout<<"Nilai UTS    : ";
					 cin>>uts;
					 cout<<"Nilai UAS    : ";
					 cin>>uas;
					 
					 rerata=((harian+uts+uas)/3);
					 if (rerata>=80){
						cout<<"\n\nAnda lulus Algoritma dan Pemrograman dengan nilai "<<setprecision(3)<<rerata<<endl;
						}
				else if (rerata<80){
						cout<<"\n\nAnda tidak lulus Algoritma dan Pemrograman dengan nilai "<<setprecision(3)<<rerata<<endl;
						}
						break;
			case 2 : cout<<"Nilai Harian : ";
					 cin>>harian;
					 cout<<"Nilai UTS    : ";
					 cin>>uts;
					 cout<<"Nilai UAS    : ";
					 cin>>uas;
					 
					 rerata=((harian+uts+uas)/3);
					 if (rerata>=80){
						cout<<"\n\nAnda lulus Kalkulus dengan nilai "<<setprecision(3)<<rerata<<endl;
						}
				else if (rerata<80){
						cout<<"\n\nAnda tidak lulus Kalkulus dengan nilai "<<setprecision(3)<<rerata<<endl;
						}
						break;
			default : cout<<"\n\nInput anda salah!";
						break;}
	}
	else if ((user!="iqbal_habil") && (pass=="321y")){
		cout<<"Username anda salah!\n";}
	else if ((user=="iqbal_habil") && (pass!="321y")){
		cout<<"Password anda salah!\n";}	
	else {
		cout<<"Username dan Password anda salah!\n";
		}				
	

	return 0;
	
}
