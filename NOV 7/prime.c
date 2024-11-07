#include<stdio.h>
int main(){
    scanf("%d",&n);
    int c=0;
    for(int i=1;i<=n;i++){
        if(n%1==0){
            c++;
        }
    }
    if(c==2){
        printf("prime");
    }
    else{
        printf("not a prime");
    }
}