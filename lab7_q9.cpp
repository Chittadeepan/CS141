#include<iostream>
using namespace std;


//Write a function to find factorial of any number using recursion.

int factorial(int n){
	// Base condition
	if (n == 1) {
   return 1;
     }
	else{
   return n * factorial(n-1);
      }
}
//write main prgm
int main(){
   int a;int factorial(int n);
//ask the user about n
 cout<<"give the number."<<endl;
 cin>>a;
 
//display the result
 cout<<"The factorial of the number  is "<<factorial(a)<<endl;
 return 0;
}

