#include<stdio.h>

	int uzunluk(char dizi[])
	{
		int i;
		for (i=0; dizi[i]!='\0';i++)
		{
			
		}
		return i;
	}
	main(){
		char kelime[100];
		printf("String giriniz = ");
		gets(kelime); //Kelimeye string de�er ald�k. 
		printf("Girilen string uzunlugu %d", uzunluk(kelime));
	}
	
