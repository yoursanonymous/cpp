#include<stdio.h>
int main()
{
int n1,n2,a[100][100],rows,columns,temp;
char c;
printf("the no. of rows and elements in the matrix");
scanf("%d %d",&rows,&columns);
printf("the elements of the matrix");
for(int i=0;i<rows;i++)
    {
for(int j=0;j<columns;j++){
scanf("%d",&a[i][j]);
    }
}
printf("choose the rows or columns and the no.");
scanf("%c",&c);
printf("%c",c);
if(c==rows){
scanf("%d %d",&n1,&n2);
for( int i=0;i<rows;i++){
temp=n1;
n1=n2;
n2=n1;
}
}
else{
scanf("%d %d",&n1,&n2);
for(int j=0;j<columns;j++){
temp=n1;
n1=n2;
n2=n1;
}
}
return 0;
}
