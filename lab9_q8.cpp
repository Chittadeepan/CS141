#include<iostream>
using namespace std;
//Write a function myStrLen(char*) which returns the length of the parameter cstring.  Write the function without using the C++ function strlen.
int myStrLen(char* str){
  int length = 0;

  // For cstrings, we traverse the array until the null char.
  // For each char (pointed by str), if it's not the null char,
  // increment the length count, then advance the pointer.
  while (*str != '\0') {
    length++;
    str++;
  }

  // After the loop, 'length' has the length of the cstring.
  return length;
}
int main(){
	char str[100];
	cout<<"give the elements of the string"<<endl;
	for(int j=0; j<10; ++j){
			cin >> str[j];
		
		}
	str[10]='\0';
	cout<<"the length of the string: "<<myStrLen(str)<<endl;
	return 0;
}
	
