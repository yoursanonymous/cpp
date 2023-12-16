#include<iostream>
#include<bits/stdc++.h>
int main(){
int n;
cin>>n;
vector<int>a[n];
for(auto &x: a){
cin>>x;
}
for(int i=0;i<n;i++){
cout<<a[i];
}
return 0;
}
