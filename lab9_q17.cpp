#include <iostream>
using namespace std;
//Implement your versions for the following functions:

//Strcpy

void strcpy(int a=0,int b=0,int c=0,int d=0){
	char arr[6]={'D','e','e','p','a','n'};char array[12]={'C','h','a','k','r','a','b','a','r','t','t','y'};char ar[7];char arra[13];
	while(a!=6){
		ar[c]=arr[a];
		cout<<ar[c];
		a++;c++;
		}
	ar[6]='\0';
	while(b!=12){
		arra[d]=array[b];
		cout<<arra[d];
		b++;d++;
		}
	arra[12]='\0';
	cout<<" "<<endl;
}
//Strcat

void strcat(int a=0,int b=0,int c=0){
	char arr[6]={'D','e','e','p','a','n'};char array[12]={'C','h','a','k','r','a','b','a','r','t','t','y'};char ar[19];
	while(a!=6){
		ar[c]=arr[a];
		cout<<ar[c];
		a++;c++;
		}

	while(b!=12){
		ar[c]=array[b];
		cout<<ar[c];
		b++;c++;
		}
	ar[19]='\0';
	cout<<" "<<endl;
}
//Strlen

void strlen(int a,int b){
	char arr[6]={'D','e','e','p','a','n'};char ar[7];
	while(a!=6){
		ar[b]=arr[a];
		a++;b++;
		}
	cout<<b<<endl;
	cout<<" "<<endl;
}
//Strcmp

void strcmp(){
	char str[3]={'c','a','t'}; char arr[3]={'d','o','g'};
	if((str[3])!=(arr[3])){
		cout<<"both the strings are different."<<endl;
		}
	else{
		cout<<"both the strings are same."<<endl;
	}	
	cout<<" "<<endl;
}
//Strchr

void strchr(char a,int i=0){
	char arr[6]={'D','e','e','p','a','n'};a=arr[i];
	while(i<6){
		if(a==arr[3]){
			cout<<"The position of 'p'in Deepan : "<<i+1<<endl;
			}
		i++;
	}
	cout<<" "<<endl;
}
//Strstr

void strstr(int a=0){
    char arr[6]={'D','e','e','p','a','n'};char array[12]={'C','h','a','k','r','a','b','a','r','t','t','y'};char str[5]={'N','I','S','E','R'};
	while(a<11){
		if(a==6){
			cout<<arr<<str<<endl;
			}
		a++;
	}			
	cout<<" "<<endl;
}
int main(){
	int a=0;int b=0;int c=0;int d=0;
    cout<<"the given string is 'DeepanChakrabartty'."<<endl; 
	cout<<"the strcpy of the given string :"<<endl;
	strcpy(a,b,c,d);
	cout<<"the strings are 'Deepan' and 'Chakrabartty'."<<endl;
	cout<<"the strcat of the given strings :"<<endl;
	strcat(a,b,c);
	cout<<"the given string is 'Deepan'. "<<endl;
	cout<<"the strlen of the given string :"<<endl;
	strlen(a,b);
	cout<<"the strings are 'cat' and 'dog'."<<endl;
	cout<<"they can be compared as: "<<endl;
	strcmp();
	cout<<"the given string is 'Deepan'. "<<endl;
	strchr(a,b);
	cout<<"the given string is 'DeepanChakrabartty' and the replaced string of 'Chakrabartty' is 'NISER'."<<endl;
	cout<<"the strstr of the given string :"<<endl;
	strstr(a);
	return 0;
}

