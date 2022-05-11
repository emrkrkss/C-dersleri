#include"stdio.h"
main()
{
	int notlar[3][5];
	int i=1;
	for(int i=0;i<5;i++)
	{
	printf("\n vize norlatini giriniz.. "); 
		scanf("%d",&notlar[1][i]);	
	}for(int i=0;i<5;i++){
				printf("\n final norlatini giriniz.. "); 
		        scanf("%d",&notlar[2][i]);
		}for(int i=0;i<5;i++){
				printf("\n quiz norlatini giriniz.. "); 
		scanf("%d",&notlar[3][i]);
		}
	

					    
	for(int i=0;i<3;i++){
		for(int k=0;k<5;k++)
		{
			printf("%3d",notlar[i][k]);
		}
		printf("\n");
	}
	printf("\nFinal ortalamsi:\n");
	float f_toplam=0;
	for(int i=0;i<5;i++)
	{
		f_toplam+=notlar[2][i];
	}
 printf("Final Ortalamsi=%f\n",(f_toplam/5.0));
 float ucuncu_ogr_ort=0;
 for(int i=0;i<3;i++)
 {
 	ucuncu_ogr_ort+=notlar[i][3];
 	
 }
 printf("\n3. indexdeki ogr'nin ortalamsi = %f\n",(ucuncu_ogr_ort/3));
 
}
