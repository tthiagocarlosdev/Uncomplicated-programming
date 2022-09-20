#include <stdio.h>
#include <stdlib.h>

int main()
{
  //variável = expressão;
  int x = 5, y;
  y = x;
  y = x + 10;

  int m, n, o;
  m = n = o = 10;

  int z = 97;
  char ch1, ch2 = 'A';
  ch1 = z;
  printf("ch1 = %c \n", ch1);
  z = ch2;
  printf("z = %d \n", z);

  int w = 833;
  float f1, f2 = 5.25;
  f1 = w;
  printf("f1 = %f \n", f1);
  w = f2;
  printf("w = %d \n", w);

  float h = 97.3;
  char cha1, cha2 = 'A';
  cha1 = h;
  printf("cha1 = %c \n", cha1);
  h = cha2;
  printf("h = %f \n", h);

  return 0;
}

/*
variável = expressão;
int x = 5, y;
y = x;
y = x + 10;

*/