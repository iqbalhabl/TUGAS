#include <iostream>
using namespace std;
main()
{
	int ayah,ibu,anak1,anak2,harga1,harga2,harga3,harga4,total;
	
	cout<<"Umur Ayah    : ";
	cin>>ayah;
	cout<<"Umur Ibu     : ";
	cin>>ibu;
	cout<<"Umur Anak 1  : ";
	cin>>anak1;
	cout<<"Umur Anak 2  : ";
	cin>>anak2;
	cout<<"\n";
	
	
	
	
	if  ((ayah<=12)&&(ayah>0))
		{
		harga1 = 15000;
		}    
else if ((ayah>12)&&(ayah<21))
		{
		harga1 = 20000;
		}
else if (ayah>20)
		{
		harga1 = 30000;
		}
		
		
	if  ((ibu<=12)&&(ibu>0))
		{
		harga2 = 15000;
		}    
else if ((ibu>12)&&(ibu<21))
		{
		harga2 = 20000;
		}
else if (ibu>20)
		{
		harga2 = 30000;
		}
		
		
	if  ((anak1<=12)&&(anak1>0))
		{
		harga3 = 15000;
		}    
else if ((anak1>12)&&(anak1<21))
		{
		harga3 = 20000;
		}
else if (anak1>20)
		{
		harga3 = 30000;
		}
		
		
	if  ((anak2<=12)&&(anak2>0))
		{
		harga4 = 15000;
		}    
else if ((anak2>12)&&(anak2<21))
		{
		harga4 = 20000;
		}
else if (anak2>20)
		{
		harga4 = 30000;
		}
	total = (harga1+harga2+harga3+harga4)*30;	
	cout<<"Tagihan satu bulan adalah Rp."<<total;
	

	return 0;
}
