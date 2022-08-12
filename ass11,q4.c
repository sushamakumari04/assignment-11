//Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int NextPrimeN(int);
int main()
{
int n,pn;
printf("enter the number");
scanf("%d",&n);
pn=NextPrimeN(n);
printf("the next prime number is %d  ",&pn);
return 0;
}
int NextPrimeN(int N)
{
int i,j,flag=0;
 N=N+1;
 for(i=N;1;i++)
 {  flag=0;
    for(j=2;j<=i/2;j++)
    {
     if(i%j==0){
        flag=1;
        break;}
    }
   if(flag==0)
     return i;

 }
}

