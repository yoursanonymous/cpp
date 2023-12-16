#include<stdio.h>
#include<limits.h>
int main(){
int n;
int smallest,largest;
printf("enter the no. of numbers in the arrays ");
scanf("%d",&n);
int a[n];
printf("enter the no. of elements in the array");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++){
printf("%d",a[i]);
}
smallest= INT_MAX ;
//smallest=INT_MAX;
for(int i=0;i<n;i++){

if(a[i]<smallest){
        smallest=a[i];
    }

}
for(int i=0;i<n;i++){
if(a[i]>largest){
            largest=a[i];
        }
}
printf("the smallest is %d and the largest is %d",smallest,largest);
return 0;
}
