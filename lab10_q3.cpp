#include<iostream>
using namespace std;
//Create a class for rectangle
class rectangle{
public:
//stores data of length and breadth
	int length;
	int breadth;
//has two functions : area() and perimeter()
	int area(int,int);
	int perimeter(int,int);
};
int rectangle::area(int length,int breadth){
		int area;
		area=length*breadth;
		cout<<area<<endl;
		return area;
	}
int rectangle::perimeter(int length,int breadth){
		int perimeter;
		perimeter=((length+breadth)*2);
		cout<<perimeter<<endl;
		return perimeter;
	}

int main(){
	int length1,breadth1,length2,breadth2;
	rectangle rect1;rectangle rect2;
	
	cout<<"give the length and breadth of 1st rectangle"<<endl;
	cin>>length1>>breadth1;
	cout<<"give the length and breadth of 2nd rectangle"<<endl;
	cin>>length2>>breadth2;
	cout<<"area of 1st rectangle:"<<endl;
	rect1.area(length1,breadth1);
	cout<<"perimeter of 1st rectangle:"<<endl;
	rect1.perimeter(length1,breadth1);
	cout<<"area of 2nd rectangle:"<<endl;
	rect2.area(length2,breadth2);
	cout<<"perimeter of 2nd rectangle:"<<endl;
	rect2.perimeter(length2,breadth2);
	return 0;
}


