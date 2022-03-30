#include<stdio.h>
int main(){
	int sayi1, sayi2;
	int sonuc = 1;
	//int adet = 0;
	
	do{
	    printf("Sayi 1 Giriniz: ");
	    scanf("%d", &sayi1);
	    printf("Sayi 2 Giriniz: ");
	    scanf("%d", &sayi2);
	    
		sonuc = sayi1 + sayi1;
		
	}
	while (sayi1<=sayi2);
	printf("Sonuc = %d ", sonuc);
}
