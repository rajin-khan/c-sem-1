//This program will print a hollow right triangle pattern of n number of lines.

#include<stdio.h>

int main()
{
    int m, n;

    printf("\nThis program will print a hollow right triangle pattern of n number of lines.\n\n");

    printf("Please enter the values of n: ");
    scanf("%d", &n);

    printf("\n");

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            if ((i==1)||(i==n)||(j==1)||(j==i))
            {
            printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}