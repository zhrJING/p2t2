#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int i; 
    int count =0;// this counts the number of uppercase letters in the string
    char user[100];
    printf("please enter a string:");
  	gets(user);
    
    printf("the length of your string is: ");
    printf("%d\n",strlen(user));
    //shows length of string
    for(i=0;i<strlen(user);i++)
    {
        if (isupper(user[i])){
            user[i]=tolower(user[i]);
            count++;
        }
    }
    
    //replace all the uppercase
    if(count==0){
        printf("all lowercase string");
        //count>0 means there is at least one uppercase
    }else if(count!=0){
    	printf("here is your new string: ");
        for(i=0;i<strlen(user);i++)
        {
            printf("\n %c",user[i]);
        }
    }
    return 0;
}
