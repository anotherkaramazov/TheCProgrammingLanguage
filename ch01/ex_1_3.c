#include <stdio.h>

/*  Print Fahrenheit-celcius table
 *  for far = 0, 20, ..., 300; floating-points version
*/
int main(int argc, char **argv)
{
  float fahr, celcius;
  int lower, upper, step;

  lower = 0;    /*  lower limit of temperature table  */
  upper = 300;  /*  upper limit */
  step = 20;    /*  step size */

  fahr = lower;
  printf("fahr celcius\n");
  while (fahr <= upper) {
    celcius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0F %6.1f\n", fahr, celcius);
    fahr = fahr + step;
  }

}
