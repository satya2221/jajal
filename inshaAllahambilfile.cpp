#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

ofstream simpan;
int banyakdata;
typedef struct{
	string nama;
	int layanan, lama;
	float berat, harga;
	char kode[3];	
}pelanggan;
pelanggan data[100];
int main(){
	string carifile;
	cout<<"Cari file yang akan diambil : ";cin>>carifile;
	ifstream ambil(carifile.c_str());
	if(ambil.fail())
	cout<<"error cuk";
	int j=0;
	for(int i=0;i<100;i++){
		ambil>>data[i].nama;
		if(ambil.eof())
		break;
		ambil>>data[i].layanan;
		ambil>>data[i].lama;
		ambil>>data[i].berat;
		ambil>>data[i].harga;
		
	}
	
	for (int i=0;i<3;i++){
	cout<<data[i].nama<<endl;
	cout<<data[i].layanan<<endl;
	cout<<data[i].lama<<endl;
	cout<<data[i].berat<<endl;
	cout<<data[i].harga<<endl;}
// for(int i=0;i<j;i++){
//	cout<<nama<<endl<<a<<endl<<b<<endl<<c<<endl<<d;
// }
 	
}
