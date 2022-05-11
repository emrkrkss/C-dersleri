#include<stdio.h>
main(){
	int a[4][3];
	for(int i=0; i<4;i++) //satýr kontrolu
	{
		for(int k=0; k<3; k++) //sütun kontrolü
		{
			printf("Eleman Giriniz: a[%d][%d]: ", i, k);
			scanf("%d", &a[i][k]);
		}
	}
	for(int i=0; i<4; i++) //Satýr yazdýrma iþlemi
	{
		for(int k=0; k<3; k++) //Sütun yazdýrma iþlemi
		{
			printf("%10d", a[i][k]); //%3d boþluk arttýrýyor matris arasý. 
		}
		printf("\ n");
		
	}
}
