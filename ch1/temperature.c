#include <stdio.h>

float celcius(float fahrenheit);

/* print the Farenheight to Celcius scale */
int main()
{
  int fahr;

  for (fahr = 0; fahr <= 300; fahr = fahr + 20)
    printf("f:%d c:%6.2f\n", fahr, celcius(fahr));
  return 0;
}

/* given a farenheight value (float) return the celcius value */
float celcius(float fahr)
{
  return (5.0 / 9.0) * (fahr - 32);
}

