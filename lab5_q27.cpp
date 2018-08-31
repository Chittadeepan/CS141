#include<iostream>
using namespace std;
int main(){
 //find n
 int n;
 cout<<"write n."<<endl;
 cin>>n;
 //find sum from 1 to n
 int i=1,sum=0;
 while(i<=n){
 
 sum=sum+i;
 i++;
 }
 cout<<"sum="<<sum<<endl;
return 0;
}

