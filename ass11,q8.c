//8. Write a function to print PASCAL Triangle. (TSRN)
#include<stdio.h>
int combi(int ,int);
int fact(int);
int pascalTriangle(int);
int main()
{
int n,m,r,lines;
printf("enter the number of lines");
scanf("%d",&lines);
pascalTriangle(lines);

return 0;
}
int pascalTriangle(int lines)
{
int k,r;
for(int i=1;i<=lines;i++)
{
 k=1,r=0;
 for(int j=1;j<=2*lines-1;j++)
 {
  if(j>=lines+1-i&&j<=lines-1+i&&k)
  {
   printf("%2d",combi(i-1,r));
   k=0;
   r++;
  }
  else
  {
   printf("  ");
   k=1;
  }
 }
 printf("\n");
}

}
int combi(int n,int r)
{
  return fact(n)/fact(n-r)/fact(r);
}
int fact(int n)
{
  if(n==0||n==1)
 {
   return 1;
 }
return n*fact(n-1);
}
