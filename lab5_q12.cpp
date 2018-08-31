#include<iostream>
using namespace std;
int  main(){
// month number
 int a;

  cout<<"give month number"<<endl;
  cin>>a;
//determination of no. of days
 
 if(a==1||a==3||a==5||a==7||a==8||a==10||a==12){
 cout<<"no. of days=31"<<endl;
 }
 else if(a==2){
 cout<<"no. of days=28"<<endl;
 }
 else{
 cout<<"no. of days=30"<<endl;
 }
return 0;
}


