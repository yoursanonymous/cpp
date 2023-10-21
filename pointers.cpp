//pointers
#include<iostream>
using namespace std;
int main()
{
int x;// data variabes, int x=10
//addres varaible int *P,pointers store the address of a variable
//declaration
switch(x)
case "1":
{//initialization
int a=10;
int *p=&a;
cout<<&a;
cout<<p;
cout<<&p;
cout<<*P;//deferencing
break;
}
return 0;
}
