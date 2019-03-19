#include <stdio.h>

int main()
{
    int a, n;
    printf("Please enter a number: ");
    scanf("%d", &n);
    for(a = 0; a <= n; a++)
    {
        if (n == a * a)
        {
            printf("Squarefree");
            return 0;
        }
    }
    printf("Not Squarefree");
    return 0;
}