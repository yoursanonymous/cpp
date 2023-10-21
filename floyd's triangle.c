
#include <stdio.h>

int main()
{
int n,count=1;
printf("enter the value");
scanf("%d",&n);
for(int row=1;row<=n;row++){
    for(int col=1;col<=row;col++){
        printf("%d  ",count++);
    }
    printf("\n");
}
    return 0;
}
