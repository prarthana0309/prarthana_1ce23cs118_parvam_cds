#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter elements no %d:",i);
    scanf("%d",&a[i]);
    }
    printf("elements are:");
    for(int i=0;i<n;i++)
    {
        
        printf("%d  ",a[i]);
    }
}