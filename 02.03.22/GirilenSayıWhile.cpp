#include<stdio.h>
main(){
	int x = 0;
	int a = 0;
	int sayi;
	printf("Sayi Giriniz: ");
	scanf("%d", &sayi);
	
	while (x<=sayi)
	{
		a=x+a;
		x++;
	}
	printf("%d", a);
	return 0;
}
