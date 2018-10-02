#include<iostream>
using namespace std;
int  main(){
//Find the next number (or numbers)after 1225 that is a perfect square and also the sum of a series 1...n. 
for(long a=0;a<32767;a++){
 long i;
 i=(a*(a+1))/2;
	for(long b=0;b<32767;b++){
     if(i==b*b){
      cout<<"The next number is"<<i<<endl;
               }
        }
   }
return 0;
}
 
