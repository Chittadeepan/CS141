#include<iostream>
using namespace std;
//Write a func to print all natural numbers between 1 to n using recursion.
int natnum(int i,int n){
  if(i==n+1){
   return i;
       }
  else{
      cout<<i<<endl;
      i++;
      natnum(i,n);
      }
}
//write the main prgm
int  main(){
	int n;int i=1;
//ask user to give n
	cout<<"give the value of n"<<endl;
	cin>>n;
//display the result
    cout<<"the natural numbers are "<<endl;
    natnum(i,n);
	return 0;
}

