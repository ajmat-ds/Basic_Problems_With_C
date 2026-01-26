// Q. Checking wheter a number is Armstrong number or not.

#include <stdio.h>

int main() {
    int i,x,n=0,y,p,d,sum=0;
    printf("Enter a Number: ");
    scanf("%d",&x);
    y=x;
    while(y)
    {
        y=y/10;
        n++;
    }

    for(y=x;y;y=y/10)
    {
        d=y%10;
        for(i=1,p=1;i<=n;i++)
            p=p*d;
        sum = sum+p;
    }

    if(sum==x)
        printf("Yes %d is an Armstrong number.",x);
    else
        printf("No %d is not an Armstrong number.",x);
    
    return 0;
}
