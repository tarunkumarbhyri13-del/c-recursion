/// Online C compiler to run C program online
#include <stdio.h>
int output(int i,int n,int count)
{
    if(i>n)
    {
        return count;
    }
    if((i%2)!=0)
    {
        count++;
    }
    output(i+1,n,count);
}
int main()
{
    int m,n;
    printf("Enter the start and end values:\n");
    scanf("%d%d",&m,&n);
    int res=output(m,n,0);
    printf("The %d odd numbers",res);
}