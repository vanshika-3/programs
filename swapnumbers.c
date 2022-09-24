/swaping numbers without using temporary variable

#include<stdio.h>
int main()
{
    int a,b;
    printf("enter nums to swap- ");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("nums after swap- %d %d",a,b);
}
