#include <stdio.h>
#include <string.h>

int main()
{
	int i,j;
    int image[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            image[i][j]=85*i+40*j;
            printf("%d\n",image[i][j]);
        }
    }
    return 0;
}
