#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,a,b,min;
    printf ("enter two numbers");
    scanf ("%d %d",&a,&b);
    min=a<b?a:b;
    for ( i = 1; i <=min; i++)
    {
     if (a%i==0 && b%i==0)
     
        n=i;
     }
     if (n==1)
     printf("co prime numbers");
     else
     printf("not prime number");
    
    
    return 0;
}
