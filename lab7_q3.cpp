#include<iostream>
using namespace std;
//Write a function to print all even or odd numbers in given range using recursion
  
int evenoroddnum(int a,int b){
     
     if((b-a)==1||(b-a)==2){
       return a;
        }
     else{
       a=a+2;
       cout<<a<<endl;
       evenoroddnum(a,b);
       }
}
//write the main prgm
int main(){
    int evenoroddnum(int a,int b);int a;int b;
//ask the user to give 2 numbers.
    cout<<"give 2 numbers"<<endl;
    cin>>a>>b;  
//display the result
    cout<<"the odd/even numbers are "<<endl;
    evenoroddnum(a,b);
    return 0;
}

    
     
    

