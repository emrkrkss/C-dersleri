#include<stdio.h>
int main(){
	int x = 0;
	int a = 0;
	int ogrsay = 0;
	int notu = 0;
	int ort;
	printf("Ogrenci Sayisi Giriniz: ");
	scanf("%d", &ogrsay);
	while (x<ogrsay)
	{
		
		printf("Not Giriniz: ");
		scanf("%d", &notu);
		a = a + notu;
		x++;
	}
	ort = a / ogrsay;
	printf("%d", ort);
	return 0;
}
