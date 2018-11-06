#include <iostream>
using namespace std;
class ZooAnimal
{
 private:
	char *name;
	int cageNumber;
	int weightDate;
	int weight;
	ZooAnimal *mother; 
 public:
	void Create (char*,int, int, int); // create function
	void Destroy (); // destroy function
	void isMotherOf (ZooAnimal &);
	void changeWeight(int);
	//make changeWeightDate the appropriate single line inline member function changeWeightDate.
	inline void changeWeightDate (int today){
		int WeightDate;
//The single line needed should set the data member weightDate equal to the parameter today.
		WeightDate=today;
		cout<<"The new weight date :"<<WeightDate<<"."<<endl;
}	
	char* reptName ();
	int reptWeight ();
	void reptWeight (int);
	inline int reptWeightDate ()
	{
	int WeightDate;
	return WeightDate;
	}
	int daysSinceLastWeighed (int,int);
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

   char* ZooAnimal::reptName ()
   {
    return name;
   }
int ZooAnimal::daysSinceLastWeighed(int today,int weightDate)
{
    int startday, thisday;
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;
    if (thisday < startday)
       {
           thisday += 360;
           cout<<"The number of days since the animal was last weighed "<<thisday-startday<<"."<<endl;
		return (thisday-startday);
       }

	else if (today < weightDate)
         { today += 360;
			cout<<"The number of days since the animal was last weighed "<<today-weightDate<<"."<<endl;
  		return(today-weightDate);
    }

}

void ZooAnimal::isMotherOf(ZooAnimal &x)
{
    x.mother=&x;
    cout<<"The pointer value is: "<<x.mother<<"."<<endl;
}
int main(){
ZooAnimal bozo;int WeightDate;
	bozo.Create("Bozo", 408, 1027, 400);
     	char* name= bozo.reptName();
    bozo.daysSinceLastWeighed(1000,1027);
    bozo.changeWeightDate(1000);
    	WeightDate=bozo.reptWeightDate();
    bozo.isMotherOf(bozo);
	bozo.Destroy ();
	
	return 0;
}
