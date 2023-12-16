#include<stdio.h>
int main(){
int rows,cols;
scanf("%d %d ",&rows,&cols);
if(cols!=rows){
printf("no");
}
int a[rows][cols],temp;
printf("enter the m elements");
for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
scanf("%d",&a[i][j]);
}
}
for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
temp=a[i][j];
a[i][j]=a[i][rows-i-1];
a[i][rows-i-1]=temp;
}
}
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        printf("%d",a[i][j]);
    }
    printf("\n");
}
return 0;
}
