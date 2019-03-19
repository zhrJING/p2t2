#include<stdio.h>

int main(void) {
   const int x = 5;
   double a = x * 2;
   printf("5 multiplied by 2 is %3.2f\n",a);
   double b = x + 2;
   printf("5 plus 2 equals to %3.2f\n",b);
   double c = x - 2;
   printf("5 subtract 2 is %3.2f\n",c);
   double d = x / 2;
   printf("5 divided 2 equals to %3.2f\n",d);
   double e = x % 2;
   printf("the reminder of 5 divided by 2 is %3.2f\n",e);
   return 0;
}
