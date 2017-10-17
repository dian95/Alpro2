#include <iostream>

using namespace std;


void Proses_Membaca();
void Proses_Menukar();
void Proses_Menampilkan();


int a, b, c , temp;


int main() {
	Proses_Membaca();
	Proses_Menukar();
	Proses_Menampilkan();
	return 0;
}


void Proses_Membaca() {
	cout << "========================" << endl;
	cout << "Masukkan nilai A : ";
	cin >> a;
	
	cout << "Masukkan nilai B : ";
	cin >> b;
	
	cout << "Masukkan nilai C : ";
	cin >> c;}


void Proses_Menukar() {
	temp = b;
	b = a;
	a = c;
	c = temp;
}


void Proses_Menampilkan() {
	cout << "========================" << endl;
	cout << "Nilai A sekarang : " << a << endl;
	cout << "Nilai B sekarang : " << b << endl;
	cout << "Nilai C sekarang : " << c;
	
}
