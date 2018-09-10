#include<iostream>
using namespace std;
//a function takes 2 parameters



int sum(int a,int b){
   int c;
  c=a+b;
  return c;
}


//main function to find sum

int main(){
	int a,b;

cout<<"give 2  numbers"<<endl;
cin>>a>>b;
 
	cout<<"the sum is:"<<sum(a,b)<<endl;

 return 0;
 }

