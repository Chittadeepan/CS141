#include<iostream>
using namespace std;
int main(){
//do the following for 5 rows
for(int i=1;i<6;i++){
//print i  stars in increasing order in i rows 
 for(int j=0;j<i;j++){
    cout<<"*";
        }
//print 5-i spaces in  i rows in decreasing order 
 for(int k=5-i;k>0;k--){
    cout<<" ";
        }
   cout<<endl;
   }
return 0;
}
