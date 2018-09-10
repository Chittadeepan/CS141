#include<iostream>
using namespace std;
//function takes 2 parameters
void max(int a,int b,int &c){
  
 if(a>b){
       c=a;
         }
  else{
      c=b;
          }  
    }
//main function to find max
int main(){
  int a=0;int b=0;int c=0;
 cout<<"give 2  numbers"<<endl;
cin>>a>>b;
max(a,b,c);
cout<<"the max no is:"<<c<<endl;
return 0;
}
