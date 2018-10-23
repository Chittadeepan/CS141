#include<iostream>
using namespace std;
int main(){
//Create an array of size 10. 
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//Use a loop to print array using the normal index method. 
	int i=0;
	 while(i<10){
		cout<<arr[i];i++;
	}
	cout<<" "<<endl;
//Use a loop to print array using the pointer method.	
	int *p;p=arr;
	while(p<arr+10){
		
		cout<<*p;p++;
	}
	cout<<" "<<endl;
	return 0;
}

