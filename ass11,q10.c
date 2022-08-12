//10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
//function.
#include<stdio.h>
int main()
{
 int i,sum=0;
 for(i=1;i<=5;i++)
 {
    sum=sum+fact(i)/i;
 }
 printf("sum is %d",sum);

    return 0;
}
int fact(int n)
{
    if(n==1||n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}
