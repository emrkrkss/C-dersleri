#include <stdio.h>
main(){
	int vize, final, quiz, ort, s;
	printf("vize giriniz: ");
	scanf("%d", &vize);
	printf("Final giriniz: ");
	scanf("%d", &final);
	printf("Quiz giriniz: ");
	scanf("%d", &quiz);
	if((vize>0 && vize<101) && (final>0 && final<101) && (quiz>0 && quiz<101)){	
		ort=(vize*0.30) + (final*0.60)+ (quiz*0.10);
		if(ort>=70)
		{
			printf("Gectiniz. Ortalamanız = %d  ", ort );		
		}
		else
		{
			printf("Kaldiniz. Ortalamaniz = %d ", ort);
		}		
	}
	else
	{
		printf("Girilen değer parametre disindadir. ");
	}
}
