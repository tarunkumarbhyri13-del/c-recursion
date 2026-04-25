// Online C compiler to run C program online
#include <stdio.h>
int output(int i,int n,int fact)
{
    if(i<=1)
    {
        return fact;
    }
    fact=fact*i;
    output(i-1,n,fact);
}
int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    int res=output(n,n,1);
    printf("Factorial of %d is %d",n,res);
}