#include<stdio.h>
main()
{
	int x;
	
	printf("Masukkan bilangan : ");
	scanf("%d",&x);
	if (x%2==0)
	{
		printf("%d adalah bilangan genap\n\n",x);
	}else{
		printf("%d adalah bilangan ganjil\n\n",x);
	}
	return 0;
}