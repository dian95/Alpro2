
#include <iostream>

using namespace std;
	
	typedef struct 
	{
		int tgl;
 		string hari;
 		string bulan;
 		int tahun;
 	} tanggal;

 	int main()
 	{
 		tanggal A;
 		cin >> A.tgl;
 		cin >> A.hari;
  		cin >> A.bulan;
   		cin >> A.tahun;

   		cout<< "data yang dimasukan adalah tanggal "<<A.tgl
   		<<" hari "<<A.hari
   		<<" bulan "<<A.bulan
   		<<" tahun "<<A.tahun
   		<<endl;

   		return 0;
   	}