#include <iostream>
#include <conio.h>
using namespace std;


int i,jmlMhs;
int main()
{
// definisi struktur
struct Mahasiswa
{
char kelas[10]; char nama[30]; char NoMhs[10]; float NilaiAngka; char NilaiHuruf;
};

Mahasiswa mhs[5];
// entri data

cout<<"Masukan Jumlah Mahasiswa : ";cin>>jmlMhs;
for(i=0; i<jmlMhs; i++){
cin.ignore();
cout<<"data mahasiswa ke-"<<i+1<<endl;
cout << "Masukkan nomor mahasiswa	: "; cin.getline(mhs[i].NoMhs, 10);
cout << "Masukkan Nama			: "; cin.getline(mhs[i].nama, 30);
cout<<  "masukan kelas			: "; cin.getline(mhs[i].kelas,10);
cout<<  "masukan nilai angka		: "; cin>>mhs[i].NilaiAngka;

cout<<endl;
if(mhs[i].NilaiAngka >75 &&  mhs[i].NilaiAngka<=100 ){
	mhs[i].NilaiHuruf = 'A';	
}else if (mhs[i].NilaiAngka >= 60){
	mhs[i].NilaiHuruf = 'B';
}else if (mhs[i].NilaiAngka >= 40){
	mhs[i].NilaiHuruf = 'C';
}else if (mhs[i].NilaiAngka >= 20){
	mhs[i].NilaiHuruf = 'D';
}else {
	mhs[i].NilaiHuruf = 'E';
};
}
// tampil data
system("cls");
for(i=0; i<jmlMhs; i++){
	cout<<endl;
cout << "Nomor mahasiswa		: "<< mhs[i].NoMhs;
cout << "\nNama			: "<< mhs[i].nama;
cout<<  "\nkelas			: "<<mhs[i].kelas;
cout << "\nNilai angka		: "<<mhs[i].NilaiAngka;
cout << "\nNilai Huruf		: "<<mhs[i].NilaiHuruf;
cout<<endl;
}

getch();

}
