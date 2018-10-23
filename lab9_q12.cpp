#include<iostream>
using namespace std;
int main(){
//Write a program to declare two variables a,b and a pointer variable p (all integer type). 
	int a;int b;int *p;
//Point p to a. 
    p=&a;
//And store the value pointed by p in b.
    b=*p;
// Print the values of a, b and *p.
	cout<<"The values of a="<<a<<",b="<<b<<",*p="<<*p<<endl;
//Assign values a=2 and b = 3. .
	a=2;b=3;
//Print the values of a, b and *p
	cout<<"The values of a="<<a<<",b="<<b<<",*p="<<*p<<endl;
//Now point p to b. 
	p=&b;
//Print the values of a, b and *p.
	cout<<"The values of a="<<a<<",b="<<b<<",*p="<<*p<<endl;
	return 0;
}
