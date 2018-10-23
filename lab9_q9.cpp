#include<iostream>
using namespace std;
//Write a function contains(char*, char) which returns true if the 1st parameter cstring contains the 2nd parameter char, or false otherwise.
char* contains(char* str, char x){
  while (*str != '\0') {
    if (*str == x){
      cout<<"true"<<endl;
		return str; // early exit, ptr points to x in str
		}
    else{
      str++;
     	 }
     }
	cout<<"false"<<endl;
    return NULL;
}
int main(){
	char str[100];char x;int size;
	cout<<"give the size of the array"<<endl;
    cin>>size;
	cout<<"give the elements of the array. "<<endl;
	for(int j=0; j<size; ++j){
			cin >> str[j];
		
		}
    cout<<"give another alphabet"<<endl;
	cin>>x;
	cout<<"Return true if the 1st parameter cstring contains the 2nd parameter char or false otherwise."<<endl;
	contains(str,x);
	return 0;
}
