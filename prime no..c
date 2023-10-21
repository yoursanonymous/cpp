#include<iostream>
using namespace std;
int main()
{
    int n;
	cin>>n;
	if (n <= 1){
		cout<<"no. is prime";
	}

    for (int x = 2; x <= n / 2; x++){
		if (n%x == 0){
			cout<<"no. is composite";
		}
			cout<<"no. is prime";
    }
return 0;
}
