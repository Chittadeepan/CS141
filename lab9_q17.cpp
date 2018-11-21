#include <iostream>
using namespace std;
//Implement your versions for the following functions:

//Strcpy

void strcpy(int a=0,int b=0,int c=0,int d=0,char arr[6],char arrays[12],char  arra[13], char ar[7]){
	while(a!=6)
        {
		ar[c]=arr[a];
		cout<<ar[c];
		a++;
        c++;
		}
	ar[6]='\0';
	while(b!=12)
        {
		arra[d]=arrays[b];
		cout<<arra[d];
		b++;d++;
		}
	arra[12]='\0';
	cout<<" "<<endl;
}
//Strcat

void strcat(int a=0,int b=0,int c=0,char arr[6], char ar[7],char arrays[12]){

	while(a!=6){
		ar[c]=arr[a];
		cout<<ar[c];
		a++;c++;
		}

	while(b!=12){
		ar[c]=arrays[b];
		cout<<ar[c];
		b++;c++;
		}
	ar[19]='\0';
	cout<<" "<<endl;
}
//Strlen

void strlen(int a,int b,char arr[6], char ar[7]){

	while(a!=6){
		ar[b]=arr[a];
		a++;b++;
		}
	cout<<b<<endl;
	cout<<" "<<endl;
}
//Strcmp

void strcmp(char arr[6], char str[13]){

	if((str[13])!=(arr[6])){
		cout<<"both the strings are different."<<endl;
		}
	else{
		cout<<"both the strings are same."<<endl;
	}
	cout<<" "<<endl;
}
//Strchr

void strchr(char e,int i=0, char arr[6]){

	while(i<6){
		if(e==arr[i]){
			cout<<"The position of 'p'in Deepan : "<<i+1<<endl;
			}
		i++;
	}
	cout<<" "<<endl;
}
//Strstr

void strstr(int a=0,char arr[6],char arrays[12],char str1[5] ){

	while(a<11){
		if(a==6){
			cout<<arr<<str1<<endl;
			}
		a++;
	}
	cout<<" "<<endl;
}
int main(){
	int a=0;int b=0;int c=0;int d=0; int i=0;char e='p';
	char arr[6]={'D','e','e','p','a','n'};
	char arrays[12]={'C','h','a','k','r','a','b','a','r','t','t','y'};
	char ar[7];
	char arra[13];
	char str[13]={'c','a','t'};
    char str1[5]={'N','I','S','E','R'};
    cout<<"the given string is 'DeepanChakrabartty'."<<endl;
	cout<<"the strcpy of the given string :"<<endl;
	strcpy(a,b,c,d ,arr,arrays,ar,arra);
	cout<<"the strings are 'Deepan' and 'Chakrabartty'."<<endl;
	cout<<"the strcat of the given strings :"<<endl;
	strcat(a,b,c, arr, ar, arrays);
	cout<<"the given string is 'Deepan'. "<<endl;
	cout<<"the strlen of the given string :"<<endl;
	strlen(a,b, arr, ar);
	cout<<"the strings are 'cat' and 'Deepan'."<<endl;
	cout<<"they can be compared as: "<<endl;
	strcmp(arr,str);
	cout<<"the given string is 'Deepan'. "<<endl;
	strchr(e,i,arr);
	cout<<"the given string is 'DeepanChakrabartty' and the replaced string of 'Chakrabartty' is 'NISER'."<<endl;
	cout<<"the strstr of the given string :"<<endl;
	strstr(a,arr,arrays,str1);
	return 0;
}
