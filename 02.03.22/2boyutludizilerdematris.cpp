#include<stdio.h>
main(){
	int notlar[3][5] =
	{{20,60,90,70,10}, //��renci1
	{30,75,90,75,25},  //��renci2
	{50,80,90,45,30} //��renci3
	
	};
	for(int i=0; i<3;i++) //sat�r tarama
	{
		for(int k=0; k<5; k++) //s�tun tarama
		{
			printf("%3d", notlar[i][k]);
		}
		printf("\n");
	}
	printf("\nFinal ortalamasi\n");
	float f_toplam=0;
	for(int i=0; i<5; i=i+1) //2. sat�rdakileri yani t�m ��rencilerin Final notlar�n�n tamam�n� alma
	{
		f_toplam = notlar[2][i];
	}
	printf("Final ortalamasi = %f\n", (f_toplam/5.0));
	float ucuncu_ogr_ort=0;
	for(int i=0; i<3; i++)
	{
		ucuncu_ogr_ort +=notlar[i][3];
		
	}
	printf("\n 3. �ndexteki Ogrencinin Ortalamas� = %f\n", (ucuncu_ogr_ort/3.0));
}
