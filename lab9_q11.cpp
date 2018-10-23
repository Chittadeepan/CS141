#include<iostream>
using namespace std;
int main(){
// declare variables of all predefined sizes  
	int a;char b;float c;double d;bool e;long f;
//declare corresponding pointers (of all predefined types).
    int *p1;char *p2;float *p3;double *p4;bool *p5;long *p6;
// Print out the sizes of each of variables and pointer variables.
	
    cout<<"The size of a = "<<sizeof a<<endl;
	cout<<"The size of b = "<<sizeof b<<endl;
	cout<<"The size of c = "<<sizeof c<<endl;
	cout<<"The size of d= "<<sizeof d<<endl;
	cout<<"The size of e = " <<sizeof e<<endl;
	cout<<"The size of f = " <<sizeof f<<endl;
	cout<<"The size of *p1 =" <<sizeof *p1<<endl;
	cout<<"The size of *p2 =" <<sizeof *p2<<endl;
	cout<<"The size of *p3 =" <<sizeof *p3<<endl;
	cout<<"The size of *p4 =" <<sizeof *p4<<endl;
	cout<<"The size of *p5 =" <<sizeof *p5<<endl;
	cout<<"The size of *p6 =" <<sizeof *p6<<endl;
	return 0;
}
