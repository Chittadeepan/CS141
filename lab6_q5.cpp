#include<iostream>
using namespace std;
//Write a program that includes the above three (sum,max,min) functions. 
//a function takes 2 parameters
int sum(int a,int b){
   int c;
  c=a+b;
  return c;
}
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
int min(int a,int b){
  int mn=0;
if(a<b){
     mn=a;
         }
  else{
       mn=b;
        }  
  
   return mn;
 }

//Write a main function that asks user to input 2 variables   display the output. 
int  main(){
int a=0;int b=0;int c=0;
cout<<"give 2 numbers: "<<endl;
cin>>a>>b;
//asks the user what operation does he want to perform
cout<<"what operation do u want to perform?If sum,press 1.if max,press 2.if min,press 3."<<endl;
cin>>c;
//Based on his input, call the required function
if(c==1){
    cout<<"the sum is:"<<sum(a,b)<<endl;
     }
else if(c==2){
    cout<<"the max no is: "<<max(a,b)<<endl;
     }
else{
    cout<<"the min no is:"<<min(a,b)<<endl;
    }
return 0;
}





