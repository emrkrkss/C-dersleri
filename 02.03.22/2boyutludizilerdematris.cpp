#include"stdio.h"
main()
{
	int notlar[3][5]= {{20,60,90,70,10},    
	                   {30,75,90,75,25},
					   {50,80,90,45,30}};
					    
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
