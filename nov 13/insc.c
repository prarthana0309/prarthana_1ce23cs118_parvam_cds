#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int ele;
    scanf("%d",&ele);
    for(int i=n;i>0;i++)
    {
        a[i]=a[i-1];
    }
    a[0]=ele;
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}