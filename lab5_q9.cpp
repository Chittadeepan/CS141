#include<iostream>
using namespace std;
int  main() {
//write a character
 char a;
 cout<<"The symbol is-"<<endl;
 cin>>a;
// check wheter it is alphabet,digit or symbol
 if(a>=65 && a<=90 || a>=97 && a<=122){
 cout<<"an alphabet"<<endl;
 }
 else if(a>=48 && a<=57){
 cout<<"a digit"<<endl;
 }
 else{
 cout<<"a symbol"<<endl;
 }
return 0;
}
 
