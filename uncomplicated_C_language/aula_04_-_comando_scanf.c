#include <stdio.h>
#include <stdlib.h>

int main(){
  
  int nro;

  printf("Digite um numero: ");
  scanf("%d", &nro);
  printf("Numero digitado: %d \n", nro);

  int nro1;
  float f;

  printf("Digite dois numeros: ");
  scanf("%d%f", &nro1, &f);
  printf("Numeros: %d e %f\n", nro1, f);

  return 0;
}
/*
Função scanf faz leitura dos dados no teclado para usá-los depois.

Sintaxe:

scanf("tipos de dados", variáveis);

char letra;
int nro;
float n;
double d;

scanf("%c", &letra);
scanf("%d", &nro);
scanf("%f", &n);
scanf("%f", &d);

*/