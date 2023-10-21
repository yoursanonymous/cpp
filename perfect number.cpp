//perfect number= if sum of the factors of a number is double the number then its is perfect number
#include <iostream>
using namespace std;
int main()
{
int n,i,sum;
cin>>n;
for(i=1;i<=n;i++)
{
if(n%i==0){
sum=sum+i;
}
}
if(sum==2*n){
cout<<"it is a perfect number";
}
else{
    cout<<"it is not a perfect number";
}
return 0;
}
