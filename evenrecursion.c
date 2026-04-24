// Online C compiler to run C program online
#include <stdio.h>
int output(int i)
{
if(i<=-7)
{
    return i;
}
    if(i%2==0)
    {
    printf("i=%d\n",i);    
    }
    output(i-1);
}
int main() 
{
    output(4);
    
}