#include<stdio.h>
int main(){
int n,a[100][100],rows,columns,count;
printf("enter the no. of rows and columns ");
scanf("%d %d",&rows ,&columns);
printf("enter the elements ");
for(int i =0; i<rows;i++){
for(int j=0;j<columns;j++){
scanf("%d",&a[i][j]);
}
}
printf("enter the element you want to search");
scanf("%d",&n);
for(int i =0; i<rows;i++){
for(int j=0;j<columns;j++){
if(a[i][j]==n){
printf("the no. appears in row %d and column %d\n",i,j);
count++;
}
}
}
printf("the no. %d appears %d",n,count);
return 0;
}
