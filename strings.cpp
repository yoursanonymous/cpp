#include<iostream>
#include<string.h>
using namespace std;
char* testfunc()
{
    char* s =new char[100];
    cin>>s;
    cout<<s;
    return s;
}
int main(){
int x;
cin>>x;
switch(x){
case 1:
cout<<"ho ho";
testfunc();
break;
default:
cout<<"you are dumb";
break;
}
return 0;
}


