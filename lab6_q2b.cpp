#include<iostream>
using namespace std;
//a function takes 2 parameters
void add(int a,int b, int&c){
c=a+b;
}
//main function to find sum
int  main(){
int x,y,z;
cout<<"give the value of 2 numbers-"<<endl;
cin>>x>>y;
add(x,y,z);
cout<<"the sum is:"<<z<<endl;
return 0;
}

