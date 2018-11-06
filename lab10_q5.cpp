#include <iostream>
#include<cstring>
using namespace std;
class ZooAnimal
   {
    private:
      	char* name;
      	int cageNumber;
      	int weightDate;
      	int weight;
	public:
     // prototype of create function goes here
		void Create(char*,int,int,int);
        void Destroy (); // destroy function
        char* reptName ();
        int daysSinceLastWeighed (int today);

};
void ZooAnimal::Create(char* name,int cageNumber,int weightDate,int weight)
   {
	
	cout<<"This animal's name is " << name<<"."<<endl;
	cout<<"The cage number is "<< cageNumber<<"."<<endl;
	cout<<"The weight date is "<< weightDate<<"."<<endl;
	cout<<"The weight is "<<weight<<"."<<endl;
	}
void ZooAnimal::Destroy ()
   {
    name=NULL;
	cout<<"The name has been deleted."<<endl;
   }

   // -------- member function to return the animal's name
char* ZooAnimal::reptName ()
   {
    return name;
   }

   // -------- member function to return the number of days
   // -------- since the animal was last weighed

   //Write a function header for the ZooAnimal class member function daysSinceLastWeighed. This function has a single integer parameter today
int ZooAnimal::daysSinceLastWeighed(int today){
    	int startday, thisday;weightDate=1027;
//** Edits on Nov 7, 2017
    //thisday = today/100*30 + today - today/100*100;
    //startday = weightDate/100*30 + weightDate - weightDate/100*100;
    //if (thisday < startday){
       
           //thisday += 360;
           //cout<<"The number of days since the animal was last weighed "<<thisday-startday<<"."<<endl;
		   //return (thisday-startday);
       

	if (today < weightDate){
        	today += 360;
   //returns an integer number of days since the animal was last weighed.
			cout<<"The number of days since the animal was last weighed "<<today-weightDate<<"."<<endl;
  	    	return(today-weightDate);
	}


}
// ========== an application to use the ZooAnimal class
int  main(){
	ZooAnimal bozo;
	bozo.Create("Bozo", 408, 1027, 400);
		char* name= bozo.reptName();
	bozo.daysSinceLastWeighed(1000);
    bozo.Destroy ();

	return 0;
}



