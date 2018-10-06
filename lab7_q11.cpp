#include <iostream>
using namespace std;
//Write a function to find GCD (HCF) of two numbers using recursion.
int hcf(int a, int b){
    if (b != 0){
       return hcf(b, a % b);
         }
    else{ 
       
         return a;
        }
}
//write main prgm
int main(){
   int a,b;int hcf(int a, int b);
//ask the user to give 2 numbers
   cout << "Give 2 numbers."<<endl;
   cin >> a >> b;
//display the result
   cout << "H.C.F of the given numbers is " << hcf(a,b)<<endl;
   return 0;
}















































