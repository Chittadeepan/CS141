#include<iostream>
using namespace std;
int main(){
// [STRING] Create a string and store your name in it. 
	char str[13]={'c','h','i','t','t','a','d','e','e','p','a','n'};

//Use a loop to print string character by character using the normal index method 
    int i=0;
	while(i<12){
		cout<<str[i];i++;
	}
	str[12]='\0';
	cout<<" "<<endl;
//Use a loop to print string character by character using the pointer method. 
	char *p;p=str;
	while(p<str+12){
		
		cout<<*p;p++;
	}
	str[12]='\0';
	cout<<" "<<endl;
	return 0;
}
	

 
