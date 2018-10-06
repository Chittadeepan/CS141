#include<iostream>
using namespace std;
//Write a function to check whether a number is palindrome or not using recursion.
int pldrm(int a,int rev){
    int n;
  	if(a<1){
 		return rev;
     		}
  	else{
 		  n=a%10;
		  a=a/10;
  		  rev=(rev*10)+n;
          pldrm(a,rev);
        }
}
//write the main prgm
int  main(){
   int k;int a;int pldrm(int a,int rev);int n;int rev=0;
//ask the user about n
   cout<<"give the number."<<endl;
   cin>>a;
   k=a;n=pldrm(a,rev);
//display the result
   cout<<"The reverse number is "<<n<<"."<<endl;
  
   if(n==k){
    cout<<"It's a palindrome."<<endl;
          }
   else{
    cout<<"It's not a palindrome."<<endl;
      }
   return 0;
}
  

