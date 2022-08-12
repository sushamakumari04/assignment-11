//Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
PrimeN(int);
int main()
{
int n,c;
printf("enter the number");
scanf("%d",&n);
c=PrimeN(n);

return 0;
}
int PrimeN(int n)
{
  int i,j,flag=0;
  for(i=2;i<=n;i++)
  {
    flag=0;
   for(j=2;j<=i/2;j++)
   {
     if(i%j==0){
       flag=1;
       break;
     }
   }
   if(flag==0){
    printf("%d ",i);
   }

  }
}
