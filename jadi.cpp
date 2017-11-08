
#include <iostream>
using namespace std;

float isWithinRange(float x){ 
	if (x >= 0.00 && x <= 4.00){ 
			return true;
	}else {	 				
		return false; 
	}
}

int main(){
	
	float ip, tip;
	int jml_m = 0, jml_l = 0, jml_tl = 0;
	
	
	cout << "----------------------------------------"<<endl;
	cout << "Pendataan Nilai IP Mahasiswa "<<endl;
	cout << "Data IP harus di antara 0.00 - 4.00"<<endl;
	cout << "----------------------------------------"<<endl;

	do {
		cout << "Masukan IP Mahasiswa 		: ";
		cin >> ip;
			if(isWithinRange(ip)){jml_m += 1;if (ip >= 2.75){tip += ip;jml_l += 1;}else{tip += ip;jml_tl += 1;}}
			else {}
	}while( ip != -999); 
	cout << "----------------------------------------"<<endl;
	cout << "Jumlah Mahasiswa di input 	: "<<jml_m<<endl;
	cout << "Jumlah Mahasiswa Lulus 		: "<<jml_l<<endl;
	cout << "Jumlah Mahasiswa Tidak Lulus 	: "<<jml_tl<<endl;
	cout << "Nilai Rata Rata Mahasiswa 	: "<<tip/jml_m<<endl;

	return 0;
}

