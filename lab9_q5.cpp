#include<iostream>
using namespace std;
int main(){
//Write a piece of code which prints the characters in a cstring in a reverse order.
	char str[5]={'a','p','p','l','e'};char *p;p=str+4;
	cout<<"the given string is apple."<<endl;
	cout<<"the string in reverse order : ";
	while(p>=str){
		cout<<*p;
		p--;
		}
	cout<<" "<<endl;
	return 0;
}
