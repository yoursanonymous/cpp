#include<iostream>
using namespace std;
int main()
{
float a,b,c;
int x;
cout<<"enter 2 no.";
cin>>a>>b;
cout<<" input the operation : 1 for add, 2 for subtract, 3 for multiply, 4 for divide";
cin>>x;
if(x==1){
c=a+b;
}
if(x==2){
c=a-b;
}
if(x==3){
c=a*b;
}
if(x==4){
c=a/b;
}
cout<< "result is"<<c;
return 0;
}
