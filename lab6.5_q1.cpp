#include<iostream>
using namespace std;
int main(){
//Apples cost Re1 each, mangoes cost Rs3 each, and 1 banana is only Rs0.50 
//You bought 100 fruits for Rs100
cout<<"let no. of apples be x,no. of mangoes be y and no. of bananas be 100-(x+y)"<<endl;

cout<<"total cost=100 =>x+3y+0.50(100-(x+y))=100"<<endl;
//How many of each fruit did you buy? 
//make a loop for variation of x from 0-100
for(int x=0;x<101;x++){
//Display all variations of answer. 
cout<<"if no. of apples="<<x<<endl;
cout<<"then,no. of mangoes="<<(100-x)/5<<endl;
int y=0;y=(100-x)/5;
cout<<"so,no. of bananas="<<100-(x+y)<<endl;
}
return 0;
}
