//Write a function to print first N terms of Fibonacci series (TSRN).
#include<stdio.h>
int fact(int);
int main()
{
int n,c;
printf("enter the value of n");
scanf("%d",&n);
c = fact(n);
return 0;
}
int fact(int n)
{
 int prev=1,current=1,nextTerm=0;
 if(n==1||n==2){
  printf("1");
 }
 printf("1 ");
 printf("1 ");
 for(int i=1;i<n-1;i++)
 {
  nextTerm = current+prev;
  printf("%d  ",nextTerm);
   prev = current;
  current=nextTerm;
}


}
