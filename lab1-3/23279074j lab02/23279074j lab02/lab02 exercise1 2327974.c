#include <stdio.h>
 
int main()
{
    int number1,number2;
    float result = 0;
    char op; 
     
    printf("Enter first number: ");
    scanf("%d",&number1);
    printf("Enter second number: ");
    scanf("%d",&number2);
     
    printf("Enter operation: ");
    scanf(" %c",&op);

    switch(op)    
    {
        case '+':
            result=number1+number2;
            break;
             
        case '-':
            result=number1-number2;
            break;
         
        case '*':
            result=number1*number2;
            break;
             
        case '/':
            result=(float)number1/(float)number2;
            break;
             
        case '%':
            result=number1%number2;
            break;
        default:
            printf("Invalid operation.\n");
    }
 
    printf("Result: %d %c %d = %f\n",number1,op,number2,result);
    return 0;
}