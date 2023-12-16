#include<stdio.h>
int main (){
int n,isprime,t,c;
printf("enter the no. of no.s in the array");
scanf("%d",&n);
int a[n],b[n];
printf("enter the no.s in arrays");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++){
    c=0;
    for(int j=2;j<a[i];j++){
        if(a[i]%j==0){
            c=1;
            break;
        }

    }
    if(c==0){
        b[t]=a[i];
        t++;
    }
}
printf("\nPrime Numbers in Above Array:\n\n");
     for(int i=0;i<t;i++)
     {
          printf(" %d ",b[i]);
     }
return 0;
}
