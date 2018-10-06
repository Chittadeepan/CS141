#include<iostream>
using namespace std;
//Write a function to generate nth Fibonacci term using recursion.
int fibonacci(int n){
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1; 
	}
	else{
		return fibonacci(n-1)+fibonacci(n-2);                 
	}
}
//write main prgm
int main(){
  int a;int fibonacci(int n);
//ask the user about n
  cout<<"give the number."<<endl;
  cin>>a;
//display the result
  cout<<"the nth term of the fibonacci sequence :"<<fibonacci(a)<<endl;
  return 0;
}
