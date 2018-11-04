#include<iostream>
using namespace std;
// Write a function to find the largest of the elements of all elements of an array. 
int max(int arr[4]){
	int max;
	if(arr[0]>(arr[1]==arr[3])>arr[2]){
        max=arr[0];
        }
        else if((arr[1]==arr[3])>arr[0]>arr[2]){
        max=arr[1]==arr[3];
        }
        else if((arr[1]==arr[3])>arr[2]>arr[0]){
        max=arr[1]==arr[3];
        }
	else{
        max=arr[2];
        }
        return max;
}
// Write a function to find the  smallest of the elements of all elements of an array. 
int min(int arr[4]){
	int min;
	if(arr[0]<(arr[1]==arr[3])<arr[2]){
        min=arr[0];
        }
        else if((arr[1]==arr[3])<arr[0]<arr[2]){
        min=arr[1]==arr[3];
	}
        else if((arr[1]==arr[3])<arr[2]<arr[0]){
        min=arr[1]==arr[3];
	}
	else{
        min=arr[2];
        }
	return min;
}
//Write a function to find the mean of the elements of all elements of an array.
int mean(int arr[4]){ 
	int mean,i,sum=0;
        for(int i=0;i<4;i++){
        sum=sum+arr[i];
	}
        mean=sum/4;
        return mean;
        }
//Write a function to find the  median of the elements of all elements of an array.
int median(int arr[4]){
       	int median;
        median=(arr[1]+arr[3])/2;
	return median;
}
//Write a function to find the mode  of the elements of all elements of an array.
int mode(int arr[4]){
	int mode;
        if(arr[0]==arr[1]||arr[0]==arr[2]||arr[0]==arr[3]){
        mode=arr[0];
        }
	else if(arr[1]==arr[2]||arr[1]==arr[3]||arr[1]==arr[0]){
        mode=arr[1];
	}
	else if(arr[2]==arr[3]||arr[2]==arr[0]||arr[2]==arr[1]){
        mode=arr[2];
	}
	else{
	mode=arr[3];
	}
	return mode;
}
//write main prgm
int main(){
	int arr[4]={1,5,8,5};
//display the result
	cout<<"The given numbers are 1,5,8,5."<<endl;
	cout<<"The max of 1,5,8,5="<<max(arr)<<endl;
	cout<<"The min of 1,5,8,5="<<min(arr)<<endl;
	cout<<"The median of 1,5,8,5="<<median(arr)<<endl;
	cout<<"The mode of 1,5,8,5="<<mode(arr)<<endl;
        return 0;
}
	

        
 

        







