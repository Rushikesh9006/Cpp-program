#include <iostream>
#include <cstring>
using namespace std;
/*
* Simple string class 
*
*/


class MyString{
	int len;
	char str[100];
public:
	MyString(){
		len = 0;
		str[0] = 0;
	}
	MyString(const char *st){
		len = strlen(st);
		strcpy(str, st);
	}
	
	void disp(){
		cout<<"Len: "<<len<<"\t\tStr: "<<str<<endl;
	}	
};

int main(){
	MyString a = "Hello how are you";
	a.disp();
	MyString b;
	b.disp();
}
