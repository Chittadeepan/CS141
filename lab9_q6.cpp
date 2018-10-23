#include<iostream>
using namespace std;
//Write a function countEven(int*, int) which receives an integer array and its size 
int countEven(int*p,int size){
	int counter = 0, j =0;
	while( j < size){
		if(*p%2==0)
 		 {
			counter++;
		 }
	     p++, j++;
     }
//returns the number of even numbers in the array.
	return counter;
}
int main(){
	int i=0, a[100], size; 
	cout<<"give the size of the integer array: "<< endl;
	cin >> size;

// cin >> p
	cout << "\n Enter the array elements:\n";
	for(int j=0; j<size; ++j)
		{
			cin >> a[j];
		
		}
	cout<<"the number of even numbers in the array."<< countEven(a,size)<<endl;
	return 0;
}
