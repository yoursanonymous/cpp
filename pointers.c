//pointers
#include<iostream>
using namespace std;
int main()
{
// data variabes, int x=10
//addres varaible int *P,pointers store the address of a variable
int x=10;
int p=&x;//declaration
switch(x)
case "1":
{//initialization
cout<<&x;
cout<<p;
cout<<&p;
cout<<*P;//deferencing
break;
}
return 0
}
