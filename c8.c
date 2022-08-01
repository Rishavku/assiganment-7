#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,i,b;
    printf("enter your number");
    scanf("%d",&a);

     for ( i = a+1; i ; i++)
     {
        for ( b = 2; b <=i ; b++)
        {
           if (i%b==0)
           {
           break;
        }
        }
        if (b==i)
        {
            printf("%d",b);
            break;
        }
        
     }
     
    return 0;
}
