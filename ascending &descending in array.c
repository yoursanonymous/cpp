#include<stdio.h>
int main(){
int n,t;
printf("enter the no. of no.s in the array");
scanf("%d",&n);
int a[n];
printf("enter the no.s in arrays");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
// ascending
/*for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(a[i]>a[j]){
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}*/
//descending
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
t=a[i];
a[i]=a[j];
a[j]=t;
        }
    }
}
for(int i=0;i<n;i++){
printf("%d",a[i]);
}
return 0;
}
