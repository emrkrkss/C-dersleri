#include<stdio.h>
main(){
	long int x = 1;
	long int a = 0;
	long int sayi;
	long int fak = 1;
	printf("Sayi Giriniz: ");
	scanf("%d", &sayi);
	
	while (x<=sayi)
	{
	    
		fak = x*fak;
		x++;
	}
	printf("%d", fak);
	return 0;
}
