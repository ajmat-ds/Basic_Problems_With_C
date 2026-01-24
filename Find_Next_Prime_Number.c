//Q Find Next Prime Number of a given number.
#include <stdio.h>
int main()
{
int i,x,n;
printf("Enter a number: ");
scanf("%d",&n);
for(x=n+1;;x++)
{
    for(i=2;i<x;i++)
        {
        if(x%i==0)
        break;
        }
    
    if(i==x)
    {
    printf("Next Prime Number is %d",x);
    break;
    }
}
    return 0;
}
