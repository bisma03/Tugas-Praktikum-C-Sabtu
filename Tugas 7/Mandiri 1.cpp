#include<iostream>
using namespace std;
int main()
{
	int i, nilai [10];
	for(i=1; i<=10; i++)	
{

cout<<"Nilai Mahasiswa Ke-"<<i<<" : ";
cin>>nilai[i];
}
cout<<"Daftar Nilai Mahasiswa Yang Lulus \n";
for (i=1; i<=10; i++)
{
	if(nilai[i]>=60)
cout<<"Mahasiswa Ke-"<<i<<"Dengan Nilai"<<nilai[i]<<endl;
}
}
