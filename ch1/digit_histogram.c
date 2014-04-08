#include <stdio.h>

#define HEIGHT 5 /* The max height of our histogram */

/* count digits, (with array) and plot a histogram */
int main()
{
  int c, i, j, nwhite, nother;
  int ndigit[10];

  nwhite = nother = 0;
  for (i = 0; i < 10; i++)
    ndigit[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9')
      ++ndigit[c - '0'];
    else if (c == ' ' || c == '\t' || c == '\n')
      ++nwhite;
    else 
      ++nother;
  }

  printf("histogram\n");
  for (j = HEIGHT; j > 0; j--) {
    printf("\n%d: ", j);
    for (i = 0; i < 10; i++) {
      if (ndigit[i] >= j)
        printf("X");
      else 
        printf(" ");
    }
  }

  printf("\n  0123456789");
  printf("\n\n whitespace = %d, other = %d\n", nwhite, nother);
}
