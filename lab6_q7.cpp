#include<iostream>
using namespace std;
//UpperCase and LowerCase
//Write a user-defined function to Upper() that returns the uppercase of the inputChar received. Use call-by-value.
char Upper(char a){
 char i;
   i=(char)(a-32);
return i;
}
//Write a user-defined function to Lower() that returns the lowercase of the inputChar received. Use call-by-value.
char Lower(char a){
  char i;
   i=(char)(a+32);
return i;
}
//Write a main program, that calls the above function based on the input of the user.
int main(){
char a;
cout<<"write an alphabet"<<endl;
cin>>a;
//If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value and vice-versa. 
if(a>=97&&a<=122){
cout<<"The upper case of the given alphabet: "<<Upper(a)<<endl;
}
else{
cout<<"The lower case of the given alphabet: "<<Lower(a)<<endl;
}
return 0;
}


