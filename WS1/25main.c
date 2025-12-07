#include <stdio.h>
#include <math.h>

int main(void) {
   double x;
   double y;
   double z;

   /* Type your code here. Note: Include the math library above first. */
   scanf("%lf",&x);
   scanf("%lf",&y);
   scanf("%lf",&z);
   printf("%0.2lf %0.2lf %0.2lf %0.2lf\n", pow(x, z), pow(x,y*y), fabs(y), pow(sqrt(x * y),z));

   return 0;
}
