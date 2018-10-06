#include<iostream>
using namespace std;
//Write a function to  find sum of digits of a given number using recursion.
int sumdigits(int a,int sum){
     int n;
  	if(a<1){
 			return sum;
     			}
  	else{
 		  n=a%10;
		  a=a/10;
  		sum=sum+n;
  		sumdigits(a,sum);
      }
   }
//write the main prgm
int  main(){
   int sumdigits(int a,int sum);int sum=0;int a;
//ask the user about n
  cout<<"give the number"<<endl;
  cin>>a;
//display the result
  cout<<"The sum of digits of the given number is "<<sumdigits(a,sum)<<endl;
  return 0;
}
