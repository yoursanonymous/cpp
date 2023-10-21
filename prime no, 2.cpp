#include<iostream>
using namespace std;
int main()
{
    int n,flag;
	flag=0;
	cin>>n;
	for (int x = 2; x <= n ; x++){
		if (n%x == 0){
			cout<<"no. is composite";
		flag=1;
		break;
		}
    }
      if(flag==0){
                cout<<"no. is prime";
      }
if(n=0){
  cout<<"no. is neither composite nor prime";
flag=0;
}
return 0;
}
