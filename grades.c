#include<stdio.h>
int main()
{
    int m;
    printf("enter marks to know your grade:-");
    scanf("%d",&m);
    if(m>85 && m<100)
    printf("Your grade is - A");
    else if(m>70 && m<84)
    printf("Your grade is - B");
    else if(m>55 && m<69)
    printf("Your grade is - C");
    else if(m>40 && m<54)
    printf("Your grade is - D");
    else
    printf("Your grade is - F");
}
