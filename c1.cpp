#include<stdio.h>
int main()
{
    int a,b,area;
    printf("Enter the value of Both the sides:\n");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        area=a*b;
        printf("Area of Square is:%d\n",area);
    }
    else
    {
        area=a*b;
        printf("Area of Rectangle is:%d\n",area);
    }
}