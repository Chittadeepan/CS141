#include<iostream>
using namespace std;
//Sum of even and odd
//Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop);create a user-defined function called sumEvenNumbers(). Use call-by-value 
int sumEvenNumbers(int a,int b){
 int k;
if(a%2==1){
for(int i=a+1;i<b;i=i+2){
 k +=i;
   }
 }
else{
 for(int i=a+2;i<b;i=i+2){
 k +=i;
   }
 }
return k;
}
//Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); create a user-defined function called sumOddNumbers(). Use call-by-value
int sumOddNumbers(int a,int b){
 int c=0;
 if(a%2==1){
   for(int i=a+2;i<b;i=i+2){
  c +=i;
         }
     }
  else{
    for(int i=a+1;i<b;i=i+2){
 c +=i;
   }
 }
return c;
}
//Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareOddNumbers(). Use Call-by-Value. 
int sumSquareOddNumbers(int a,int b){
  int d=0;
 if(a%2==1){
   int i=a+2;
   while(i<b){
d +=i*i;i=i+2;
   }
 }
 else{
 int i=a+1;
  while(i<b){
d +=i*i;i=i+2;
     }
 }
return d;
}
//Write a function that outputs the sum of the square of the even numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value. 
int sumSquareEvenNumbers(int a,int b){
int e=0;
if(a%2==1){
 int i=a+1;
 while(i<b){
  e +=i*i;i=i+2;
       }
}
else{
   int i=a+2;
    while(i<b){
e +=i*i;i=i+2;
   }
 }
return e;
}

//Write a main program. 
int main(){
int a=0;int b=0;
//Declare a variable called sumEven in the main() for the sumEvenNumbers(). sumEvenNumbers() is a value returning function. Use sumEven to hold a returned value.

// Declare a variable called sumOdd in the main() for the sumOddNumbers(). sumOddNumbers() is a value returning function. Use sumOdd to hold a returned value.

//Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). sumSqureEvenNumbers() is a value returning function. Use sumSquareEven to hold a returned value.

//Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). sumSqureOddNumbers() is a value returning function. Use sumSquareOdd to hold a returned value.

//Then display the values
cout<<"give 2 numbers: "<<endl;
cin>>a>>b;
cout<<"sum of even numbers: "<<sumEvenNumbers(a,b)<<endl;
cout<<"sum of odd numbers: "<<sumOddNumbers(a,b)<<endl;
cout<<"sum of square of even numbers: "<<sumSquareEvenNumbers(a,b)<<endl;
cout<<"sum of square of odd numbers: "<<sumSquareOddNumbers(a,b)<<endl;
return 0;
}


