#include <stdio.h>

/* function prototype */
int power(int n, int m);

int main()
{
  int i;

  for (i = 0; i < 10; i++)
    printf("%d: %d %d\n", i, power(2,i), power(-3,i));
  return 0;
}

/* power function - raise base to th nth power */
int power(int base, int n)
{
  int i, p;

  p = 1;
  for (i = 1; i <= n; i++)
    p = p * base;
  return p;
}

