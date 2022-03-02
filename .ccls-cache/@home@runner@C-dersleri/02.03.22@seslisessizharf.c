#include<stdio.h>
main(){
	char c;
	string seslikucuk, seslibuyuk;
	printf("Harf giriniz: ");
	scanf("%s",&c);
	seslikucuk = (c=='a' || c=='e' || c=='i'|| c=='o' || c=='u' ) ;
	seslibuyuk = (c=='A' || c=='E' || c=='İ'|| c=='O' || c=='U' );
	if(seslikucuk || seslibuyuk){
	    
	    printf("%c Girilen harf seslidir", c);		
    }
    else
    {
        printf("%c Girilen harf sessizdir", c);
    }
  }