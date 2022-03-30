#include<stdio.h>
int main(){
	int sayac=0;
	int sayi;
	printf("Sayi Giriniz: ");
	scanf("%d", &sayi);
	for (int i = 2; i<sayi; i++){
		if(sayi%i==0){
			sayac++;
		}
	}
	if(sayac==0){
		
		printf("%d Sayisi Asaldýr. ", sayi);
	}
	else 
	{
		printf("%d Sayisi Asal deðildir . ", sayi);
	}	
}
