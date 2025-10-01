#include<stdio.h>
void toh(int n,char from,char to,char aux);
void main()
{
    int n;
    printf("\n enter disk :");
    scanf("%d",&n);
    toh(n,'a','c','b');
}
void toh(int n,char from,char to,char aux)
{
    if(n==1)
    {
        printf("\n move disk 1 from %c rod to %c rod",from,to);
        return;
    }
    toh(n-1,from,aux,to);
    printf("\n move disk %d from %c rod to %c",n,from,to);
    toh(n-1,aux,to,from);
}
