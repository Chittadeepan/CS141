#include<iostream>
using namespace std;
//function takes 2 parameters

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
//main function to find min
int main(){
  int a=0;int b=0;
 cout<<"give 2  numbers"<<endl;
cin>>a>>b;
cout<<"the min no is:"<<min(a,b)<<endl;
return 0;
}

