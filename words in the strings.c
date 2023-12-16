#include<stdio.h>
int main(){
int x=100,i,count;
char s[x];
printf("enter the string\n");
gets(s);
puts(s);
i=0;
count=0;
while(s[i]!='\0'){
    if(s[i]==' '&& s[i+1]!=' '){
        count++;
        i++;
    }
}
printf("th words are in the string are %d",count);
return 0;
}
