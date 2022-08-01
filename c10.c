#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,j,s,k=0,m=0;
    for ( i = 1; i <=1000; i++)
    {
    while (i!=0)
    {
       j= n%10;
       n=n/10;
       s=j*j*j;
       k=k+s;
    }
    if (s=i)
printf("%d",k);
    }
    return 0;
}
