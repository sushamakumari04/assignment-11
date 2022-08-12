//Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
PrimeBetTwoN(int,int);
int main()
{
int n,m,c;
printf("enter the  two number");
scanf("%d%d",&n,&m);
c=PrimeBetTwoN(n,m);

return 0;
}
int PrimeBetTwoN(int n,int m)
{
  int i,j,flag=0;
  for(i=n;i<=m;i++)
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

