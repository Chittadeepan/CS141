#include<iostream>
using namespace std;
//function takes 2 parameters

int max(int a,int b){
  int mx=0;
  if(a>b){
     mx=a;
         }
  else{
       mx=b;
        }  
  
   return mx;
 }
//main function to find max
int main(){
  int a=0;int b=0;
 cout<<"give 2  numbers"<<endl;
cin>>a>>b;

cout<<"the max no is: "<<max(a,b)<<endl;
return 0;
}

