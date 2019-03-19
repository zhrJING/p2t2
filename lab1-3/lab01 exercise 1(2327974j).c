#include<stdio.h>
//bug NO.1, to tell the compiler to use a file called "stdio.h"
//to get definitions for functions we'll be using
int k = 4;
int main(void) {
int i = 50;//this i is in main block
printf("the value of i here is %d\n", i);

unsigned int j = i * 2;
printf("the value of j here is %d\n", j);
double k = 1.0;
printf("the value of k here is %f\n", k);
//bug No.2, lack of ";"
{
//nested block. this i is different from the one in main. k and j continue however
float i = 5.0;
printf("The value of i is %3f\n", i);
//The value of i is 5.000000
k = i * j;
printf("the value of k here is %f\n", k);
i *= 6;
printf("the value of i here is %f\n", i);
}
//double j;
//bug No.3, j already defined
i = k + i; //i goes back to main
printf("Now , the value of i is %d\n", i);
//Now, the value of i is 550
return 0;
}