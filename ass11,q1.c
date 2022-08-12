//Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int LCM(int ,int);
int main()
{
int a,b,lcm;
printf("enter two number");
scanf("%d%d",&a,&b);
lcm=LCM(a,b);
printf("lcm is %d",lcm);

return 0;
}

int LCM(int x,int y)
{
 int max;
 if(x>y){
    max=x;
 }
 else{
    max=y;
 }
 for(int i=max;1;i++)
 {
    if(i%x==0&&i%y==0){
        return i;
    }
 }

}
