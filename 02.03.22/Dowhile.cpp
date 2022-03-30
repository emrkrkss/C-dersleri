#include<stdio.h>
main(){
	int sayi;
	int adet = 0;
	int top = 0;
	
	do{
	    printf("Sayi Giriniz: ");
	    scanf("%d", &sayi);
		top = sayi + top;
		adet++;
	}
	while (sayi!=0);
	printf("Girilen Sayi Adedi %d , Toplam %d ", adet, top);
}
