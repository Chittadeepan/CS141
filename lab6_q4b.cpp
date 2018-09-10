#include<iostream>
using namespace std;
//function takes 2 parameters
void min(int a,int b,int &c){
 
 if(a<b){
       c=a;
         }
  else{
      c=b;
              }  

    }
//main function to find min
int main(){
  int a=0;int b=0;int c=0;
 cout<<"give 2  numbers"<<endl;
cin>>a>>b;
min(a,b,c);
cout<<"the min no is:"<<c<<endl;
return 0;
}
