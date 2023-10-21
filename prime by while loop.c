
#include <stdio.h>

int main()
{
int n,count=0,cnt,i;
printf("enter the number");
scanf("%d",&n);
while(i!=n){
    i++;
    if(n%i==0){
        count++;
    }
}
cnt=count;
if(n==1){
    printf(" 1 is nor composite nor prime number");
}
else{
    if(cnt==2){
    printf("the no. is prime");
}
else{
    printf("the no. is composite");
}
}
    return 0;
}
