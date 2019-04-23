#include <bits/stdc++.h>
using namespace std;

int main(){
	int angka[12],berapakali;
	int angka1[10];
	char pil;
	string namefile;
	ofstream ambil;
	ifstream keluar;
	cout<<"a. input or b.sort";cin>>pil;
	switch(pil){
		case 'a':
	cout<<"Berapa kali : ";cin>>berapakali;
	for (int i = 0; i < berapakali; i++)
	{
		cout<<"Masukkan angka 1 : ";cin>>angka[i];
		cout<<"Masukkan angka 2 : ";cin>>angka1[i];
		ambil.open("lalala.txt", ios::app);
			ambil<<angka[i]<<endl;
			ambil<<angka1[i]<<endl;
		ambil.close();
	}
	break;
	case 'b':
		cout<<"Masukka nama file : ";cin>>namefile;
		ifstream keluar(namefile.c_str());
		int j=0;
		while (!keluar.eof())
		{
			keluar>>angka[j];
			keluar>>angka1[j];
			j++;
		}keluar.close();
		for (int i = 0; i < j-1; i++)
		{
			cout<<"angka : "<<angka[i]<<endl;
			cout<<"angka 1 : "<<angka1[i]<<endl; 
		}
		
	break;
	}
}
