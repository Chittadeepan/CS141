#include<iostream>
using namespace std;
//write a function to find string length
int strlength(char *ptr){
	int length=0;
	while(*(ptr+length)!='\0'){
		length++;
	}
	return length;
}
//Write a function revString(char*) which reverses the parameter cstring.  The function returns nothing.  You may use C++ string handling functions in <cstring> in the function if you wish.
void revString(char *p){
	int i;
	i=strlength(p);
	while(i>=0){
		cout<<*(p+i);
		i--;
	}
	cout<<" "<<endl;
}
int  main(){
	char str[100];int size;
	cout<<"give the size of the array"<<endl;
    cin>>size;
	cout<<"give the elements of the string. "<<endl;
	for(int j=0; j<size; ++j){
			cin >> str[j];
		
		}
	cout<<"the reverse of the string: "<<endl;
	revString(str);
	return 0;
}
