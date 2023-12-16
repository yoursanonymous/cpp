#include<stdio.h>
int main(){
int n,ele,pos;
printf("enterthe no. of no.s in the array");
scanf("%d",&n);
int a[n];
printf("enter the no.s in arrays");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("enter the element ");
scanf("%d",&ele);
for(int i=0;i<n;i++){
if(a[i]==ele){
printf("%d\n",i+1);
a[i]=a[i+1];
}
}
n=n-1;
for(int i=0;i<n;i++){
    printf("%d",a[i]);
}
return 0;
}
