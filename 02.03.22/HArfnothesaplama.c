#include<stdio.h>
main(){
	int vize, final, quiz, ort;
	printf("vize giriniz: ");
	scanf("%d", &vize);
	printf("Final giriniz: ");
	scanf("%d", &final);
	printf("Quiz giriniz: ");
	scanf("%d", &quiz);
	if((vize>0 && vize<101) && (final>0 && final<101) && (quiz>0 && quiz<101)){	
		ort=(vize*0.30) + (final*0.60)+ (quiz*0.10);
		if(ort>90 && ort<101)
		{
			printf("AA ile Gectiniz. Ortalamanız = %d  ", ort );		
		}
		else if(ort>85 && ort<90)
		{
		    printf("BA ile Geçtiniz. Ortalamaniz = %d ", ort);
		}
		else if (ort>80 && ort<85)
		{
		    printf("BB ile Geçtiniz. Ortalamaniz = %d ", ort);
		    
		}
		else if(ort>75 && ort<80)
		{
		    printf("CB ile Geçtiniz. Ortalamaniz = %d ", ort);
		    
		}
		else if(ort>70 && ort<75)
		{
		    printf("Kosullu Geçtiniz. Ortalamaniz = %d ", ort);
		    
		}
		else
		{
		    printf("Kaldınız. Ortalamanız = %d", ort);
		}
	}
	else 
	{
		printf("Girilen sayılarda parametre dışı değer mevcut. ");
	}
}
