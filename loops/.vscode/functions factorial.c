#include<stdio.h>
void factorial(){
    int n,fact;
    for( int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n,fact;
    printf("enter the no. that you want to find factorial of : ");
    scanf("%d",&n);
    fact();
    return 0;
}