#include<iostream>
using namespace std;
//Write a function to find reverse of any number using recursion.
int revnum(int a){
     int n;
  	if(a<1){
 			return n;
     		}
  	else{
 		  n=a%10;
		  a=a/10;
  		  cout<<n;
  		  revnum(a);
        }
}
//write main prgm
int  main(){
  int revnum(int a);int a;
//ask the user about n
  cout<<"give the number."<<endl;
  cin>>a;
//display the result
  cout<<"The reverse number is "<<endl;
  revnum(a);
  return 0;
}
  
