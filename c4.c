#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,i,n=1,min;
    printf ("enter two numbers");
    scanf ("%d %d",&a,&b);
    min=a<b?a:b;
    for ( i = 1; i <=min ; i++)
    {
        if (a%i==0 && b%i==0)
    
         n=i;
    }
        printf("H.C.F is %d",n);
        
        
    
    
    return 0;
}
