#include <stdio.h>
main(){
	int ay;
	printf("Ay Giriniz : ");
	scanf("%d", &ay);
	switch(ay){
	case 3:
	case 4:
	case 5: printf("ÝlkBahar");
	    break;
	case 6:
	case 7:
	case 8: printf("Yaz");
	    break;
	case 9:
	case 10:
	case 11: printf("Sonbahar");
	    break;
	case 12:
	case 1:
	case 2: printf("Kis");
		break;
	default: 
	printf("Hatali Giris");
	
}
}
