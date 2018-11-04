#include<iostream>
using namespace std;
//Write a program to find sum of all elements of an array. (Use functions)
int sum(int a,int b,int c,int d,int e){
	int i,sum=0;int arr[5];

//assigning the numbers to the positions of the array	
 	for(int i=0;i<5;i++){
        arr[0]=a;arr[1]=b;arr[2]=c;arr[3]=d;arr[4]=e;
        sum=sum+arr[i];
        } 
	return sum;
}
//write main program
int main(){
	int a;int b;int c;int d;int e;int i;	
//ask the user to give 5 numbers
	cout<<"give 5 numbers"<<endl;
        cin>>a>>b>>c>>d>>e;	
//display result
	cout<<"The sum of of given numbers ="<<sum(a,b,c,d,e)<<endl;
    return 0;
}
      
       

