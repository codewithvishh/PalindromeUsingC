#include<stdio.h>
int main()
{
    int n1,n,x,rev=0;
    printf("enter number\n");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        x=n%10;
        rev=rev*10+x;
        n=n/10;
    }
    if(n1==rev){
        printf("Number is Palindrome\n");
    }
    else
    {
        printf("Number is not Palindrome\n");
    }
    return 0;
}