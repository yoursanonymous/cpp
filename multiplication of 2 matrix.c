#include<stdio.h>
int main(){
int rows1,rows2,cols2,cols1;
scanf("%d %d %d %d",&rows1,&rows2,&cols1,&cols2);
if(cols1!=rows2){
printf("no");
}
int m1[rows1][cols1],m2[rows2][cols2],result[rows1][cols2];
printf("enter the m1 elements");
for(int i=0;i<rows1;i++){
for(int j=0;j<cols1;j++){
scanf("%d",&m1[i][j]);
}
}
printf("enter the m2 elements");
for(int i=0;i<rows2;i++){
for(int j=0;j<cols2;j++){
scanf("%d",&m2[i][j]);
}
}
for(int i=0;i<rows1;i++){
for(int j=0;j<cols2;j++){
//result[i][j]=0;
for(int k=0;k<cols1;k++){
result[i][j]=result[i][j]+m1[i][k]*m2[k][j];
}
}
}
for(int i=0;i<rows1;i++){
    for(int j=0;j<cols2;j++){
        printf("%d",result[i][j]);
    }
    printf("\n");
}

return 0;
}
