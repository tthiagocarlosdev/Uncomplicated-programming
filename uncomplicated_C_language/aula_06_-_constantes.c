#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415 // outra maneira de declarar uma constante.
int main()
{

  const int nro = 10;

  int soma = nro + 1;
  printf("Constante %d \n", nro);

  float f = PI + 1;
  printf("PI = %f \n", PI);

  return 0;
}
/*
Usamos quando vamos usar uma variável que não muda de valor.
*/