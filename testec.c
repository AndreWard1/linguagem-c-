#include <stdio.h>

int main (){
  int a ;
  int b;
  int c;

  printf("Escreva o salario minimo :");
  scanf("%d",&a);

  printf ("Escreva o slario bruto:");
  scanf("%d",&b);

  c=b/a;

  printf("o slario minimo é :%d",c);
  return 0;
}