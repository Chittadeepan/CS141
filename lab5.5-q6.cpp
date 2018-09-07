#include<iostream>
using namespace std;
int main(){
//print  spaces in  5 rows in increasing order 
for(int i=0;i<5;i++){
	//print i spaces
  for(int j=0;j<i;j++){
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
