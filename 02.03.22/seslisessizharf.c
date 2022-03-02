#include<stdio.h>
main(){
	char harf;
	printf("Harf giriniz: ");
	scanf("%s",&harf);
	if(harf=='a' || harf=='e' || harf=='i'|| harf=='o' || harf=='u' ){
	    printf("Girilen harf seslidir");		
    }
    else
    {
        printf("Girilen harf sessizdir");
    }
  }
