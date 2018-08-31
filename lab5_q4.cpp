#include<iostream>
using namespace std;
int main(){
 //give 2 numbers
 int a;
 
cout<<"the numbers are:"<<endl;
 cin>>a;
//check the divisibility by 5 and 11
 if(a%5==0 && a%11==0){
 cout<<"divisible by 5 & 11"<<endl;
 }
 else{
 cout<<"not divisible by 5 & 11"<<endl;
 }
return 0;
}
