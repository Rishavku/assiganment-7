#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,j=0,k=1,l=0;
    printf("enter your number");
    scanf("%d",&n);
    for ( i = 0; i <n; i++)
    {
        l=k+j ;
        k=j;
        j=l;
       
    }
     printf("%d\n",l);
    
    return 0;
}
