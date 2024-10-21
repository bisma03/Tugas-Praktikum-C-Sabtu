#include <iostream>
#include <math.h>

using namespace std;
int main ()
{
	float sisi_miring,alas,tinggi;
	
	cout<<"Program mencari sisi miring"<<endl;
	
	alas=5;
	tinggi=4;
	
	sisi_miring = sqrt(pow(alas,2) + pow(tinggi,2) );
	cout<<"..........................."<<endl;
	
	cout<<"sisi miring : "<<sisi_miring;
	
	return 0 ;
}
         