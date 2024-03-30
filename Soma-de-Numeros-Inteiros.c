#include <stdio.h>

int
main ()
{

  int num1, num2;

  printf ("Digite o valor do primeiro numero: ");
  scanf ("%d", &num1);

  printf ("\nDigite o valor do segundo numero: ");
  scanf ("%d", &num2);

  printf ("\nO resultado de %d + %d = %d", num1, num2, num1 + num2);
}
