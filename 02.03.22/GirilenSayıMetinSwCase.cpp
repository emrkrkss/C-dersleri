#include <stdio.h>
main(){
	int sayi, y, o, b;
	printf("Sayi Giriniz: ");
	scanf("%d", &sayi);
	y = sayi /100;
	o = (sayi/10) % 10;
	b = sayi % 10;
	switch (y){
	case 0: printf("  ");
	break;
	case 1: printf("Yuz ");
	break;
	case 2: printf("Ýki Yuz ");
	break;
	case 3: printf("Uc Yuz ");
	break;
	case 4: printf("Dört Yuz ");
	break;
	case 5: printf("Bes Yuz ");
	break;
	case 6: printf("Altý Yuz ");
	break;
	case 7: printf("Yedi Yuz ");
	break;
	case 8: printf("Sekiz Yuz ");
	break;
	case 9: printf("Dokuz Yuz ");
	default: printf("Hata");	
	}
	switch(o){
		case 0: printf("");
		break;
		case 1: printf("on ");
		break;
		case 2: printf("Yirmi");
		break;
		case 3: printf("Otuz ");
		break;
		case 4: printf("Kirk ");
		break;
		case 5: printf("Elli ");
		break;
		case 6: printf("Altmis");
		break;
		case 7: printf("Yetmiþ");
		break; 
		case 8: printf("Seksen ");
		break; 
		case 9: printf("Doksan ");
	}
	switch(b){
		case 0: printf("  ");
		break;
		case 1: printf("bir ");
		break;
		case 2: printf("Ýki ");
		break;
		case 3: printf("Uc ");
		break;
		case 4: printf("Dort ");
		break;
		case 5: printf("Bes ");
		break;
		case 6: printf("Altý ");
		break;
		case 7: printf("Yedi ");
		break;
		case 8: printf("Sekiz ");
		break;
		case 9: printf("Dokuz ");		
	}
}	

