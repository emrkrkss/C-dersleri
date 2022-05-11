#include<stdio.h>
int main(){
	int sayi[10];
	int i=0, j, temp;
	
	while(i<10){
		printf("\n Dizinin %d . elemanini Gir: ", i); //diziye klavyeden deðer girme.
		scanf("%d", &sayi[i]);
		i=i+1;
	}
	for (i=0; i<10; i=i+1) //
	{
		for(j=i+1; j<10;j=j+1)
		{
			if(sayi[i]<sayi[j])
			{
				temp=sayi[i];
				sayi[i]=sayi[j];
				sayi[j]=temp;
			}
		}
	}
	printf("\n Girilen Sayilarin Buyukten Kucuge siralanmasi \n");
	i=0;
	while(i<10){
		printf("\n sayi[%d] = %d", i ,sayi[i]);
		i++;
		}
		
	}
