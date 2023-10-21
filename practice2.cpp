#include<iostream>
using namespace std;
int main()
{
int a[8]={2,6,7,5,3,8,12,11};
int i,key,flag;
flag=0;
cout<<"enter the no.";
cin>>key;
for(i=0;i<9;i++){
  if (key==a[i]){
cout<<"found out at"<<i;
flag=1;
break;
}
if(flag==0){
        cout<<"not  found";
break;
}
}
return 0;
}
