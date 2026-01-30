// Understanding Recursion with the help of basic problem. 

#include <stdio.h>
void f1();
int main()
{
    f1();       // Calling f1() function
    printf("\n ");
    return 0;

}
void f1()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a>0)                
        f1();              // If a is greater than zero call f1 fucntion.
    printf("%d ",a);
}