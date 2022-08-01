#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    for ( i = 1; i <=100; i++)
    {
    for ( n = 2; n <=i; n++)
        {
        if (i%n==0)
        {
        break; 
        }
        }
         if (i==n)
    {
         printf("prime number is %d\n",n);
         
         
    }  

        
    
    }
    
    return 0;
}
