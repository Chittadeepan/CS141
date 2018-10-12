#include<iostream>
using namespace std;
//Write a function to merge 2 arrays (just one after another into another array), find maximum of 2 arrays [maximum element of all the elements in both the arrays], 
int max(){
	int a;int b;int c;int d;int max;
    int arr[2]={2,4};
	int array[2]={3,8};
    int ar[4];
    for(int i=0;i<2;i++){
       ar[i]=arr[i];
    }
	for(int i=2;i<4;i++){
       ar[i]=array[i-2];
    }

    a=ar[0];b=ar[1];c=ar[2];d=ar[3];
    if(a<c<b<d){
    max=d;
	}
	else if(d<a<c<b){
    max=b;
    }
    else if(b<d<a<c){
	max=c;
	}
	else{
	max=a;
	}
	return max;
}
//Write a function to merge 2 arrays (just one after another into another array),find minimum of 2 arrays .
int min(){
	int a;int b;int c;int d;int min;
	int arr[2]={2,4};
	int array[2]={3,8};
    int ar[4];
    for(int i=0;i<2;i++){
       ar[i]=arr[i];
    }
	for(int i=2;i<4;i++){
       ar[i]=array[i-2];
    }

    a=ar[0];b=ar[1];c=ar[2];d=ar[3];
	if(a<c<b<d){
    min=a;
	}
	else if(b<c<a<d){
    min=b;
    }
    else if(c<a<d<b){
	min=c;
	}
	else{
	min=d;
	}
	return min;
}
//write the main prgm
int main(){
	int a;int b;int c;int d;
	int arr[2]={2,4};
	int array[2]={3,8};
	int ar[4];
	for(int i=0;i<2;i++){
       ar[i]=arr[i];
    }
	for(int i=2;i<4;i++){
       ar[i]=array[i-2];
    }

    a=ar[0];b=ar[1];c=ar[2];d=ar[3];
	 
//print the new set of numbers by merging arrays
    cout<<"The given numbers are "<<a<<","<<b<<","<<c<<","<<d<<endl;
    
//display the result
    cout<<"The maximum of given numbers="<<max()<<endl;
    cout<<"The minimum of given numbers="<<min()<<endl;
	return 0;
}



