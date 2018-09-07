#include<iostream>
using namespace std;
int main(){
//print  spaces in  5 rows in decreasing order 
for(int j=0;j<5;j++){
  for(int i=5-j;i>0;i--){
    cout<<" ";
        }
//print 5 stars in each of the 5 rows
  for(int k=0;k<5;k++){
    cout<<"*";
        }
    cout<<endl;
   }   
return 0;
}


