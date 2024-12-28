#include<bits/stdc++.h>
using namespace std;
int main(){
	int A[11],datagenap[11],j=0;
	for(int i=0;i<11;i++){
		cout<<"Masukkan data ke-"<<i<<"\n";
		cin>>A[i];
		cout<<"Data yang dimasukkan ="<<A[i]<<"\n";	
	}
	for(int i=0;i<11;i++){
		if(A[i]%2==0){
			datagenap[j]=A[i];
			j++;
		}
	}
cout<<"Data Yang Nilainya Genap :\n";
for(int i=0;i<j;i++){
	cout<<datagenap[i]<<" ";
}
cout<<"\n";
return 0;
}
