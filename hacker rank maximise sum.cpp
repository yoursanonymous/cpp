#include <iostream>
using namespace std;

int main() {
    int n,l,r,min,sum,b,i;
cin>>n;
int a[n];
for(i=1;i<n;i++){
    cin>>a[i];
}
for(i=1;i=n;i++){
    if(min>a[i]){
    min=a[i];
    }
}
b=min;
for(i=2;i<n-1;i++){
    a[i]=b;
}
for(i=1;i<n;i++){
    sum=sum+a[i];
}
std::cout << sum << std::endl;
	return 0;
}
