// Generalized Form Skeloton
#include <stdio.h>
int main()
{
int i,j,n;
printf("Enter a number: ");
scanf("%d",&n);   
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=n+1-i)  /* Here Less than equal to sign for upper traingular type
                             and Greater than equal to for lower traingular type.*/
            printf("*");
            else
            printf(" ");

        }
        printf("\n");
    }
    return 0;
}