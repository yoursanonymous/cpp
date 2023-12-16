#include<iostream>
#include<cstring>
using namespace std;
int main(){
char s[50],s1[50],s2[50],orign[50],org[50],s3[20]="235",s4[20]="23.576",s5[20]="x=10;y=20;z=30",*token;
cin.get(s,50);
cout<<s<<endl;
org[50]=s[50];
orign[50]=s[50];
cin.ignore();
cin.get(s1,50);
cout<<s1<<endl;
cout<<strlen(s)<<endl;
strncat(s,s1,3);
cout<<s<<endl;
strncpy(orign,s1,3);
cout<<orign;
if(strstr(org,s1)!=0){
    cout<<strstr(org,s1);
}
else{
    cout<<"not found";
}
if(strchr(s,'g')!=0){
    cout<<strchr(s,'g');
}
else{
    cout<<" you fucking idiot";
}
if(strrchr(s,'g')!=0){
    cout<<strrchr(s,'g');
}
else{
    cout<<"kill yourself";
}
cout<<strcmp(s,s1);
cout<<strtol(s3,0,10);//string to long int
cout<<strtof(s4,0);//string to float integer
token=strtok(s5,"=;");
while(token!=0){
    cout<<token<<endl;
    token=strtok(0,"=;");
}
return 0;
}
