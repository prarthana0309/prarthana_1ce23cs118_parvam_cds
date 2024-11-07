#include<stdio.h>
int main(){
    int a=5;
    int *ptr=&a;
    printf("%d",ptr);
    ptr++;
    printf("\n %d",ptr);
}