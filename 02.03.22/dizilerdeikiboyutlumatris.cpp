#include<stdio.h>
main(){
	int a[4][3];
	for(int i=0; i<4;i++) //sat�r kontrolu
	{
		for(int k=0; k<3; k++) //s�tun kontrol�
		{
			printf("Eleman Giriniz: a[%d][%d]: ", i, k);
			scanf("%d", &a[i][k]);
		}
	}
	for(int i=0; i<4; i++) //Sat�r yazd�rma i�lemi
	{
		for(int k=0; k<3; k++) //S�tun yazd�rma i�lemi
		{
			printf("%10d", a[i][k]); //%3d bo�luk artt�r�yor matris aras�. 
		}
		printf("\ n");
		
	}
}
