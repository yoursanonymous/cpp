#include<stdio.h>
int main(){
int ele,pos,n;
printf("enterthe no. of no.s in the array");
scanf("%d",&n);
int a[n];
printf("enter the no.s in arrays");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("enter the element and pos");
scanf("%d %d",&ele,&pos);
for(int i=n-1;i>=pos-1;i--){
    a[i+1]=a[i];
    }
a[pos-1]=ele;
n=n+1;
for(int i=0;i<n;i++){
    printf("%d",a[i]);
}
return 0;
}
