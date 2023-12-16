#include<stdio.h>
int main(){
int i,j,rows,cols,a[10][10],b[10][10];
printf("enter the no. of rows and columns");
scanf("%d %d",&i,&j);
for(rows=0;rows<i;rows++){
for(cols=0;cols<j;cols++){
scanf("%d",&a[rows][cols]);
}
}
for(rows=0;rows<j;rows++){
for(cols =0;cols<i;cols++){
b[rows][cols]=a[cols][rows];
}
}
for(rows=0;rows<j;rows++){
for(cols=0;cols<i;cols++){
printf("%d",b[rows][cols]);
}
printf("\n");
}
for(rows=0;rows<i;rows++){
for(cols=0;cols<j;cols++){
if(a[rows][cols]==b[cols][rows]){
    printf("the matrix is symmetric");
}
break;
}
break;
}
return 0;
}
