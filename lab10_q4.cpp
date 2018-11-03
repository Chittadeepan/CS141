#include <iostream>
using namespace std;

// ********************************************************************
//  Declaration of class Point
// ********************************************************************

// class Point represents a two-dimensional point
class Point
{
public:
  // default class constructor (with no arguments):
  Point(); 

  // class constructor that sets the coordinates x, y to the values xval,
  // yval:
  Point(int xval, int yval);

  // member function for moving a point by dx, dy:
  void Move(int dx, int dy);

  // member functions for getting values of x, y:
  int Get_X() const;
  int Get_Y() const;

  // member functions for setting x, y to xval, yval respectively  
  void Set_X(int xval);
  void Set_Y(int yval);

//Lab 7 exercise 4.1. Add declaration of member function Print here:
 void printmemberfunction();
// private data members x, y represent coordinates of the point:
private:
  int X;
  int Y;
};  


// ********************************************************************
//  Methods for class Point
// ********************************************************************

// class constructor sets X, Y to zero when no values are specified:
Point::Point()
{
  X = 0;
  Y = 0;
}

// class constructor sets X, Y to given values xval, yval:
Point::Point(int xval, int yval)
{
  X = xval;
  Y = yval;
}

// member function Move: increases the x coordinate by dx and the y
// coordinate by dy.
void Point::Move(int dx, int dy)
{
  X += dx;
  Y += dy;
}

// Get_X returns the value of the X coordinate
int Point::Get_X() const
{
  return X;
}

// Get_Y returns the value of the Y coordinate
int Point::Get_Y() const
{
  return Y;
}

// Set_X sets the value of X coordinate to xval
void Point::Set_X(int xval)
{
  X = xval;
} 

// Set_Y sets the value of Y coordinate to yval
void Point::Set_Y(int yval)
{
  Y = yval;
} 


//Lab 7 exercise 4.1. Add definition of member function print:
void Point:: printmemberfunction(){
 cout<<"The coordinates are :"<<"("<<X<<","<<Y<<")"<<endl;
}


//  Declaration of class Rectangle
	class Rectangle{

//Lab 7 exercise 4.2, 4.3: Add class Rectangle declaration HERE: 
	
  private:
	Point A,B,C,D;
  public:
	Rectangle(Point L,Point M)
		{A.Set_X(L.Get_X());
  	 A.Set_Y(L.Get_Y());
 		 B.Set_Y(L.Get_Y());
  	 B.Set_X(M.Get_X());
  	 C.Set_X(M.Get_X());
	 	 C.Set_Y(M.Get_Y());
		 D.Set_X(L.Get_X());
		 D.Set_Y(M.Get_Y());
	}
 Rectangle()
 	{
  	A.Set_X(0);A.Set_Y(0);B.Set_X(1);B.Set_Y(0);C.Set_X(0);
	 	 C.Set_Y(1);
		 D.Set_X(1);
		 D.Set_Y(1);
 }
 void printrectangle();
private:
int side1();int side2();
public:
int area();
 
};
//  Methods for class Rectangle
void Rectangle:: printrectangle()
 {
    cout<<"A :";A.printmemberfunction();
	cout<<"B :";B.printmemberfunction();
	cout<<"C :";C.printmemberfunction();
	cout<<"D :";D.printmemberfunction();
}
// Set_X sets the value of X coordinate to xval

//Lab 7 exercise 4.2, 4.3. Add class Rectangle methods HERE: 

int Rectangle::side1(){
	int length; 
	return (B.Get_X())-(A.Get_X());
}
int Rectangle::side2(){
	int breadth;  
	return(D.Get_Y())-(A.Get_Y());
}
int Rectangle::area(){
	int area;
	area=side1() * side2();
	cout<<"The area of the rectangle="<<area<<endl;
	return area;
}

//  main() function for testing classes Point and Rectangle
int main()
{
 
	
// Testing classes Point and Rectangle

// Declaring a point using default class constructor (x = y = 0):
  Point p1;
  cout<< "The x value for p1 is " << p1.Get_X() << endl;
  cout<< "The y value for p1 is " << p1.Get_Y() << endl;

// Declaring a point with coordinates X = 2, Y = 3:
  Point p2(2, 3);
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

//Lab 7 exercise 4.1. Test member function print on points p1, p2:
	p2.printmemberfunction();
// Moving point p2 by (1,-1):
  p2.Move(1, -1);
  cout<< "After the move:" << endl;
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;
	

//Lab 7 Exercises 4.2, 4.3. Testing of the class Rectangle goes here:  
	Rectangle rect(p1,p2);
  	//Rectangle rect1;
  	rect.printrectangle();
	rect.area();
	
  	return 0;
}




