#include<iostream>
using namespace std;
// Write a function to find sum of all natural numbers between 1 to n using recursion
int sumnat(int i,int sum,int n){
   
	if(i==n+1){
		return sum;
			}
	else{

		sum=sum+i;
			i++;
	    sumnat(i,sum,n);
  	}
}
//write the main prgm
int  main(){
  int sum=0;int i=1;int n;
//ask the user to give a no
  cout<<"give the the value of n"<<endl;
  cin>>n;
//display the result
  cout<<"the sum of natural numbers is "<<sumnat(i,sum,n);
  return 0;
}
