#include <stdio.h>

int main()
{
int n,original,rem,fact=1,sum=0;
printf("enter the value of n");
scanf("%d",&n);
original=n;
while(n!=0){
    rem=n%10;
    for(int i=1;i<=rem;i++){
        fact=fact*i;
    }
    sum=sum+fact;
    fact=1;
    n=n/10;

}
printf("%d\n",sum);
    if(sum==original){
        printf("the no. is strong");
    }
    else{
        printf("the no. is not stong");
    }
    return 0;
}
