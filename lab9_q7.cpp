#include<iostream>
using namespace std;
//Write a function that returns a pointer to the maximum value of an array of double's.  If the array is empty, return NULL.
void* max(double* i, int size){
  if (size == 0){
    return NULL;
	}
  else {
    double *temporaryMax;// pointer points to the running max
    double *p;    // work pointer to traverse the array pointed by a

    temporaryMax = i; // running max set to the first (0th) element
    p = i+1;   // work pointer starts from the next (1th) element

    for (int j = 0; j < (size-1); j++) {
      // If the element pointed by the work pointer is
      // larger than the element pointed by the running max,
      // update the running max pointer.
      if (*p > *temporaryMax){
        temporaryMax = p;
		}
      // Increment the work pointer nonetheless.
     p++;
     }

    // After the loop, the running max pointer points to the
    // largest element in the whole array.  Return the pointer.
   cout<<*temporaryMax<<endl;
    }
}
int  main(){
	double a[100];int size;
    cout<<"give the size of the array"<<endl;
    cin>>size;
   
	if (size!=0){
		for(int j=0; j<size; ++j)
			{cout<<"Give the "<<j<<" th element of the array."<<endl;
			cin >> a[j];
		     }

		cout<<"the max value is :"<<endl;
		max(a,size);
	}
	else{
		cout<<"There is no max value as there are no elements in the array."<<endl;
	}
	return 0;
}
