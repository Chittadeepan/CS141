#include<iostream>
using namespace std;
//Write a function for kth largest element of an array
int klarge(int k){
    int klarge;
    int arr[4]={8,6,3,9};
	if(k==1){
    klarge=arr[3];
    }
    else if(k==2){
    klarge=arr[0];
    }
    else if(k==3){
    klarge=arr[1];
    }
    else{
    klarge=arr[2];
    }
    return klarge;
}
//Write a function for kth smallest element of an array
int ksmall(int k){
    int ksmall;
    int arr[4]={8,6,3,9};
	if(k==1){
    ksmall=arr[2];
    }
    else if(k==2){
    ksmall=arr[1];
    }
    else if(k==3){
    ksmall=arr[0];
    }
    else{
    ksmall=arr[3];
    }
    return ksmall;
}
//write the main prgm
int main(){
	int k;
//print the given numbers
    cout<<"The given numbers are 8,6,3,9"<<endl;
//ask the user to give k
    cout<<"Give the degree of largest and smallest element from given 4 numbers between 1 to 4"<<endl;
    cin>>k;
//display the result
    cout<<"The "<<k<<"th largest element="<<klarge(k)<<endl;
    cout<<"The "<<k<<"th smallest element="<<ksmall(k)<<endl;
    return 0;
}


