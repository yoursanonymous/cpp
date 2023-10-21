#include <stdio.h>
int main()
{
    int n,rem,rev=0,original;
    printf("enter the no.");
    scanf("%d",&n);
    original=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("%d \n",rev);
    if(rev==original){
        printf("the no. is palindrome\n");
    }
    else{
        printf("the number is not palindrome");
    }
    return 0;
}
