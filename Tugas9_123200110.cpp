#include <iostream>
using namespace std;
int main()
{	
	int n;
	cout<<"Masukkan banyak angka : ";
	cin>>n;
	int angka[n];
		 for (int i=0; i<n; i++){
			cout<<"Angka ke-"<<i+1<<" : ";
			cin>>angka[i];
			 }
	cout<<"\n\n_____Hasil_____\n";
	cout<<"Deret       : ";
		 for (int i=0; i<n; i++){
			cout<<angka[i]<<" ";
			 }	
			 
	cout<<"\nMaksimum    : ";
		 int max=0;
		 for (int i=1; i<n; i++){
			if (angka[i]>angka[max]){
				max=i;
				}	
		 }
		 cout<<angka[max];
		 
	cout<<"\nMinimum     : ";
		 int min=0;
		 for (int i=1; i<n; i++){
			if (angka[i]<angka[min]){
				min=i;
				}
		 }
		 cout<<angka[min];
	
	cout<<"\nRata-rata   : ";
		 float rerata, x;
		 for (int i=0; i<n; i++){
			 x+=angka[i];
		 }
		 rerata=x/n;
		 cout<<rerata;
	
	cout<<"\nSelisih Max : ";
	int sel_max;
		 if (angka[0]>angka[1]){
			 sel_max=angka[0]-angka[1];
		 }
		 else {
			 sel_max=angka[1]-angka[0];
		 }
		 for (int i=1; i<n-1; i++){
			if (angka[i]>angka[i+1]){
				if (angka[i]-angka[i+1]>sel_max){
				 sel_max=angka[i]-angka[i+1];
				}
			}
			 else {
			    if (angka[i+1]-angka[i]>sel_max){
				 sel_max=angka[i+1]-angka[i];
				}
			 }
		}
		cout<<sel_max;
		
	return 0;
} 
