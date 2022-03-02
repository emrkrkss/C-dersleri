#include<stdio.h>
main(){
  int sayi1, sayi2, secim;
  float sonuc;
  printf("Sayı 1 Giriniz: ");
  scanf("%d", &sayi1);
  printf("Sayı 2 Giriniz: ");
  scanf("%d", &sayi2);
  printf("Bir Seçim yapınız: ");
  scanf("%d", &secim);
  if(sayi1>=sayi2)
  {
    if(secim==1)
    {
      sonuc=sayi1+sayi2;
      printf("%f Sonucunuz ", sonuc);
    }
    else if(secim==3)
    {
      sonuc=(sayi1/sayi2);
      printf("Sonucunuz  %f  ", sonuc);
    }
    else if(secim==2)
    {
      sonuc=sayi1-sayi2;
      printf("%f Sonucunuz ", sonuc);
    }
    else if(secim==4)
    {
      sonuc=sayi1*sayi2;
      printf("%f Sonucunuz ", sonuc);
    }
  }
  
}

