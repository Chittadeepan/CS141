#include <iostream>
using namespace std;
int main(){

	char str[11], *p;
//We want to show string repeatedly by shifting top character of string to right.
	cout << "Enter about 10 characters of string ."<<endl;
	for(int j=0;j<10;j++){
       cin >> str[j];
        }

// Pointer variable refers to address of string
	p=str;

// Show string by shifting top character of string to right
    cout<<"The result by shifting top character of string to right :"<<endl;
	int i;int k=0;int l=9;
//to print 10 rows
	while(k<10){
//to print 10 characters
    	i=0;i=l;
		while((i<10)&&(l>=0)){
    		
			p=str + i;
			
			cout<<*p;
			i++;
			}
	cout<<" "<<endl;
    k++;l--;

	}
  
	return 0;
}
