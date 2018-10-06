#include<iostream>
using namespace std;
// Write a function to find power of any number using recursion.
int power(int n,int i,int j,int h){
 
  if(j==i){
    return n;
    }
  else{
    n=n*h;
    j++;
    power(n,i,j,h);
    }
}
//write the main prgm
int  main(){
  int power(int n,int i,int j,int h);
  int a;int b;int c=1;int h;
//ask the user to give 2 numbers.
  cout<<"give 2 numbers(a,b)"<<endl;
  cin>>a>>b;
  h=a;
//display the result
  cout<<"the bth power of a="<<power(a,b,c,h)<<endl;
  return 0;
}





