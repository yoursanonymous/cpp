#include<stdio.h>
int main(){
int x=100,count,i;
char s[x];
printf("enter the string");
gets(s);
puts(s);
i=0;
count=0;
while(s[i]!='\0'){
    count++;
    i++;
}
printf("the char in the string are %d",count);
return 0;
}
