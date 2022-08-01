#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,p=0,c=1,a,i;
    printf("enter your number");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
    a=c+p;
    c=p;
    p=a;
    
    printf("%d",a);
    }
    return 0;
}
