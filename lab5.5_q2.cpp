#include<iostream>
using namespace std;
int  main(){
//print 5 stars for 1st & 5th row
for(int i=1;i<6;i++){
   if(i==1||i==5){
//print star in 5 columns of 1st row
     int j;
      for(j=0;j<5;j++){
       cout<<"*";
      }
    cout<<endl;
 }
//print 1 star in 1st column and 5th column of 2nd,3rd,4th row 
 else{
    for(int k=0;k<5;k++){
      if(k==0||k==4){ 
       cout<<"*";
      }
     
     else{
       cout<<" ";
            }
     
        }
   cout<<endl;
     }
 }
return 0;
}
