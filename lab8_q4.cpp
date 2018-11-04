#include<iostream>
using namespace std;
//Write a function to merge 2 arrays (just one after another into another array), find maximum of 2 arrays [maximum element of all the elements in both the arrays], 
int max(int arr[2],int array[2]){
	int a;int b;int c;int d;int max;
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
int min(int arr[2],int array[2]){
	int a;int b;int c;int d;int min;
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
	
//print the new set of numbers by merging arrays
    cout<<"The given numbers are 2,4,3,8 ."<<endl;
    
//display the result
    cout<<"The maximum of given numbers="<<max(arr,array)<<endl;
    cout<<"The minimum of given numbers="<<min(arr,array)<<endl;
	return 0;
}



