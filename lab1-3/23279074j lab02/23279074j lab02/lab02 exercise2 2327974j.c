#include <stdio.h>
 
int main(void)
{
    int number=0;
    while(number<=0||number>99){
        int number;
        printf("Enter an number: ");
        scanf("%d", &number);
    }
    for (int number=10; number>=1; number--){
        printf("%d\n",number);
        printf("Green Bottles, sitting on the wall\n");
        printf("%d\n",number);
        printf("Green Bottles, sitting on the wall\n");
        if(number>1){
            printf("and if 1 Green Bottle should accidentally fall...\n");
            printf("...there’ll be %d\n",number-1);
            printf("Green Bottles, sitting on the wall.\n");
        }else{
            printf("and if 1 Green Bottle should accidentally fall...\n");
            printf("...there’ll be no Green Bottles, sitting on the wall.\n");
        }
    }
        
    
    return 0;
}