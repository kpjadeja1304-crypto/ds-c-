#include<stdio.h>
#define max 30

int stack[max];
int top=-1;

void push(int val);
int pop();
void main()
{
   int n,i,fact=1;
   printf("\n enter number :");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {
       push(i);
   }
   while(top!=-1)
   {
       fact=fact*pop();
   }
   printf("\n factorial of number %d is : %d",n,fact);
}
void push(int val)
{
    if(top==max-1)
    {
        printf("\n Stack Overflow!");
        return;
    }
    top=top+1;
    stack[top]=val;
}
int pop()
{
   int val;
   if(top==-1)
   {
       printf("\n stack underflow!");
       return -1;
   }
   val=stack[top];
   top=top-1;
   return val;
}
