
#include <stdio.h>

int main()
{
    int n,k,m;
    printf("enter the numbers");
    scanf("%d %d",&n,&k);
    for(int j=1;j<=n;j++){
        for(int i=1;i<=k;i++){
            m=j*i;
            printf(" %d* %d= %d",i ,j ,m);
        }
        printf("\n");
    }
    return 0;
}
