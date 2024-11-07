#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int fact=1;
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d",i);
        }
    }
    
}