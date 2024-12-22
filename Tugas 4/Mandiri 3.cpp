#include<stdio.h>
#include<conio.h>
main ()
{
	printf("\t\tMENENTUKAN BILANGAN GENAP ATAU GANJIL\n");
	int bil,sisa_bagi;
	printf("masukkan bilangan");
	scanf("%d",&bil);
	sisa_bagi=bil%2;
	if(sisa_bagi==0)
	{printf("angka%d adalah bilangan genap",bil);}
else
{printf("angka%d adalah bilangan ganjil",bil);}
getch();
return 0;
}