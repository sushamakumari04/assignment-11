//Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int HCF(int,int);
int main()
{
int a,b,hcf;
printf("enter two number ");
scanf("%d%d",&a,&b);
hcf=HCF(a,b);
printf(" the hcf is %d",hcf);

return 0;
}
 int HCF(int x,int y)
 {
  int min;
  if(x>y)
  {
     min=y;
  }
  else{
     min=x;
  }
  for(int i=min;i>1;i--)
  {
    if(x%i==0&&y%i==0)
    {
      return i;
    }
  }

 }
