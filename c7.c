#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,i,n;
    printf("enter first and last numbers");
    scanf("%d %d", &a, &b);
for ( i = a; i <=b; i++)
{
    for ( n =2; n<=i ; n++)
    {
        if (i%n==0)
        {
            break;
        }
        }
        if (n==i)
        
          { 
             printf("%d\n",n);
          }
        
    
    
}

    return 0;
}