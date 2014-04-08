#include <stdio.h>

/* function prototype */
int power(int n, int m);
int power2(int n, int m);

int main()
{
  int i;

  for (i = 0; i < 10; i++) {
    printf("v1-%d: %d %d\n", i, power(2,i), power(-3,i));
    printf("v2-%d: %d %d\n", i, power2(2,i), power2(-3,i));
  }
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

/* power function - version 2 demonstrating call by value */
int power2(int base, int n)
{
  int p;

  p = 1;
  for (p = 1; n > 0; --n)
    p = p * base;
  return p;
}
