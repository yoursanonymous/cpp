#include <stdio.h>
int main()
{
    int n,original,sum=0,rem,mul=1,cnt,count,;
    printf("enter the no.");
    scanf("%d",&n);
    original=n; count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    cnt=count;
    n=original;
    while(n!=0)
    {
        rem=n%10;
        while(cnt!=0)
        {
            mul=mul*rem;
            cnt--;
        }
        sum=sum+mul;
        cnt=count;
        n=n/10;
        mul=1;
    }
    printf("%d",sum);
    if(sum==original){
        printf("the no. is armstrong");
    }
    else{
        printf("the no. is not armstrong");
    }
    return 0;
}
