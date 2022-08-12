//Write a program in C to find the square of any number using the function.TSRS
#include<stdio.h>
int squareN(int);
int main()
{
int n,c;
printf("enter the number");
scanf("%d",&n);
c=squareN(n);
printf("square of number is %d ",c);
return 0;
}
int squareN(int n)
{ int s;
  s= n*n;
 return s;
}
