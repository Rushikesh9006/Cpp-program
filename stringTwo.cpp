#include <iostream>
#include <cstring>
using namespace std;

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
	MyString a = "Hello how are you"; //parameterized ctor
	a.disp();
	{
		MyString b = a; //copy ctor
		b.disp();
	}//dtor for obj b is called 
	a.disp();
}//dtor for obj a is called 

