#include<stdio.h>
int main(){
	int sayi1 = 1, sayi2 = 1;
	int sonuc = 0;
	
	printf("Sayi 1 Giriniz: ");
	scanf("%d", &sayi1);
	printf("Sayi 2 Giriniz: ");
	scanf("%d", &sayi2);
	do{
	   
	    
		sonuc = sonuc + sayi1;
		sayi2--;
		
	}
	while (sayi2>0);
	printf("Sonuc = %d ", sonuc);
}
