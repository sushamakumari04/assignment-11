//Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int main()
{
int n,pm;
printf("enter the number");
scanf("%d",&n);
pm=PN(n);
printf(" %d is a prime number",pm);
return 0;
}
int PN(int N)
{
 int flag=0;
 for(int i=2;i<=N/2;i++){
   if(N%i==0){
      flag++;
      break;
   }
 }
 if(flag==0){
  return N;
 }
 else {
    return 0;
 }


}
