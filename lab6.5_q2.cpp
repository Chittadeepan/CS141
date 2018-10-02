#include<iostream>
using namespace std;
//You are a salesperson of Bata shoe company, where each shoe is Rs 225. Company gave you three options for the salary.
//Write a program to help decide the best choice of compensation.  

//You ask the user for input (Write a function for this).
int ask(void){
int a;
cout<<"give the the weekly sales - the number of shoes sold per week" <<endl;
cin>>a;
return a;
}

//write other functions for each of the options.
//1. Just a salary of Rs 600 per week;
int option1(void){
int b;b=600;
return b;
}
//2. A salary of Rs7.00 per hour plus a 10% commission on sales; (Assume you work 40 hours a week) 
float option2(int a){
float c=0;
c=(7*40)+(22.5)*a;
return c;
}
//3. No salary, but 20% commissions and Rs20 for each pair of shoes sold
int option3(int a){
int d=0;
d=(45+20)*a;
return d;
}

//Write a driver program to use the 4 functions 
int  main()
{
int ask(void);int option1(void);float option2(int a);int option3(int a);
int A;
int B;
float C;
int D;
A=ask();B=option1();C=option2(A);D=option3(A);
//DISPLAY THE PAYMENTS IN 3 CASES
cout<<"In option 1,payment="<<B<<endl;
cout<<"In option 2,payment="<<C<<endl;
cout<<"In option 3,payment="<<D<<endl;
//decide the best option for yourself.
if(B>C&&B>D){
cout<<"The best option is 1"<<endl;
}
else if(B>C&&B<D){
cout<<"The best option is 3"<<endl;
}
else if(B<C&&B>D){
cout<<"The best option is 2"<<endl;
}
else if(B<C&&C<D){
cout<<"The best option is 3"<<endl;
}
return 0;
}

