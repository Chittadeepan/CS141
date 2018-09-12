#include<iostream>
using namespace std;
//tax rate calculation using function
//a function that obtains from the user and returns unitCst,int units,int taxRt
 
int returnsvalue(int t){
if(t==1){
cout<<"unitCst\n";
     }
else if(t==2){
cout<<"units\n";
      }
else{
 cout<<"taxrt\n";
    }
int a;
 cin>>a; 
 return a;
 }
//a function that receives unitCst, units, taxRt and returns sales tax and tot due
int receivevalues(int unitCst,int units,int taxRt,int salestax,int totdue){
   salestax=unitCst*units*taxRt;
   return salestax;
   }
//receives unitCst, units, taxRt ,sales tax and tot due
int appname(int unitCst,int units,int taxRt,int salestax,int totdue){
    //produce output
    totdue=salestax+(unitCst*units);
   return totdue;
   }
int getvalues(int unitCst,int units,int unitsPurch){
   unitsPurch=unitCst*units;
   return unitsPurch;
    }
//Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue. Your program should call the functions listed above.

int main(){
int unitCst=returnsvalue(1);int units=returnsvalue(2);int taxRt=returnsvalue(3);int salestax=0;int totdue=0;int unitsPurch=0;
 
salestax=receivevalues(unitCst,units,taxRt,salestax,totdue);

cout<<"units purchase= " <<getvalues(unitCst, units,unitsPurch)<<endl;
cout<<"salestax= "<<salestax<<endl;
cout<<"tot due= "<<appname(unitCst,units,taxRt,salestax,totdue)<<endl;

return 0;
}

