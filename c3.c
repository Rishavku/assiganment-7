#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,a,b=0,c=1;
    printf("enter your number");
    scanf("%d",&n);
    for (i = 0; i <=n; i++)
    {
        a=c+b;
        c=b;
        b=a;
    }
        if (a%n==0)
        {
            printf("fibonacci");
            
        }
        else
            printf("not fibonacci");
        
    

    return 0;
}
