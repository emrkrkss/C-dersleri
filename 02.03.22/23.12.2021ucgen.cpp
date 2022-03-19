#include<stdio.h>
int main(){
  int a,b,c;
  printf("a kenarini girin: ");
  scanf("%d", &a);
  printf("b kenarini girin: ");
  scanf("%d", &b);
  printf("c kenarini girin: ");
  scanf("%d", &c);

  if(a<b+c && a>b-c || b<a+c && b>a-c || c<b+a && c>a-b){
    printf("Bu Sekil Ucgendir");

    if(a==b && a!=c || a==c && a!=b || b==c && b!=a){
      printf("\n›kizkenar Ucgendir");
    }

    if(a!=b && a!=c && b!=c){
      printf("\nCesitkenar Ucgendir");
    }

    if(a==b && a==c){
      printf("\nEskenar Ucgendir");
    }

  }
  else
  {
    printf("Bu sekil ucgen degildir");
  }
}
