#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,n,c=0;
    printf ("enter your number");
    scanf("%d",&n);
    while (n!=0)
    {
    a=n%10;
     n=n/10;
    b=a*a*a;
    c=c+b;
    }
    if (c==n)
    {
        printf("Armstrong number");
    }
    else
    printf("not armstrong number");

    
    
    return 0;
}
