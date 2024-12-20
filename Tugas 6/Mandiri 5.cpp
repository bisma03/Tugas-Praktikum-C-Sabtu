#include<stdio.h>
#include<conio.h>
main()
{
	
double uang,bunga=0.02,hasil;
int a;
printf("PROGRAM SIMPANAN UANG DENGAN BUNGA\n");
printf("==================================\n");
printf("Masukkan uang = Rp.");
scanf("%lf",&uang);
printf("Simpanan = \n");
for (a=1;a<=10;a++)
{
hasil=(uang*bunga)+uang;
uang=hasil;
printf("bulan ke %d,jumlah Rp.%10.3lf\n",a,hasil);
}
printf("====================================");
getch();
}